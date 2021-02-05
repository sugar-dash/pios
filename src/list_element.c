#include "list_element.h"

void list_add(struct list_element *head, struct list_element *new_element){
	list_element *ls = head;
	while(ls->next != NULL){
		ls = ls->next;
	} 
	ls->next = &new_element;
}
void list_remove(struct list_element *element, struct list_element *head){
	
}
