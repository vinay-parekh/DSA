//sum of all subsets

#include <stdio.h>
int result(int [], int);
int power(int, int);
int main()
{
	printf("\n\tSUM OF ALL SUBSETS\n");
	int test;
	printf("\nEnter the no. of test cases : ");
	scanf("%d", &test);
	for(int j = 0 ; j<32 ; j++)
		printf("-");
	for(int j = 0 ; j<test ; j++) {
		printf("\n\nTest Case %d\n", j+1);
		int n;
		printf("\nEnter n : ");
		scanf("%d",&n);
		int A[n], i;
		printf("\nEnter the elements : ");
		for(i = 0 ; i<n ; i++)
			scanf("%d",&A[i]);
		printf("\nAnswer : %d\n", result(A,n));
		for(i = 0 ; i<13 ; i++)
			printf("-");
	}
}
int result(int A[], int n)
{
	int i, x = 0;
	for(i = 0 ; i<n ; i++)
		x = x | A[i];
	int t = power(2, n-1) * x;
	return (t);
}
int power(int a, int b)
{
	int ans = 1, i;
	for(i = 1 ; i<=b ; i++)
		ans = ans * a;
	return (ans);
}