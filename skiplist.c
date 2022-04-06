#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
#include <time.h>
#define SKIPLIST_MAX_LEVEL 20
int count=0,count1=0,count2=0;
struct node
{
    int data;
    struct node *left;
    struct node *right;
};
struct node1
{
    int dat;
    struct node1 *next;
}*head,*prev;
struct node *createbst(struct node *root,int item)
{
    if(root==NULL)
    {
        root=(struct node *)malloc(sizeof(struct node));
        root->left=NULL;
        root->right=NULL;
        root->data=item;
    }
    else
    {
        if(item<root->data)
        root->left=createbst(root->left,item);
        if(item>root->data)
        root->right=createbst(root->right,item);
    }
    return (root);
}
struct node *search(struct node *root,int key)
{
    if(root==NULL)
    printf("Key not found in binary search tree\n");
    else
    {
        if(root->data==key)
        {
        printf("Key found in binary search tree\n");
        count++;
        }
        else if(key<root->data)
        {
        root->left=search(root->left,key);
        count++;
        }
        else if(key>root->data)
        {
        root->right=search(root->right,key);
        count++;
        }
    }
    return root;
}
void inorder(struct node *root)
{
    if(root!=NULL)
    {
        inorder(root->left);
        printf("%d\n",root->data);
        inorder(root->right);
    }
}
void insert(struct node1 *p)
{
    if(head==NULL)
    {
        head=p;
        prev=p;
    }
    else
    {
        prev->next=p;
        prev=p;
    }
}
void search1(int key)
{
    struct node1 *temp;
    temp=head;
    //if(head==NULL)
    //printf("Key not found in linked list\n");
    {
        while(temp->next!=NULL)
        {
            count1++;
            if(temp->dat==key)
            {
            printf("Key found in linked list\n");
            return;
            }
            else
            temp=temp->next;
        }
        printf("Key not found in linked list\n");

    }
}
void display()
{
    struct node1 *temp;
    temp=head;
    while(temp!=NULL)
    {
    printf("%d\n",temp->dat);
    temp=temp->next;
    }
}
typedef struct snode {
    int key;
    int value;
    struct snode **forward;
} snode;

typedef struct skiplist {
    int level;
    int size;
    struct snode *header;
} skiplist;

skiplist *skiplist_init(skiplist *list) {
    int i;
    snode *header = (snode *) malloc(sizeof(struct snode));
    list->header = header;
    header->key = INT_MAX;
    header->forward = (snode **) malloc(
            sizeof(snode*) * (SKIPLIST_MAX_LEVEL + 1));
    for (i = 0; i <= SKIPLIST_MAX_LEVEL; i++) {
        header->forward[i] = list->header;
    }

    list->level = 1;
    list->size = 0;

    return list;
}

static int rand_level() {
    int level = 1;
    while (rand() < RAND_MAX / 2 && level < SKIPLIST_MAX_LEVEL)
        level++;
    return level;
}

int skiplist_insert(skiplist *list, int key, int value) {
    snode *update[SKIPLIST_MAX_LEVEL + 1];
    snode *x = list->header;
    int i, level;
    for (i = list->level; i >= 1; i--) {
        while (x->forward[i]->key < key)
            x = x->forward[i];
        update[i] = x;
    }
    x = x->forward[1];

    if (key == x->key) {
        x->value = value;
        return 0;
    } else {
        level = rand_level();
        if (level > list->level) {
            for (i = list->level + 1; i <= level; i++) {
                update[i] = list->header;
            }
            list->level = level;
        }

        x = (snode *) malloc(sizeof(snode));
        x->key = key;
        x->value = value;
        x->forward = (snode **) malloc(sizeof(snode*) * (level + 1));
        for (i = 1; i <= level; i++) {
            x->forward[i] = update[i]->forward[i];
            update[i]->forward[i] = x;
        }
    }
    return 0;
}

snode *skiplist_search(skiplist *list, int ke) {
    snode *x = list->header;
    int i;
    for (i = list->level; i >= 1; i--) {
        while (x->forward[i]->key < ke)
        {
            count2++;
            x = x->forward[i];
        }
    }
    if (x->forward[1]->key == ke) {
        return x->forward[1];
    } else {
        return NULL;
    }
    return NULL;
}

static void skiplist_node_free(snode *x) {
    if (x) {
        free(x->forward);
        free(x);
    }
}

int skiplist_delete(skiplist *list, int key) {
    int i;
    snode *update[SKIPLIST_MAX_LEVEL + 1];
    snode *x = list->header;
    for (i = list->level; i >= 1; i--) {
        while (x->forward[i]->key < key)
            x = x->forward[i];
        update[i] = x;
    }

    x = x->forward[1];
    if (x->key == key) {
        for (i = 1; i <= list->level; i++) {
            if (update[i]->forward[i] != x)
                break;
            update[i]->forward[1] = x->forward[i];
        }
        skiplist_node_free(x);

        while (list->level > 1 && list->header->forward[list->level]
                == list->header)
            list->level--;
        return 0;
    }
    return 1;
}

static void skiplist_dump(skiplist *list) {
    snode *x = list->header;
    while (x && x->forward[1] != list->header) {
        printf("%d[%d]\n", x->forward[1]->key, x->forward[1]->value);
        x = x->forward[1];
    }

}
int main()
{
    struct snode s,*p;
    struct node *root=NULL,*n;
    struct node1 *g;
    head=NULL,prev=NULL;
    int item,i,key,val,m,j;
    int ch;
    skiplist_init(&s);
    clock_t start,end,diff,end1,di,start1;
    time_t t;
    float time_taken,ti;
    for(;;)
    {
        printf("Enter your choice\n1.Insert\n2.Search\n3.Display\n4.Exit\n");
        scanf("%d",&ch);
        switch(ch)
        {
            case 1:srand((unsigned)time(&t));
            printf("Enter the number of nodes that you want\n");
                   scanf("%d",&m);
                   for(j=1; j<=m; j++)
                   {
                       item=rand()%1500000;
                   root=createbst(root,item);
                   g=malloc(sizeof(struct node1));
                   g->dat=item;
                   g->next=NULL;
                   insert(g);
                   i=skiplist_insert(&s,j,item);
                   }
                   break;
            case 2:printf("Enter the data to be searched\n");
                   scanf("%d",&val);
                   p=skiplist_search(&s,val);
                   if(p)
                       printf("Key found in skip list\n");
                       else
                       printf("Key not found in skip list\n");
                       if(head==NULL)
                       printf("Linked list is empty\n");
                       else
                       search1(val);
                       if(root==NULL)
                       printf("Tree is empty\n");
                       else
                       n=search(root,val);
                       printf("Total number of comparisons in binary search tree:%d\n",count);
                       printf("Total number of comparisons in linked list:%d\n",count1);
                       printf("Total number of comparisons in skip list:%d\n",count2);
                       break;
            case 3:printf("Tree:\n");
            inorder(root);
            printf("Skipped list:\n");
                   skiplist_dump(&s);
            printf("Linked list:\n");
            display();

                   break;
            case 4:exit(0);
            default:printf("Invalid choice\n");
        }
    }
    return 0;
}
