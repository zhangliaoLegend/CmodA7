/* This file is automatically generated based on your hardware design. */
#include "memory_config.h"
#include "xparameters.h"

struct memory_range_s memory_ranges[] = {
	/* microblaze_0_local_memory_dlmb_bram_if_cntlr memory will not be tested since application resides in the same memory */
		{"Cellular Ram", "emc", XPAR_EMC_0_S_AXI_MEM0_BASEADDR, 524287}
};

int n_memory_ranges = 1;
