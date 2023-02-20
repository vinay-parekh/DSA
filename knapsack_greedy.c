//knapsack using greedy algorithm or fractional knapsack

#include <stdio.h>
int Knapsack(int W, int wt[], int val[], int n)
{
	int i, remaining = W, selected[n], profit = 0, item;
	for(i = 0 ; i<n ; i++)
		selected[i] = 0;
	while(remaining > 0) {
		item = -1;
		for(i = 0 ; i<n ; i++) {
			if((selected[i] == 0) && ((item == -1) || (((float)val[i]/wt[i]) > ((float)val[item]/wt[item]))))
				item = i;
		}
		selected[item] = 1;
		remaining = remaining - wt[item];
		profit += val[item];
		if (remaining < 0) {
			profit = profit - val[item];
			profit += (1+((float)remaining / wt[item])) * val[item];
		}
	}
	return(profit);
}
int main()
{
	printf("\n\tKNAPSACK USING GREEDY ALGORITHM / FRACTIONAL KNAPSACK");
	int val[] = {60, 100, 120};
	int wt[] = {10, 20, 30};
	int W = 50, n = sizeof(val)/sizeof(val[0]), i;
	printf("\n\nItem\tWeight\tValue\n");
	for(i = 0; i<n ; i++)
		printf("\n%d\t%d\t%d", i+1, wt[i], val[i]);
	printf("\n\nKnapsack capacity, W = %d", W);
	printf("\n\nResult = %d", Knapsack(W, wt, val, n));
	return 0;
}