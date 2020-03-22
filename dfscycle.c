#include<stdio.h>

int G[10][10],visited[10];
int flag=1;

void DFS(int i,int n)
{
  int j;
  printf("%d   ",i);
  visited[i]=1;
  for(j=0;j<n;j++)
  {
    if(visited[j]==1&&G[i][j]==1)
    {
      flag=0;
      break;
    }
    if(visited[j]==0&&G[i][j]==1)
    DFS(j,n);
  }
}




void main()
{
    int i,j,n;
    printf("Enter number of vertices:");
   
	scanf("%d",&n);
 
    
	printf("\nEnter adjecency matrix of the graph:");
   
	for(i=0;i<n;i++)
    for(j=0;j<n;j++)
			scanf("%d",&G[i][j]);
 
    
   for(i=0;i<n;i++)
        visited[i]=0;
 
    DFS(0,n);
    if(flag==0)
      printf("\nCycle exists");
    else
      printf("\nCycle doesnt exists");
    return;
}
