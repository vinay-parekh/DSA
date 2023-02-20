//linear search

#include <stdio.h>
int lsearch(int [], int, int);
int main()
{
	printf("\n\tLINEAR SEARCH");
    int n;
    printf("\nEnter the size : ");
    scanf("%d",&n);
    int A[n],i;
    printf("\nEnter the elements : ");
    for(i = 0 ; i<n ; i++)      scanf("%d",&A[i]);    
    int x;
    printf("\nEnter the element to be searched : ");
    scanf("%d",&x);
    int res = lsearch(A,n,x);    
    if(res == -1)
        printf("\n\nElement not found!");
    else
        printf("\n\nElement found at position %d",res);

    if(res == 1)
    	printf("\n\nBest case : O(1)");
    else if(res > 1 && res < n)
    	printf("\n\nAverage case : O(n)");
    else
    	printf("\n\nWorst case : O(n)");
}
int lsearch(int A[], int n, int x)
{
    int i;
    for(i = 0 ; i<n ; i++)  {
        if(A[i] == x)   {
            return (i+1);
            break;
        }
    }
    return -1;
}
