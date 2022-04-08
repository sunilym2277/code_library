#include<stdio.h>
#include<stdlib.h>
typedef struct edge
{
int source;
int dest;
int weight;
}Edge;
void swap(int *a,int *b)
{
int temp;
temp=*a;
*a=*b;
*b=temp;
}
void sort(Edge *a,int m)
{
for(int i=0;i<m;i++)
{
	for(int j=i+1;j<m;j++)
		{
			if(a[i].weight>a[j].weight)
				{
					swap(&a[i].source,&a[j].source);
					swap(&a[i].dest,&a[j].dest);
					swap(&a[i].weight,&a[j].weight);
				}
		}
}
}
int find(int *a,int value)
{
if(a[value]==value)
return(value);
return(find(a,a[value]));
}
void kruskal(Edge *a,int n,int m)
{
Edge output[n];
sort(a,m);
int parent[m];
for(int i=0;i<m;i++)
parent[i]=i;
int count=0;
int i=0;
Edge val;
while(count<n-1)
{
	val=a[i];
	int parentsource=find(parent,val.source);
	int parentdest=find(parent,val.dest);
	if(parentsource!=parentdest)
	{
		output[count]=val;
		count++;
		parent[parentsource]=parentdest;
	}
	i++;
}
printf("\n--------------------------------------\n");
for(int j=0;j<m;j++)
{
printf("%d ",a[j].source);
printf("%d ",a[j].dest);
printf("%d ",a[j].weight);
printf("\n");
}
printf("\n--------------------------------------\n");
printf("\nAnswer\n");
printf("\n--------------------------------------\n");
for(int j=0;j<n-1;j++)
{
printf("%d ",output[j].source);
printf("%d ",output[j].dest);
printf("%d ",output[j].weight);
printf("\n");
}
printf("\n--------------------------------------\n");
}
int main()
{
int n,m;
printf("Enter the number of vertices");
scanf("%d",&n);
printf("Enter the number of Edges");
scanf("%d",&m);
Edge *a;
a=malloc(sizeof(Edge)*m);
for(int i=0;i<m;i++)
{
scanf("%d",&a[i].source);
scanf("%d",&a[i].dest);
scanf("%d",&a[i].weight);
}
kruskal(a,n,m);
return(0);
}
