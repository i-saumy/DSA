#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node* next;
};
    struct node* head = NULL;
    struct node*create_node(int);
    void insert(int);
    void reverse();
    void print();
    
    struct node* create_node(int data)
{
    struct node* new_node = (struct node*) malloc (sizeof(struct node));
    if (new_node == NULL)
    {
        printf("Memory can't be allocated for new node");
        return NULL;
    }
    else
    {
        new_node -> data = data;
        new_node -> next = NULL;
        return new_node;
    }
}
void insert(int data)
{
    struct node* new_node = create_node(data);
    if (new_node != NULL)
    {
        new_node -> next = head;
        head = new_node;
    }
}
void reverse()
{
    struct node* prev = NULL, *curr = head, *next = NULL;
    while (curr != NULL)
    {
        next = curr -> next;
        curr ->next = prev;
        prev = curr;
        curr = next;
    }
    head = prev;
}
void print()
{
    struct node* temp = head;
    while (temp!=NULL)
    {
        printf("%d ", temp->data);
        temp = temp->next;
    }
    
}
void main()
{
    insert(99);
    insert(32);
    insert(100);
    insert(52);
    insert(111);
    printf("Linked List before reversed: ");
    print();
    reverse();
    printf("\nLinked List after reversed: ");
    print();
}
