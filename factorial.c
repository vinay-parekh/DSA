#include<stdio.h>
int factorial(int n)
{
	int fact = 1,i;
	for(i=1;i<=n;i++)
		fact = fact * i;
	return(fact);
}
int main()
{
	int n;
	printf("Enter a no:");
	scanf("%d",&n);
	int res = factorial(n);
	printf("\nFactorial of %d : %d",n,res);
	return 0;
}