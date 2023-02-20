//apples in the basket

#include <stdio.h>
int result(int [], int);
int main()
{
	printf("\n\tAPPLES IN THE BASKET\n");
	int n;
	printf("\nEnter n : ");
	scanf("%d", &n);
	int A[n], i;
	printf("\nEnter weight of each apple : ");
	for(i = 0 ; i<n ; i++)
		scanf("%d", &A[i]);
	printf("\nResult = %d", result(A,n));
	return 0;
}
int result(int A[], int n)
{
	int temp, i, j;
	for(i = 0 ; i<n ; i++) {
		for(j = 0 ; j<(n-1)-i ; j++) {
			if(A[j] > A[j+1]) {
				temp = A[j];
				A[j] = A[j+1];
				A[j+1] = temp;
			}
		}
	}
	int x = -1, sum = 0;
	while(sum <= 5000)
	{
		sum = sum + A[++x];
	}
	return (x);
}