//
`default_nettype none
//

// AXI Byte is 8 bits
// Bursts can contain multiple bytes
// Each beat of a burst is a full data bus width of data
// Each transaction is one burst

module axi4_slave_interface_impl
#(
    parameter AXI_ID_WIDTH = 2,
    parameter AXI_DATA_WIDTH = 8,
    parameter AXI_ADDRESS_WIDTH = 6,
    parameter AXI_USER_DATA_WIDTH = 1
)
(

    // Simple data output, write enable, write address, write data, strobe lines, read enable, read address, read data output to AXI bus
    // This module handles the signalling for the AXI bus plus addressing for slaves

    output  reg                                 o_write_enable,
    output  reg     [AXI_ADDRESS_WIDTH-1:0]     o_write_address,
    output  reg     [AXI_DATA_WIDTH-1:0]        o_write_data,
    output  reg     [(AXI_DATA_WIDTH/8)-1:0]    o_write_strobe,
    
    output  reg                                 o_read_enable,
    output  reg     [AXI_ADDRESS_WIDTH-1:0]     o_read_address,
    input   wire    [AXI_DATA_WIDTH-1:0]        i_read_data,
    
    input   wire				axi_aclk,
    input   wire                                axi_aresetn,
    
    // Write address channel
    
    input   wire    [AXI_ID_WIDTH-1:0]          axi_awid,
    input   wire    [AXI_ADDRESS_WIDTH-1:0]     axi_awaddr,
    input   wire    [7:0]                       axi_awlen,  // burst_len = AXI_AWLEN + 1
    input   wire    [2:0]                       axi_awsize, // bytes per beat on data bus - must not exceed axi_data_width 
    input   wire    [1:0]                       axi_awburst, // 0b00 fixed, 0b01 incr, 0b10 wrap
    input   wire                                axi_awlock,
    input   wire    [3:0]                       axi_awcache,
    input   wire    [2:0]                       axi_awprot,
    input   wire    [3:0]                       axi_awqos, // not well defined
    input   wire    [3:0]                       axi_awregion,
    input   wire    [AXI_USER_DATA_WIDTH-1:0]   axi_awuser,
    input   wire                                axi_awvalid,
    output  reg                                 axi_awready, // default high for single cycle transfers - can be high even if valid isn't

    // write data channel

    input   wire    [AXI_DATA_WIDTH-1:0]        axi_wdata,
    input   wire    [(AXI_DATA_WIDTH/8)-1:0]    axi_wstrb,
    input   wire                                axi_wlast,
    input   wire    [AXI_USER_DATA_WIDTH-1:0]   axi_wuser,
    input   wire                                axi_wvalid,
    output  reg                                 axi_wready, // Can be high before AWVALID && WVALID

    // Write response channel

    output reg      [AXI_ID_WIDTH-1:0]          axi_bid, // Same as AWID this is a response to
    output reg      [1:0]                       axi_bresp,
    output reg      [AXI_USER_DATA_WIDTH-1:0]   axi_buser,
    output reg                                  axi_bvalid, // Low on Reset - asserted until 1 clock after BREADY, WLAST must be high before this
    input  wire                                 axi_bready,

    // Read address channel
    
    input   wire    [AXI_ID_WIDTH-1:0]          axi_arid,
    input   wire    [AXI_ADDRESS_WIDTH-1:0]     axi_araddr,
    input   wire    [7:0]                       axi_arlen,  // burst_len = AXI_ARLEN + 1
    input   wire    [2:0]                       axi_arsize, // bytes per beat on data bus - must not exceed AXI_DATA_WIDTH 
    input   wire    [1:0]                       axi_arburst, // 0b00 FIXED, 0b01 INCR, 0b10 WRAP
    input   wire                                axi_arlock,
    input   wire    [3:0]                       axi_arcache,
    input   wire    [2:0]  axi_arprot,
    input   wire    [3:0]  axi_arqos, // Not well defined
    input   wire    [3:0]  axi_arregion,
    input   wire    [AXI_USER_DATA_WIDTH-1:0]   axi_aruser,
    input   wire                                axi_arvalid,
    output  reg                                 axi_arready, // Default High for single cycle transfers - can be high even if valid isn't

    // Read data channel

    output  reg     [AXI_ID_WIDTH-1:0]          axi_rid, // Should be same as ARID this is a response to
    output  reg     [AXI_DATA_WIDTH-1:0]        axi_rdata,
    output  reg     [1:0]                       axi_rresp,
    output  reg                                 axi_rlast,
    output  reg     [AXI_USER_DATA_WIDTH-1:0]   axi_ruser,
    output  reg                                 axi_rvalid, // Low on Reset - asserted until 1 clock after RREADY - only assert on data available, arready must be high before this.
    input   wire                                axi_rready
);

endmodule
