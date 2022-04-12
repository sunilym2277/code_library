#include<stdio.h>
#include<stdlib.h>
typedef struct node
{
int val;
struct node *right;
struct node *left;
}NODE;
NODE *root;
void createNode(int value)
{
NODE *list;
list = malloc(sizeof(NODE));
if(root==NULL)
{
	root=list;
	root->val=value;
	root->right=NULL;
	root->left=NULL;
}
else
{
	NODE *temp;
	temp=root;
	while(temp->right!=NULL)
	{
		temp=temp->right;
	}
	temp->right = list;
	list->val=value;
	list->right=NULL;
	list->left=temp;
	
}
}
void print()
{
NODE *temp;
temp = root;
while(temp!=NULL)
{
	printf("%d\n",temp->val);
	temp=temp->right;
}
}
void printReverse()
{
NODE *temp;
temp = root;
while(temp->right!=NULL)
{
	temp=temp->right;
}
while(temp!=NULL)
{
	printf("%d\n",temp->val);
	temp=temp->left;
}
}
void deleteRoot()
{
root=root->right;
root->left->right=NULL;
NODE *temp;
temp=root->left;
root->left=NULL;
free(temp);
}
int main()
{
int n;
int arr[20];
printf("Enter number of entries:");
scanf("%d",&n);
for(int i=0;i<n;i++)
{
scanf("%d",&arr[i]);
createNode(arr[i]);
}
print();
deleteRoot();
print();
//printReverse();
return(0);
}
