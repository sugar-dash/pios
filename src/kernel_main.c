#include <stdio.h>

#include "list_element.h"
#include "gpio.h"
#include "serial.h"
int global;

#define NULL (void*)0
struct list_element b = {NULL,NULL,1};
struct list_element a = {NULL,NULL,5};
struct list_element c = {NULL,NULL,2};
struct list_element *head = &a;
struct list_element* list = &a;

void kernel_main() {
	//return_zero();
	led_init();
	esp_printf(putc, "Current exe level is %d", kernel_main);
	while (1) {
		//led_on();
		//delay();
		//led_off();
		//delay();
	}
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

unsigned long get_count(){
	unsigned long *timer_count_register = 0x3f003004;
	return *timer_count_register;
}
