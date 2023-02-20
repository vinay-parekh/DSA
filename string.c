#include <stdio.h>
int main()
{
	char *c[] = {"zero","one","two","three","four","five","six","seven","eight","nine"};
	int a,b,i;
	printf("Enter the numbers : ");
	scanf("%d%d",&a,&b);
	for(i=a;i<=b;i++)
	{
		if(i>9)
			if(i%2)
				printf("odd\n");
			else
				printf("even\n");
		else
			printf("%s\n",c[i]); 
	}
	
	return 0;
}