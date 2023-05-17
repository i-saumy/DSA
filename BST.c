#include<stdio.h>
#include<stdlib.h>
#include<conio.h>

struct node{
	struct node *lchild;
	int info;
	struct node *rchild;
};

struct node *insert(struct node *ptr, int key);
struct node *del(struct node *ptr, int key);
struct node *search(struct node *ptr, int key);
void preorder(struct node *ptr);
void postorder(struct node *ptr);
void inorder(struct node *ptr);
struct node *Min(struct node *ptr);
struct node *Max(struct node *ptr);
int height(struct node *ptr);
void display(struct node *ptr,int level);


int main(){
	struct node *root=NULL,*ptr;
	int choice,k;
	while(1){
		printf("\n 1:Insert \n 2:Delete \n3:Preorder \n4:Inorder \n5:Postorder \n6:Search \n7:Minimum Value \n8:Maximum Value \n9:Height of the tree \n10:Display \n11:Quit");
		printf("\n Enter your choice:");
		scanf("%d",&choice);
		
		switch(choice)
		{
			case 1: printf("\nEnter the key to be inserted");
			        scanf("%d",&k);
			        root=insert(root,k);
			        break;
			        
			case 2: printf("\n Enter the key to be deleted");
			        scanf("%d",&k);
			        root=del(root,k);
			        break;
			        
			case 3: preorder(root);
			        break;
			case 4: inorder(root);
			        break;
			case 5: postorder(root);
			        break;
			case 6: printf("\n Enter the key to be search");
			        scanf("%d",&k);
			        ptr=search(root,k);
			        
			        if(ptr==NULL)
			        {
			        	printf("\n Key not present");
			        	
					}
					else{
						printf("\n Key present");
					}
					
					break;
					
			case 7: ptr = Min(root);
                    if(ptr!=NULL)
                    printf("\nMinimum key is %d\n", ptr->info );
                    break;
                    
            case 8: ptr = Max(root);
                    if(ptr!=NULL)
                    printf("\nMaximum key is %d\n", ptr->info );
                    break;
                    
            case 9: printf("\nHeight of tree is %d\n", height(root));
                    break;
                    
            case 10: printf("\n");
                     display(root,0);
                     printf("\n");
                     break;
					
			case 11: exit(0);
			}
	}
	
	return 0;
}

struct node *insert(struct node *ptr, int key){
	if(ptr==NULL)
	{
		ptr=(struct node *)malloc(sizeof(struct node));
		ptr->info=key;
		ptr->lchild=NULL;
		ptr->rchild=NULL;
		
	}
	
	else if(key<ptr->info)
	{
		ptr->lchild=insert(ptr->lchild,key);
		
	}
	
	else if(key>ptr->info)
	{
		ptr->rchild=insert(ptr->rchild,key);
		
	}
	
	else
	printf("\n Duplicate key");
	
	return ptr;
}


struct node *del(struct node *ptr, int key)
{
 struct node *tmp, *succ;
 if( ptr == NULL)
 {
 printf("\n key not found\n");
 return(ptr);
 }
 if( key < ptr->info )
 ptr->lchild = del(ptr->lchild, key);
 else if( key > ptr->info )
 ptr->rchild = del(ptr->rchild, key);
 else
 {
 
 if( ptr->lchild!=NULL && ptr->rchild!=NULL )
 {
 succ=ptr->rchild;
 while(succ->lchild)
 succ=succ->lchild;
 ptr->info=succ->info;
 ptr->rchild = del(ptr->rchild, succ->info);
 }
 else
 {
 tmp = ptr;
 if( ptr->lchild != NULL )
 ptr = ptr->lchild;
 else if( ptr->rchild != NULL)
 ptr = ptr->rchild;
 else
 ptr = NULL;
 free(tmp);
 }
 }
 return ptr;
}


struct node *search(struct node *ptr, int key){
	
	if(ptr==NULL){
		printf("\n Key not found");
		return NULL;
	}
	
	else if(key<ptr->info)
	return search(ptr->lchild,key);
	
	else if(key>ptr->info)
	return search(ptr->rchild,key);
	
	
	else
	return ptr;
}

void preorder(struct node *ptr){
	if(ptr==NULL)
	return;
	printf("%d",ptr->info);
	preorder(ptr->lchild);
	preorder(ptr->rchild);
}


void inorder(struct node *ptr){
	if(ptr==NULL)
	return;
	
	inorder(ptr->lchild);
	printf("%d",ptr->info);
	inorder(ptr->rchild);
}


void postorder(struct node *ptr){
	if(ptr==NULL)
	return;
	
	postorder(ptr->lchild);
	postorder(ptr->rchild);
	printf("%d",ptr->info);
	
}

struct node *Min(struct node *ptr){
 if(ptr==NULL)
 return NULL;
 else if(ptr->lchild==NULL)
 return ptr;
else
 return Min(ptr->lchild);
}


struct node *Max(struct node *ptr)
{
 if(ptr==NULL)
 return NULL;
 else if(ptr->rchild==NULL)
 return ptr;
 else
 return Max(ptr->rchild);
}

int height(struct node *ptr)
{
 int h_left, h_right;
 if (ptr == NULL)
 return 0;
 h_left = height(ptr->lchild);
 h_right = height(ptr->rchild);
 if (h_left > h_right)
 return 1 + h_left;
 else
 return 1 + h_right;
}


void display(struct node *ptr,int level)
{
 int i;
 if(ptr == NULL )
 return;
 else
 {
 display(ptr->rchild, level+1);
 printf("\n");
 for (i=0; i<level; i++)
 printf(" ");
 printf("%d", ptr->info);
 display(ptr->lchild, level+1);
 }
}
