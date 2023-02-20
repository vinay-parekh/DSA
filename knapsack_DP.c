//knapsack using dynamic programming

#include <stdio.h>
int max(int a, int b) {
	return ((a>b)? a : b);
}
int knapSack(int W, int wt[], int val[], int n)
{
	int i, j;
	int K[n+1][W+1];
	for(i = 0 ; i <= n ; i++){
		for(j = 0 ; j <= W ; j++){
			if (i == 0 || j == 0)
				K[i][j] = 0;
			else if (wt[i-1] <= j)
				K[i][j] = max(val[i-1] + K[i-1][j-wt[i-1]] , K[i-1][j]);
			else
				K[i][j] = K[i-1][j];
		}
	}
	return(K[n][W]);
}
int main()
{
	printf("\n\tKNAPSACK USING DYNAMIC PROGRAMMING\n");
	int val[] = {60, 100, 120};
	int wt[] = {10, 20, 30};
	int W = 50, n = sizeof(val)/sizeof(val[0]);
	printf("\nItem\tValues\tWeights\n");
	for(int i = 0 ; i<n ; i++)
		printf("%d\t%d\t%d\n",i+1,val[i],wt[i]);
	printf("\nInitial KnapSack capacity = %d",W);
	printf("\n\nResult = %d\n",knapSack(W, wt, val, n));
	return 0;	
}