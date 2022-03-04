#include <stdio.h>
#include <stdlib.h>
/*          ADJACENCY MATRIX                            */
int source,V,E,x=0;time,visited[20],G[5][5],dist[10];
void DFS(int i)
{
    int j;
    visited[i]=1;
    printf(" %c->",i+65);
    dist[x]=i+1;
    x++;
    for(j=0;j<5;j++)
    {
        if(G[i][j]==1&&visited[j]==0)
            DFS(j);
    }
}
int main()
{
    int i,j,v1,v2,count=0;

    G[0][2]=1;
    G[1][0]=1;
    G[0][3]=1;
    G[1][3]=1;
    G[2][3]=1;

    G[0][0]=G[0][1]=G[0][4]=G[1][1]=G[1][2]=G[1][4]=G[2][0]=G[2][1]=G[2][2]=G[2][4]=G[3][0]=G[3][1]=G[3][2]=G[3][3]=G[3][4]=G[4][0]=G[4][1]=G[4][2]=G[4][4]=0;

    for(i=0;i<6;i++)
    {
        for(j=0;j<V;j++)
            printf(" %d ",G[i][j]);

    }
    printf("Enter the source: ");
    scanf("%d",&source);
        DFS(source-1);
    	printf("\nthe longest path is\n");
    	for(i=0;i<x;i++)
        {
            printf("%c->",dist[i]+64);
        }
    return 0;
}
