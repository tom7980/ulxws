######## Memory & registers #########

XLEN width of integer registers (32bit or 64bit)

32 x registers x0 is always all zeros
one PC register

2^XLEN address space available

word is 32bits (4 bytes), halfword 16bits, doubleword 64bits, quadword 128bits
memory is circular 2^XLEN -1 is next to 0

Memory computations in hardware wrap around modulo 2^XLEN and ignore overflow

Memory consitency defined by RV Weak memory ordering - Total store ordering available but won't implement it

######### Instruction decoder #################

Instructions are 32 bits or compressed into 16 bits, ILEN is length of instructions
IALIGN = 32
Instructions encoded [15:0] all zeros are illegal
[ILEN-1:0] all 1's is illegal

Instructions are stored in memory as 16 bit little endian

Four instruction formats (R/I/S/U) 

op = [6:0]

rs1, rs2 & rd always in same bits

rs2 = [24:20]
rs1 = [19:15]
rd  = [11:7]

Immediates always sign extended - sign in bit 31 of instruction