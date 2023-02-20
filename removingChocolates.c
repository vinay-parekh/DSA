//removing chocolates

#include <stdio.h>
int choco(int);

int main()
{
	printf("\n\tREMOVING CHOCOLATES\n\n");
	int n;
	printf("\nEnter the no. of chocolates : ");
	scanf("%d",&n);
	printf("\nResult = %d",choco(n));
	return 0;
}

int choco(int n)
{
	if((n == 1) || (n == 2))
		return 1;
	if(n == 3)
		return 2;
	else
		return (choco(n-1) + choco(n-3));
}