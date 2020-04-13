#include <stdio.h>
#include <stdlib.h>

typedef struct _node {
	int value;
	struct _node* next;
//	struct _node* prev; // Circular, Doubly linked list
} node;
typedef struct _linked_list {
	node* head;
//	node* tail; // Circular, Doubly linked list
} linked_list;

void InitTest(linked_list*);
void PrintList(linked_list*);

node* CreateNode(int);	// Use this to create new node
void DestroyNode(node*); // Use this to destroy node

void Add(linked_list* list, int value) {
	//TODO Create node and add to list
}
node* Remove(linked_list* list, int value) {
	//TODO Remove first node that has same value in the list
	//TODO You need to check list will be empty so head must be NULL
	return NULL;
}
int Get(linked_list* list, int index) {
	//TODO Get value from node
	return 0;
}
int Count(linked_list* list) {
	//TODO Count nodes and return it
	return 0;
}
void Clear(linked_list* list) {
	//TODO Destroy all node
}

int main() {
	linked_list ll;
	InitTest(&ll);

	Add(&ll, 50);
	printf("%d\n", Get(&ll, 1));
	DestroyNode(Remove(&ll, 32));
	printf("%d\n", Count(&ll));
	Clear(&ll);
	Add(&ll, 20);

	PrintList(&ll);
	return 0;
}


node* CreateNode(int value) {
	node* new_one = (node*)malloc(sizeof(node));
	new_one->next = NULL;
	new_one->value = value;
	return new_one;
}

void DestroyNode(node* to) {
	free(to);
}

void InitTest(linked_list* ll) {
	ll->head = CreateNode(32);
	ll->head->next = CreateNode(10);
}
void PrintList(linked_list* ll) {
	node* now = ll->head;
	int i = 1;
	while(now != NULL) {
		printf("list[%d]= %d\n", i++, now->value);
		now = now->next;
	}
}
