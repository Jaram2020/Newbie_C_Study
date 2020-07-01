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
   node* tmp = malloc(sizeof(node));
   tmp->val = data;
   tmp->next = NULL;
   return tmp; 
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
	node *curr = list -> head;
	if (curr == NULL){
		list -> head = newnode;
	}
	else{
		while (curr->next != NULL){
			curr = curr->next;
		}
		curr->next = newnode;
	} 
	list->size++;
}

/* add a new node at idx */
void add(list* list, node* newnode, int idx){
	if ((idx > list -> size) || (idx < 0)){
		print_list(list);
	}
	else if (idx == 0){
		newnode->next = list->head;
		list->head = newnode;
		list->size++;
	}

	else{
		node *curr = list -> head;
		for (int i=0; i < idx-1; i++){
			curr = curr -> next;
		}
		newnode->next = curr->next;
		curr->next = newnode; 
		list->size++;
	}
}

/* removed the node at idx */
void removed(list* list, int idx){
	if ((idx >= list->size) || (idx < 0)){
		print_list(list);
	}
	else if (idx == 0){
		node* tmp = list->head;
		list->head = tmp->next;
		free(tmp);
		list->size--;
	}
	else{
		node *curr = list->head;
		for (int i=0; i < idx-1; i++){
			curr = curr->next;
		}
		node *tmp = curr->next;
		curr->next = tmp->next;
		free(tmp);

		list->size--;
	}
	
}

/* print all values of nodes in your single linked list */
void print_list(list* list){
	printf("%d\n", list->size);

	node *curr = list -> head;
	while (curr != NULL){
		printf("%d ", curr -> val);
		curr = curr -> next;
	}
	printf("\n");
}
