from lark import Lark
import ctypes

c_int32 = ctypes.c_int32

label_table: dict = {}
current_mem_addr = 0 # We have to work in 4 byte intervals for the binary representations

opcodes = {
    'beq' : {'opcode' : 0b1100011,'funct3' : 0b000, 'imm_type': 'b'},
    'bne' : {'opcode' : 0b1100011,'funct3' : 0b001, 'imm_type': 'b'},
    'blt' : {'opcode' : 0b1100011,'funct3' : 0b100, 'imm_type': 'b'},
    'bge' : {'opcode' : 0b1100011,'funct3' : 0b101, 'imm_type': 'b'},
    'bltu' : {'opcode' : 0b1100011,'funct3' : 0b110, 'imm_type': 'b'},
    'bgeu' : {'opcode' : 0b1100011,'funct3' : 0b111, 'imm_type': 'b'},
    'jalr' : {'opcode' : 0b1100111,'funct3' : 0b000, 'imm_type': 'i'},
    'jal' : {'opcode' : 0b1101111, 'imm_type': 'j'},
    'lui' : {'opcode' : 0b0110111, 'imm_type': 'u'},
    'auipc' : {'opcode' : 0b0010111, 'imm_type': 'u'},
    'addi' : {'opcode' : 0b0010011,'funct3' : 0b000, 'imm_type': 'i'},
    'slli' : {'opcode' : 0b0010011,'funct7' : 0b0000000,'funct3' : 0b001, 'imm_type': 'i'},
    'slti' : {'opcode' : 0b0010011,'funct3' : 0b010, 'imm_type': 'i'},
    'sltiu' : {'opcode' : 0b0010011,'funct3' : 0b011, 'imm_type': 'i'},
    'xori' : {'opcode' : 0b0010011,'funct3' : 0b100, 'imm_type': 'i'},
    'srli' : {'opcode' : 0b0010011,'funct7' : 0b0000000,'funct3' : 0b101, 'imm_type': 'i'},
    'srai' : {'opcode' : 0b0010011,'funct7' : 0b0100000,'funct3' : 0b101, 'imm_type': 'i'},
    'ori' : {'opcode' : 0b0010011,'funct3' : 0b110, 'imm_type': 'i'},
    'andi' : {'opcode' : 0b0010011,'funct3' : 0b111, 'imm_type': 'i'},
    'add' : {'opcode' : 0b0110011,'funct7' : 0b0000000,'funct3' : 0b000, 'imm_type': 'r'},
    'sub' : {'opcode' : 0b0110011,'funct7' : 0b0100000,'funct3' : 0b000, 'imm_type': 'r'},
    'sll' : {'opcode' : 0b0110011,'funct7' : 0b0000000,'funct3' : 0b001, 'imm_type': 'r'},
    'slt' : {'opcode' : 0b0110011,'funct7' : 0b0000000,'funct3' : 0b010, 'imm_type': 'r'},
    'sltu' : {'opcode' : 0b0110011,'funct7' : 0b0000000,'funct3' : 0b011, 'imm_type': 'r'},
    'xor' : {'opcode' : 0b0110011,'funct7' : 0b0000000,'funct3' : 0b100, 'imm_type': 'r'},
    'srl' : {'opcode' : 0b0110011,'funct7' : 0b0000000,'funct3' : 0b101, 'imm_type': 'r'},
    'sra' : {'opcode' : 0b0110011,'funct7' : 0b0100000,'funct3' : 0b101, 'imm_type': 'r'},
    'or' : {'opcode' : 0b0110011,'funct7' : 0b0000000,'funct3' : 0b110, 'imm_type': 'r'},
    'and' : {'opcode' : 0b0110011,'funct7' : 0b0000000,'funct3' : 0b111, 'imm_type': 'r'},
    'lb' : {'opcode' : 0b0000011,'funct3' : 0b000, 'imm_type': 'i'},
    'lh' : {'opcode' : 0b0000011,'funct3' : 0b001, 'imm_type': 'i'},
    'lw' : {'opcode' : 0b0000011,'funct3' : 0b010, 'imm_type': 'i'},
    'lbu' : {'opcode' : 0b0000011,'funct3' : 0b100, 'imm_type': 'i'},
    'lhu' : {'opcode' : 0b0000011,'funct3' : 0b101, 'imm_type': 'i'},
    'sb' : {'opcode' : 0b0100011,'funct3' : 0b000, 'imm_type': 's'},
    'sh' : {'opcode' : 0b0100011,'funct3' : 0b001, 'imm_type': 's'},
    'sw' : {'opcode' : 0b0100011,'funct3' : 0b010, 'imm_type': 's'},
    'fence' : {'opcode' : 0b0001111,'funct3' : 0b000},
    'fence_i' : {'opcode' : 0b0001111,'funct7' : 0b0000000,'funct3' : 0b001},
    'ecall' : {'opcode' : 0b1110011,'funct7' : 0b0000000,'funct3' : 0b000},
    'ebreak' : {'opcode' : 0b1110011,'funct7' : 0b0000000,'funct3' : 0b000},
    'csrrw' : {'opcode' : 0b1110011,'funct3' : 0b001},
    'csrrs' : {'opcode' : 0b1110011,'funct3' : 0b010},
    'csrrc' : {'opcode' : 0b1110011,'funct3' : 0b011},
    'csrrwi' : {'opcode' : 0b1110011,'funct3' : 0b101},
    'csrrsi' : {'opcode' : 0b1110011,'funct3' : 0b110},
    'csrrci' : {'opcode' : 0b1110011,'funct3' : 0b111},
    'mret' : {'opcode' : 0b1110011,'funct7' : 0b0011000,'funct3' : 0b000},
    'system' : {'opcode' : 0b1110011},
    'wfi' : {'opcode' : 0b1110011,'funct7' : 0b0001000,'funct3' : 0b000}
}

