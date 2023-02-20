//gas station problem

#include <stdio.h>
int main()
{
	printf("\n\tGAS STATION PROBLEM\n");
	int n, i;
	printf("\nEnter n : ");
	scanf("%d", &n);
	int gas[n], cost[n];
	printf("\nEnter the GAS values : ");
	for(i = 0 ; i<n ; i++)
		scanf("%d", &gas[i]);
	printf("\nEnter the cost values : ");
	for(i = 0 ; i<n ; i++)
		scanf("%d", &cost[i]);

	int tt = 0, ct = 0, sp = 0;
	for(i = 0 ; i<n ; i++) {
		tt = tt + gas[i] - cost[i];
		ct = ct + gas[i] - cost[i];
		if (ct < 0) {
			sp = i + 1;
			ct = 0;
		}
	}
	if (tt >= 0)
		printf("\nResult = %d\n", sp);
	else
		printf("\nResult = -1\n");
}