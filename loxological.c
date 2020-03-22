#include<stdio.h>
  
int temp[10],k=0,r=-1,f=0;
void degree(int n,int indegree[10],int a[10][10]);

void lexico(int set[10],int indegree[10],int n,int a[10][10])   
{
   int i,x,u,cnt=0;
   for(i=0;i<f;i++)
   {
       u=set[++r];
       temp[k++]=u;
       indegree[u]=n;
       for(x=0;x<n;x++)
       {
           if(a[x][u]==1&&indegree[x]!=-1)
            indegree[x]--;
           if(indegree[x]==0)
           {
            set[f++]=x;
            indegree[x]=n;
           }
       }
       cnt++;
   }
   if(cnt!=n)
    printf("-1 cycle exists\n");                
}
       
void degree(int n,int indegree[10],int a[10][10])
{
   int i,j,min,u,set[10];
   for(i=0;i<n;i++)
   {
        if(indegree[i]==0)
        {
          set[f++]=i;
          indegree[i]=n;
        }
   }
   if(r==f)
   {
      for(i=0;i<n;i++)
      {
        if(indegree[i]<n)
        set[f++]=i;
      } 
   }

   min=0;
   for (i = 0; i < f; i++)       
   {
      for (j = 0; j < f-1; j++)  
      { 
        if (set[j] > set[j+1]) 
        { 
          min=set[j];
          set[j]=set[j+1];
          set[j+1]=min;
        }
      }
   }
   lexico(set,indegree,n,a);
}
   
void main() 
{
   int i,j,n,indegree[10],a[10][10];
   printf("enter the number of vertices:");
   scanf("%d",&n);
   for(i=0;i<n;i++)
     indegree[i]=0;

    printf("\n enter the adjacency matrix\n");
    for(i=0;i<n;i++)
      for(j=0;j<n;j++)
      {
        scanf("%d",&a[i][j]);
        if(a[i][j]==1)
          indegree[i]++;
      }
   degree( n,indegree, a);
  
   for(i=0;i<k;i++)
      printf("v%d\t",temp[i]);
    
}
