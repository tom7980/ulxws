localparam ALU_ADD   = 4'h00;
localparam ALU_SUB   = 4'h01;
localparam ALU_SLL   = 4'h02;
localparam ALU_SRL   = 4'h03;
localparam ALU_SRA   = 4'h04;
localparam ALU_OR    = 4'h05;
localparam ALU_AND   = 4'h06;
localparam ALU_XOR   = 4'h07;

localparam ALU_LT    = 4'h0a;
localparam ALU_LTU   = 4'h0b;
localparam ALU_GTE   = 4'h0c;
localparam ALU_GTEU  = 4'h0d;
localparam ALU_EQ    = 4'h0e;
localparam ALU_NEQ   = 4'h0f;

localparam MEM_NO_OP = 4'b0000;
localparam MEM_LOAD_B = 4'b0001;
localparam MEM_LOAD_H = 4'b0010;
localparam MEM_LOAD_W = 4'b0011;
localparam MEM_LOAD_BU = 4'b0100;
localparam MEM_LOAD_HU = 4'b0101;
localparam MEM_STORE_B = 4'b0110;
localparam MEM_STORE_H = 4'b0111;
localparam MEM_STORE_W = 4'b1000;