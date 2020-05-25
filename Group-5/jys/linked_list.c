#include <stdio.h>
#include <stdlib.h>

typedef struct node
{
    int val;
    struct node *next;
} node;

typedef struct _list
{
    int size;
    node *head;
} list;

node *newnode(int data)
{
    //fill here
    node *tmp = (node *)malloc(sizeof(node));
    tmp->val = data;
    tmp->next = NULL;
    return tmp;
}

list *init_list();
void appendTo(list *list, node *newnode);
void add(list *list, node *newnode, int idx);
void removed(list *list, int idx);
void print_list(list *list);

int main(int argc, char const *argv[])
{
    list *linked = init_list();
    for (int i = 0; i < 6; i++)
    {
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
list *init_list()
{
    list *tmp = malloc(sizeof(list));
    tmp->size = 0;
    tmp->head = NULL;

    return tmp;
}

void appendTo(list *list, node *newnode)
{
    //fill here
    if (list->size == 0)
    {
        list->head = newnode;
        list->size++;
    }
    else if (list->size == 1)
    {
        list->head->next = newnode;
        list->size++;
    }
    else
    {
        // list -> size > 1
        node *current = list->head;
        while (current->next != NULL)
        {
            current = current->next;
        }
        current->next = newnode;
        list->size++;
    }
}

/* add a new node at idx */
void add(list *list, node *newnode, int idx)
{
    //fill here
    int cnt = 0;
    node *tmp = (node *)malloc(sizeof(node));
    if (list->size > idx)
    {
        if (idx == 0)
        {
            /* code */
            list->head->val = newnode->val;
        }
        else
        {
            node *current = list->head;
            while (current->next != NULL)
            {
                /* code */
                if (cnt == idx)
                {
                    /* code */
                    tmp = current->next;
                    current->next = newnode;
                    current->next->next = tmp;
                    list->size++;
                }
                current = current->next;
                cnt++;
            }
        }
    }
    else
    {
        printf("Error (index out of range)\n");
    }
}

/* removed the node at idx */
void removed(list *list, int idx)
{
    //fill here
    int cnt = 0;
    node *tmp = (node *)malloc(sizeof(node));
    if (list->size > idx && idx >= 0)
    {
        node *current = list->head;
        while (current->next != NULL)
        {
            /* code */
            if (cnt == idx - 1)
            {
                tmp = current->next;
                current->next = current->next->next;
                list->size++;
                free(tmp);
            }
            current = current->next;
            cnt++;
        }
    }
    else
    {
        printf("Error (index out of range)\n");
    }
}

void print_list(list *list){
  node *current = list->head;
  while(current->next != NULL){
    printf("%d\n", current->val);
    current = current->next;
  }
}