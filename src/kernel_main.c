#include <stdio.h>


void kernel_main() {
	return_zero();
}

int return_zero(){
	char *begin_bss = & __bss_start;
	char *end_bss = & __bss_end;
	
	int i = 0;
	for (i = 0; i<sizeof(begin_bss); i++){
		begin_bss[i]=0;
	}
 	return 0; 
}
