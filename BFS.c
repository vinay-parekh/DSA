//breadth first search

#include <stdio.h>
#define max 15
int n, e, front = -1, rear = -1;
int adj[max][max], status[max], queue[max];
int isEmpty()
{
	if (front == -1)
		return 1;
	else
		return 0;
}
void enqueue(int ele)
{
	if (front == -1) 
		front++;
		rear++;
	queue[rear] = ele;
}
void dequeue()
{
	printf("%d ", queue[front]);
	if (front == rear) {
		front = -1;
		rear = -1;
	}
	else
		front++;
}
int getFront()
{
	return queue[front];
}
void bfs(int node)
{
	enqueue(node);
	status[node] = 1;
	int x = node;
	while(!isEmpty()) {
		dequeue();
		for(int i = 1 ; i<=n ; i++) {
			if ((adj[x][i] == 1) && (status[i] == 0)) {
				enqueue(i);
				status[i] = 1;
			}
		}
		x = getFront();
	}
}
int main()
{
	printf("\n\tBREADTH FIRST SEARCH\n");

	printf("\nEnter the no. of nodes : ");
	scanf("%d", &n);

	printf("\nEnter the no. of edges : ");
	scanf("%d", &e);

	int edge1[e+1], edge2[e+1];
	int i, j;

	printf("\nEnter the edge 1 : ");
	for(i = 1 ; i<=e ; i++)
		scanf("%d", &edge1[i]);

	printf("\nEnter the edge 2 : ");
	for(i = 1 ; i<=e ; i++)
		scanf("%d", &edge2[i]);

	for(i = 1 ; i<=e ; i++) 
		for(j = 1 ; j<=e ; j++) 
			adj[i][j] = 0;

	for(i = 1 ; i<e+1 ; i++) {
		adj[edge1[i]][edge2[i]] = 1;
		adj[edge2[i]][edge1[i]] = 1;
	}

	for(i = 1 ; i<=n ; i++) {
		for(j = 1 ; j<=n ; j++) 
			printf("%d ", adj[i][j]);
		printf("\n");
	}
	for(i = 1 ; i<=e+1 ; i++)
		status[i] = 0;
	
	printf("\n\nBREADTH FIRST TRAVERSAL : \n");
	bfs(1);
}