//binary search

#include <stdio.h>
int Bsearch(int [], int, int);
int main()
{
    printf("\n\tBINARY SEARCH\n");
    int n;
    printf("\nEnter the size : ");
    scanf("%d",&n);
    int A[n], i, x;
    printf("\nEnter the elements : ");
    for(i = 0 ; i<n ; i++)    scanf("%d",&A[i]);
    printf("\nEnter the element to be searched : ");
    scanf("%d",&x);
    int res = Bsearch(A,n,x);
    if(res == -1)
        printf("\n\nElement not found!");
    else
        printf("\n\nElement found at position %d",res);
}
int Bsearch(int A[], int n, int x)
{
    int f = 0, l = n-1, m, pos;
    while(f <= l) {
        m = (f + l) / 2;
        if (A[m] == x)
            return (m + 1);
        else if (A[m] < x)
            f = m + 1;
        else
            l = m - 1;
    }
}
