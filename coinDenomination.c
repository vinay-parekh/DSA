//coin denomination

#include <stdio.h>
int denomination(int [], int, int);
int main()
{
	printf("\n\tCOIN DENOMINATION\n");
	int test;
	int x, A[] = {1, 2, 5, 10, 20, 50, 100, 200, 500, 2000};
	int n = sizeof(A)/sizeof(A[0]);
	printf("\nEnter the no. of test cases : ");
	scanf("%d", &test);
	for(int j = 0 ; j<32 ; j++)
		printf("-");
	for(int j = 0 ; j<test ; j++) {
		printf("\nTest case %d", j+1);
		printf("\n\nEnter x : ");
		scanf("%d", &x);
		printf("\nResult = %d\n", denomination(A, n, x));
		for(int i = 0 ; i<13 ; i++)
			printf("-");
	}
	return 0;
}
int denomination(int A[], int n, int x)
{
	int i, d = 0; 
	for(i = n-1 ; i>=0 ; i--) {
		if(x >= A[i]) {
			d = d + (x / A[i]);
			x = x % A[i];
		}
	}
	return (d);
}