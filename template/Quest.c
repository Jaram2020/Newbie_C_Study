#include <stdio.h>
#include <stdlib.h>

typedef struct node{
    int val;
    struct node* next;
}node;

typedef struct _list {
	int size;
	node* head;
}list;

node* newnode(int data){
    //fill here
}


list* init_list();
void appendTo(list* list, node* newnode);
void add(list* list, node* newnode, int idx);
void removed(list* list, int idx);
void print_list(list* list);


int main(int argc, char const *argv[]){
	list* linked = init_list();
	for(int i = 0; i < 6; i++){
		appendTo(linked, newnode(i));
	}
	print_list(linked);
	removed(linked, -1);
	add(linked, newnode(10), 3);
	add(linked, newnode(11), 20);
	removed(linked, 5);
	removed(linked, 0);
	add(linked, newnode(12), 0);
	print_list(linked);
	return 0;
}

/* initialize single linked list */
list* init_list(){
	list* tmp = malloc(sizeof(list));
	tmp->size = 0;
	tmp->head = NULL;
	return tmp;
}

void appendTo(list* list, node* newnode){
	//fill here
}

/* add a new node at idx */
void add(list* list, node* newnode, int idx){
	//fill here
}

/* removed the node at idx */
void removed(list* list, int idx){
	//fill here
}

/* print all values of nodes in your single linked list */
void print_list(list* list){
	//fill here
	//Show list size and list number in order
}