reg_map = {
    'x0' : 0b00000,
    'x1' : 0b00001,
    'x2' : 0b00010,
    'x3' : 0b00011,
    'x4' : 0b00100,
    'x5' : 0b00101,
    'x6' : 0b00110,
    'x7' : 0b00111,
    'x8' : 0b01000,
    'x9' : 0b01001,
    'x10' : 0b01010,
    'x11' : 0b01011,
    'x12' : 0b01100,
    'x13' : 0b01101,
    'x14' : 0b01110,
    'x15' : 0b01111,
    'x16' : 0b10000,
    'x17' : 0b10001,
    'x18' : 0b10010,
    'x19' : 0b10011,
    'x20' : 0b10100,
    'x21' : 0b10101,
    'x22' : 0b10110,
    'x23' : 0b10111,
    'x24' : 0b11000,
    'x25' : 0b11001,
    'x26' : 0b11010,
    'x27' : 0b11011,
    'x28' : 0b11100,
    'x29' : 0b11101,
    'x30' : 0b11110,
    'x31' : 0b11111,
}

def print_as_binary(data):
    result_size = 4 # in bytes
    result = "".join(f"{x:0>8b}" for x in data.to_bytes(result_size, signed=True, byteorder='big'))
    result = "0b" + result
    return result

class Imm_I_Pieces(ctypes.LittleEndianStructure):
    _fields_ = [
        ("bottom_11", c_int32, 11),
        ("rest", c_int32, 21)
    ]

class Immediate_i(ctypes.Union):
    _anonymous_ = ("immediate",)
    _fields_ = [
        ("immediate", Imm_I_Pieces),
        ("as_num", c_int32)
    ]


class Imm_J_Pieces(ctypes.LittleEndianStructure):
    _fields_ = [
        ("bit_one", c_int32, 1),
        ("bits_one_to_ten", c_int32, 9),
        ("bit_eleven", c_int32, 1),
        ("bits_twelve_to_nineteen", c_int32, 8),
        ("bit_twenty", c_int32, 1),
        ("rest", c_int32, 12)
    ]

class Immediate_j(ctypes.Union):
    _anonymous_ = ("immediate",)
    _fields_ = [
        ("immediate", Imm_J_Pieces),
        ("as_num", c_int32)
    ]

class Imm_B_Pieces(ctypes.LittleEndianStructure):
    _fields_ = [
        ("bit_one", c_int32, 1),
        ("bits_one_to_four", c_int32, 4),
        ("bits_five_to_ten", c_int32, 6),
        ("bit_eleven", c_int32, 1),
        ("bit_twelve", c_int32, 1),
        ("rest", c_int32, 20)
    ]

class Immediate_b(ctypes.Union):
    _anonymous_ = ("immediate",)
    _fields_ = [
        ("immediate", Imm_B_Pieces),
        ("as_num", c_int32)
    ]

imm_i_shift = 20
imm_s_shift_one = 25
imm_s_shift_two = 7
imm_u_shift = 12

funct_3_shift = 12
funct_7_shift = 25
reg_d_shift = 7
reg_1_shift = 15
reg_2_shift = 20

