//merge sort

#include <stdio.h>
void mergeSort(int A[], int l, int r)
{
    if (l<r)  {
        int m = (l + r) / 2;
        mergeSort(A, l, m);
        mergeSort(A, m+1, r);
        merge(A, l, m, r);
    }
}
void merge(int A[], int l, int m, int r)
{
    int n1 = m - l + 1;
    int n2 = r - m;
    int L[n1], R[n2];   //temporary arrays
    int i, j;
    for(i = 0 ; i<n1 ; i++)   L[i] = A[l + i];
    for(j = 0 ; j<n2 ; j++)   R[j] = A[m + 1 + j];
    i = 0;
    j = 0;
    int k = l;
    while (i<n1 && j<n2)   {
        if (L[i] <= R[j])  {
            A[k] = L[i];
            i++;
        }
        else   {
            A[k] = R[j];
            j++;
        }
        k++;
    }
    while (i<n1)   {
        A[k] = L[i];
        i++;
        k++;
    }
    while (j<n2)   {
        A[k] = R[j];
        j++;
        k++;
    }
}
void display(int A[], int n)
{
    int x;
    for(x=0;x<n;x++)
        printf("%d\t",A[x]);
}
int main()
{
    printf("\n\tMERGE SORT\n");
    int n;
    printf("\nEnter the size : ");
    scanf("%d",&n);
    int A[n],x;
    printf("\nEnter the array elements :\n");
    for(x=0;x<n;x++)
        scanf("%d",&A[x]);
    mergeSort(A, 0, n-1);
    printf("\n\nSorted array :\n");
    display(A,n);
}

