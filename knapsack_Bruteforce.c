//knapsack using bruteforce approach

#include <stdio.h>
int max(int a, int b)   
{ 
    return ((a > b)? a : b);  
}

int KnapSack(int W, int wt[], int val[], int n)
{
    if (n == 0 || W == 0)
        return 0;
    if(wt[n-1] > W)
        return KnapSack(W, wt, val, n-1);
    else
        return max(val[n-1] + KnapSack(W - wt[n-1], wt, val, n-1), KnapSack(W, wt, val, n-1));
}

int main()
{
    printf("\n\tKNAPSACK USING BRUTE FORCE APPROACH\n");
    int val[] = {60,100,120};
    int wt[] = {10,20,30};
    int W = 50;
    int n = sizeof(val) / sizeof(val[0]);
    printf("\nItem\tValue\tWeight\n");
    for(int i = 0 ; i<n ; i++)
        printf("%d\t%d\t%d\n", i+1,val[i], wt[i]);
    printf("\nKnapSack Capacity, W = %d", W);
    printf("\n\nResult = %d", KnapSack(W, wt, val, n));
}