def code_gen(t):
    if t.data == 'label':
        label_name = t.children[0].strip(':')
        label_table.update({label_name : current_mem_addr})

    if t.data == 'opcode':
        op, params = t.children

        op_val = 0b00000000000000000000000000000000
        op_val = op_val | opcodes[op.value].get('opcode')

        match opcodes[op.value].get('imm_type'):
            case 'i':

                op_val = op_val | (opcodes[op.value].get('funct3') << funct_3_shift)

                reg_d = reg_map[params.children[0].value]
                reg_1 = reg_map[params.children[1].value]

                op_val = op_val | reg_d << reg_d_shift
                op_val = op_val | reg_1 << reg_1_shift

                immediate = Immediate_i()
                immediate.as_num = int(params.children[2].value)

                op_val = op_val | (immediate.bottom_11 << imm_i_shift)

                output = print_as_binary(op_val)
                print(output)

            case 'j':
                reg_d = reg_map[params.children[0].value]

                immediate_val = 0

                if params.children[1].type == 'LOCATION':
                    immediate_val = label_table.get(params.children[1].value)
                else:
                    immediate_val = params.children[1].value

                imm_parts = Immediate_j()
                imm_parts.as_num = int(immediate_val)

                imm_shuffle = 0
                imm_shuffle = imm_shuffle | imm_parts.bits_twelve_to_nineteen
                imm_shuffle = imm_shuffle | imm_parts.bit_eleven << 8
                imm_shuffle = imm_shuffle | imm_parts.bits_one_to_ten << 9
                imm_shuffle = imm_shuffle | imm_parts.bit_twenty << 19

                op_val = op_val | reg_d << reg_d_shift
                op_val = op_val | imm_shuffle << imm_u_shift

                output = print_as_binary(op_val)
                print(output)

            case 'r':
                op_val = op_val | (opcodes[op.value].get('funct3') << funct_3_shift)
                op_val = op_val | (opcodes[op.value].get('funct7') << funct_7_shift)

                reg_d = reg_map[params.children[0].value]
                reg_1 = reg_map[params.children[1].value]
                reg_2 = reg_map[params.children[2].value]

                op_val = op_val | reg_d << reg_d_shift
                op_val = op_val | reg_1 << reg_1_shift
                op_val = op_val | reg_2 << reg_2_shift

                output = print_as_binary(op_val)
                print(output)

            case 'b':
                op_val = op_val | (opcodes[op.value].get('funct3') << funct_3_shift)

                immediate_val = params.children[2].value

                reg_1 = reg_map[params.children[0].value]
                reg_2 = reg_map[params.children[1].value]
                op_val = op_val | reg_1 << reg_1_shift
                op_val = op_val | reg_2 << reg_2_shift

                imm_parts = Immediate_b()
                imm_parts.as_num = int(immediate_val)

                print(0b1 & imm_parts.bit_eleven)
                print(0b1111 & imm_parts.bits_one_to_four)
                print(0b111111 & imm_parts.bits_five_to_ten)
                print(0b1 & imm_parts.bit_twelve)

                op_val = op_val | (0b1 & imm_parts.bit_eleven) << 7
                op_val = op_val | (0b1111 & imm_parts.bits_one_to_four) << 8
                op_val = op_val | (0b111111 & imm_parts.bits_five_to_ten) << 25
                op_val = op_val | (0b1 & imm_parts.bit_twelve) << 31

                output = print_as_binary(op_val)
                print(output)

            case 's':
                op_val = op_val | (opcodes[op.value].get('funct3') << funct_3_shift)

                immediate_val = params.children[2].value

                reg_1 = reg_map[params.children[0].value]
                reg_2 = reg_map[params.children[1].value]
                op_val = op_val | reg_1 << reg_1_shift
                op_val = op_val | reg_2 << reg_2_shift

                imm_parts = Immediate_b()
                imm_parts.as_num = int(immediate_val)

                op_val = op_val | imm_parts.bit_eleven << 7
                op_val = op_val | imm_parts.bits_one_to_four << 8
                op_val = op_val | imm_parts.bits_five_to_ten << 25
                op_val = op_val | imm_parts.bit_twelve << 31

                op_val = op_val | reg_d << reg_d_shift
                op_val = op_val | imm_shuffle << imm_u_shift

                output = print_as_binary(op_val)
                print(output)


            case 'u':
                reg_d = reg_map[params.children[0].value]

                immediate_val = 0

                if params.children[1].type == 'LOCATION':
                    immediate_val = label_table.get(params.children[1].value)
                else:
                    immediate_val = params.children[1].value

                op_val = op_val | reg_d << reg_d_shift
                op_val = op_val | immediate_val << imm_u_shift

                output = print_as_binary(op_val)
                print(output)






        


assembly_parser = Lark.open('riscvi32.lark', rel_to=__file__, parser='lalr', debug=True)

test = """addi x4,x0,62
addi x3,x0,60
blt x4,x3,-8
add x0,x0,x0
add x0,x0,x0
add x0,x0,x0
add x0,x0,x0
add x0,x0,x0
add x0,x0,x0
"""

tree_out = assembly_parser.parse(test)

for val in tree_out.children:
    code_gen(val)

    if(val.data != 'label'):
        current_mem_addr = current_mem_addr + 4
