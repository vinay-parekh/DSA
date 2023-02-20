//prim's ALGORITHM

#include <stdio.h>
#include <limits.h>
#define size 20
int graph[size][size], visit[size], n, e;
void prims()
{
    int i, j, k, min, vertex1, vertex2, total;
    for(i = 1 ; i<=n ; i++)
        visit[i] = 0;
    visit[1] = 1;
    for(k = 2 ; k<=n ; k++) {
        min = INT_MAX;
        for(i = 1 ; i<=n ; i++) {
            for(j = 1 ; j<=n ; j++) {
                if(graph[i][j] && ((visit[i] && !visit[j]) || (!visit[i] && visit[j]))) {
                    if(graph[i][j] < min) {
                        min = graph[i][j];
                        vertex1 = i;
                        vertex2 = j;
                    }
                }
            }
        }
        printf("%d - %d\t%d\n", vertex1, vertex2, min);
        visit[vertex1] = visit[vertex2] = 1;
        total = total + min;
    }
    printf("\nTOTAl = %d", total);
}
int main()
{
    printf("\n\tPRIM'S ALGORITHM\n");
    int i, j;
    printf("\nEnter the no. of nodes : ");
    scanf("%d", &n);
    printf("\nEnter the no. of edges : ");
    scanf("%d", &e);
    for(i = 1 ; i<=n ; i++)
        for(j = 1 ; j<=n ; j++)
            graph[i][j] = 0;
   
    int vertex1[e], vertex2[e], length[e];
   
    printf("\nEnter the vertex 1 elements :\n");
    for(i = 1 ; i<=e ; i++)
        scanf("%d", &vertex1[i]);
    printf("\nEnter the vertex 2 elements :\n");
    for(i = 1 ; i<=e ; i++)
        scanf("%d", &vertex2[i]);
    printf("\nEnter the length :\n");
    for(i = 1 ; i<=e ; i++)
        scanf("%d", &length[i]);
   
    for(i = 1 ; i<=e ; i++) {
        graph[vertex1[i]][vertex2[i]] = length[i];
        graph[vertex2[i]][vertex1[i]] = length[i];
    }
   
    printf("\nRESULT :\n\n");
    prims();
    return 0;
}
