//tribonacci sequence

#include <stdio.h>
int main()
{
	int n;
	printf("\n\tTRIBONACCI SEQUENCE");
	int test;
	printf("\n\nEnter the no. of test cases : ");
	scanf("%d",&test);
	for(int x = 0 ; x<test ; x++)
	{
		printf("\nTest case %d" , x+1);
		printf("\n\nEnter the position of the element : ");
		scanf("%d",&n);
		int A[n],i;
		A[0] = 0;
		A[1] = 1;
		A[2] = 1;
		for(i = 3 ; i<n ; i++)
		{
			A[i] = A[i-1] + A[i-2] + A[i-3] ;
		}
		printf("\n");
		for(i = 0 ; i<n ; i++)
			printf("%d ",A[i]);
		printf("\n");
	}
}