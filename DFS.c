//depth first search

#include <stdio.h>
#define max 15
int n, e, top = -1;
int adj[max][max];
int status[max], stack[max];
int isEmpty()
{
	if (top == -1)
		return 1;
	else
		return 0;
}
void push(int ele)
{
	top++;
	stack[top] = ele;
}
void pop()
{
	top--;
}
int peek()
{
	return stack[top];
}
void dfs(int node)
{
	int x, flag;
	push(node);
	while(!isEmpty()) {
		flag = 0;
		x = peek();
		if (status[x] == 0) {
			printf("%d ", x);
			status[x] = 1;
		}
		for(int i = 1 ; i<=n ; i++) {
			if ((adj[x][i] == 1) && (status[i] == 0)) {
				push(i);
				flag = 1;
				break;
			}
		}
		if (flag == 0)
			pop();
	}
}
int main()
{
	printf("\n\tDEPTH FIRST SEARCH\n");

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
	
	printf("\n\nDEPTH FIRST TRAVERSAL : \n");
	dfs(1);
}