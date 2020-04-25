#include<stdio.h> 

#define INF 99999 
void printSolution(int dist[][]); 
void floydWarshall (int graph[][]) 
{ 
	int dist[V][V], i, j, k; 

	for (i = 0; i < V; i++) 
		for (j = 0; j < V; j++) 
			dist[i][j] = graph[i][j]; 

	for (k = 0; k < V; k++) 
	{ 
		for (i = 0; i < V; i++) 
		{ 
			for (j = 0; j < V; j++) 
			{ 
				if (dist[i][k] + dist[k][j] < dist[i][j]) 
					dist[i][j] = dist[i][k] + dist[k][j]; 
			} 
		} 
	} 
	printSolution(dist); 
} 

void printSolution(int dist[][V]) 
{ 
	printf ("The following matrix shows the shortest distances"
			" between every pair of vertices \n"); 
	for (int i = 0; i < V; i++) 
	{ 
		for (int j = 0; j < V; j++) 
		{ 
			if (dist[i][j] == INF) 
				printf("%7s", "INF"); 
			else
				printf ("%7d", dist[i][j]); 
		} 
		printf("\n"); 
	} 
} 

int main() 
{ 
  int n;
	printf("\nEnter the number of vertices in graph:  ");
         scanf("%d",&n);
         printf("\nEnter the adjacency matrix:\n");
         int graph[n][n];
         for(i=1; i<=n; i++)
         {
                for(j=0;j<n;j++)
                        scanf("%d",&graph[i][j]);
          }

	floydWarshall(graph); 
	return 0; 
} 
