//dijkstra's ALGORITHM

#include <stdio.h>
#include <limits.h>
int main()
{
    printf("\n\tDIJKSTRA'S ALGORITHM\n");

    int n, min, min_vertex, i, j, v;

    printf("\nEnter N : ");
    scanf("%d", &n);
    
    int adj[n][n], status[n], cost[n];

    printf("\nEnter the elements :\n");

    for(i = 0 ; i<n ; i++) {
        for(j = 0 ; j<n ; j++) {
            scanf("%d", &adj[i][j]);
        }
        status[i] = 0;
        cost[i] = INT_MAX;
    }
    printf("\nGRAPH :\n");
    
    for(i = 0 ; i<n ; i++) {
        for(j = 0 ; j<n ; j++)
            printf("%d ", adj[i][j]);
        printf("\n");
    }
    printf("\n");
    
    cost[0] = 0;
    for(i = 0 ; i<n ; i++) {
        min = INT_MAX;
        for(v = 0 ; v<n ; v++) { 
            if (status[v] == 0 && cost[v] <= min) {
                min = cost[v];
                min_vertex = v;
            }
        }
        status[min_vertex] = 1;
        for(v = 0 ; v<n ; v++) {
            if ((status[v] == 0) && (adj[min_vertex][v]) && (cost[min_vertex] != INT_MAX) && ((cost[min_vertex] + adj[min_vertex][v]) < cost[v]))
                cost[v] = cost[min_vertex] + adj[min_vertex][v];
        }
    }
    for(i = 0 ; i<n ; i++)
        printf("%d\t%d\n",i, cost[i]);
   
    return 0;
}