#include<stdio.h>
#include<stdlib.h>
struct node
{
    struct node* left_link;
    int data;
    struct node* right_link;
};

    typedef struct node node;
    node* getNode()
    {
    node* p = (node*)malloc(sizeof(node));
    printf("Enter the data for the node: ");
    scanf("%d", &p->data);
    p->left_link = NULL;
    p->right_link = NULL;
    return p;
}
void display(node* header)
{
    node* y = header;
    while(y!=NULL){
    printf("%d <=> ", y->data);
    y = y->right_link;
}
    printf("NULL");
    printf("\n\n");
}
void remove_duplicates(node* header)
{
    node* x = header;
    node* y = header->right_link;
    while(y!=NULL)
    {
    if(x->data < y->data)
    {
    x=x->right_link;
    y = y->right_link;
    }
else{
node* temp = y;
x->right_link = y->right_link;
y = y->right_link;
y->left_link = x;
free(temp);
}}}
int main()
{
        node *header, *p, *q;
    int n;
    printf("Enter the number of nodes: ");
    scanf("%d", &n);
    header = getNode();
    p = header;
    for(int i=1; i<n; i++)
    {
    q = getNode();
    p->right_link = q;
    q->left_link = p;
    p = p->right_link;
    }
    printf("original list: ");
    display(header);
    remove_duplicates(header);
    display(header);
    return 0;
}
