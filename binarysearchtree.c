#include<stdio.h>
#include<stdlib.h>
struct node{
int valve;
struct node *l;
struct node *r;
}*root=NULL ,*temp=NULL,*t1,*t2;

 void main()
 {
 int n,ele,ch;
while(1)
{
printf("1.insert\n 2.search\n 3.delete \n 4.inorder traversal\n");
scanf("%d",&ch);
 switch(ch)
{
case 1:insert();
       break;
case 2:printf("enter the element to be searched");
       scanf("%d",&ele);
       root=searching(root,ele);
       break;
case 3:delete();
       break;
case 4:inorder(root);
       break;
 default:return(0);
}

}


 }

 void create ()
 {
    int x;
     printf("say the valve");
     scanf("%d",x);
   temp=(struct node*)malloc(sizeof(struct node));
   temp->valve=x;
   temp->l=NULL;
   temp->r=NULL;

 }
 void insert()
 {
     //create();
      int x;
     printf("say the valve");
     scanf("%d",x);
   temp=(struct node*)malloc(sizeof(struct node));
   temp->valve=x;
   temp->l=NULL;
   temp->r=NULL;
     if(root==NULL)
        root=temp;
     else
        search(root);

 }

 void search(struct node *t)
 {
     if(temp->valve > t->valve && t->r != NULL)
     {
         search(temp->valve);
     }
     else if(temp->valve>t->valve && t->r==NULL)
     {
         t->r=temp;
     }
     else if(temp->valve < t->valve && t->l!=NULL)
     {
         search(temp->valve);
     }
     else if ((temp->valve < t->valve)&&(t->l == NULL))
     {
         t->l = temp;
     }
 }

 void delete()
 {

     int n;
     if(root==NULL)
     {
         printf("no elements to delete in the tree");
     }
     else{
        printf("enter the element to be deleted");
        scanf("%d",&n);
        deletesearch(root,n);
        }
 }
void deletesearch(struct node *t,int n)
{
    if(n>t->valve){
            t1=t;
        searchdelete(t->r,n);
    }
    else if(n<t->valve){
        t1=t;
        searchdelete(t->l,n);
    }
    else if (n==t->valve)
        {
        delete2(t);
    }
}
void delete2(struct node *t)
{
    if(t->l==NULL && t->r== NULL){
        if(t1->l==t){
            t->l==NULL;}
        else
           {
               t->r==NULL;
    }
    t==NULL;
    free(t);
    }

else if((t->r == NULL))
    {
        if (t1 == t)
        {
            root = t->l;
            t1 = root;
        }
        else if (t1->l == t)
        {
            t1->l = t->l;

        }
        else
        {
            t1->r = t->l;
        }
        t = NULL;
        free(t);
        return;
    }
    else if(t->l == NULL)
    {
        if (t1 == t)
        {
            root = t->r;
            t1 = root;
        }
        else if (t1->r == t)
            t1->r = t->r;
        else
            t1->l = t->r;
        t == NULL;
        free(t);
        return;
    }
    else if ((t->l != NULL) && (t->r != NULL))
    {
        t2 = root;
        if (t->r != NULL)
        {
            k = smallest(t->r);
            flag = 1;
        }
        else
        {
            k =largest(t->l);
            flag = 2;
        }
        deletesearch(root, k);
        t->value = k;
    }

}
int smallest(struct node *t)
{
    t2 = t;
    if (t->l != NULL)
    {
        t2 = t;
        return(smallest(t->l));
    }
    else
        return (t->value);
}
int largest(struct node *t)
{
    if (t->r != NULL)
    {
        t2 = t;
        return(largest(t->r));
    }
    else
        return(t->value);
}
struct node *searching(struct node *root, int key)
{
    if(root == NULL)
    {
        printf("no nodes in tree\n");
        return;
    }
    else
    {
        if(root->data==key)

            printf("Key found");

        if(key < root->data )
            root->l = search(root->l,key);
         if(key > root->data )
            root->r = search(root->r,key);
    }
    return(root);
}
