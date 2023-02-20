//to find gcd of two numbers using euclid's algorithm

#include<stdio.h>
int gcd(int a, int b)
{
	while(a != b) {
		if(a > b)
			a = a - b;
		if(b > a)
			b = b - a;
	}
	return a;
}
int main()
{
	int x, y;
	printf("\nEnter two values : ");
	scanf("%d%d", &x, &y);
	printf("\nResult = %d", gcd(x, y));
	return 0;
}