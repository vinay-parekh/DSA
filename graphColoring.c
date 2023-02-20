//graph coloring

#include <stdio.h>
#include <stdbool.h>
#define NODE 4
int graph[NODE][NODE] = { {0,1,0,1},
	{1,0,1,0},
	{0,1,0,1},
	{1,0,1,0} };
void graphColoring()
{
	int color[NODE];	//to assign colors to node 1
	bool colorUsed[NODE];	//used to chec whether color is used or not

	int i, u, v;
	color[0] = 0;

	for(i = 1 ; i<NODE ; i++)
		color[i] = -1;	//initially the vertices are unassigned

	for(i = 0 ; i<NODE ; i++)
		colorUsed[i] = false;	//initially colors aren't chosen

	for(u = 1 ; u<NODE ; u++) {
		//for all other nodes with -1 vertices
		for(v = 0 ; v<NODE ; v++) {
			if (graph[u][v]) {
				if (color[v] != -1)
					colorUsed[color[v]] = true;
			}	//end of if
		}	//end of v

		int col;
		for(col = 0 ; col<NODE ; col++) {
			if (!colorUsed[col])	//find a color that is unassigned
				break;
		}	//end of col

		color[u] = col;
		for(v = 0 ; v<NODE ; v++) {
			if (graph[u][v]) {
				if (color[v] != 1)
					colorUsed[color[v]] = false;
			}	//end of if
		}	//end of v
	}	//end of u

	for(u = 0 ; u<NODE ; u++)
		printf("NODE %d assigned with color %d\n", u+1, color[u]);
}

int main()
{
	printf("\n\tGRAPH COLORING PROBLEM\n");
	printf("\nNo. of nodes : %d\n\n",NODE);
	graphColoring();
	return 0;
}