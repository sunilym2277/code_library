#include<stdio.h>
#include<stdlib.h>
#include<limits.h>
#define SIZE 100

struct node
{
    int u;
    int v;
    int w;
};

struct node n[30];

void Union(int a[],int n,int u,int v)
{
    int temp=a[u];
    int i;
    for(i=0;i<n;i++)
        if(a[i]==temp)
            a[i]=a[v];
}

int find(int a[],int n,int u,int v)
{
    if(a[u]==a[v])
        return 1;
    else
        return 0;
}

void sortmin(struct node n[30],int e)
{
    int i,j;
    struct node temp;
     for(i=1;i<=e-1;i++)
    {
        temp=n[i];
        j=i-1;
        while(j>=0 && n[j].w>temp.w)
        {
            n[j+1]=n[j];
            j=j-1;
        }
        n[j+1]=temp;
    }
}

void sortmax(struct node n[30],int e)
{
    int i,j;
    struct node temp;
     for(i=1;i<=e-1;i++)
    {
        temp=n[i];
        j=i-1;
        while(j>=0 && n[j].w<temp.w)
        {
            n[j+1]=n[j];
            j=j-1;
        }
        n[j+1]=temp;
    }
}

int main()
{
    int a[SIZE],i,j,e,m,edges,f,cost=0,ch;
    printf("Enter the no. of edges \n");
    scanf("%d",&e);
    printf("Enter the no. of verices \n");
    scanf("%d",&m);
    printf("Enter the input in the following order\nsource vertex, destination vertex, edge weight\n");
    for(i=0;i<e;i++)
        scanf("%d %d %d",&n[i].u,&n[i].v,&n[i].w);
    printf("To find minimum spanning tree enter 1 or to find maximum spanning tree enter 2\n Enter ur choice\n");
    scanf("%d",&ch);
    if(ch==1)
        sortmin(n,e);
    else if (ch==2)
        sortmax(n,e);
    else
    {
        printf("You have entered an invalid choice\nProgram termainating\n");
        exit(0);
    }
    for(i=0;i<m;i++)
        a[i]=i;
    for(i=0;i<e;i++)
    {
        f=find(a,m,n[i].u,n[i].v);
        if(f==0)
        {
            Union(a,m,a[n[i].u],a[n[i].v]);
            edges++;
            cost=cost+n[i].w;
            printf("edge with weight %d added between  vertex %d and vertex %d\n",n[i].w,n[i].u,n[i].v);
        }
    }
        printf("Total cost =%d\n",cost);

}
