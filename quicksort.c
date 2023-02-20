//sorting the elements of an array using quicksort technique

#include <stdio.h>

int partition(int [],int,int);
void swap(int *,int *);
void quickSort(int [],int,int);
void display(int [],int);


int main()
{
    printf("\n\tQUICK SORT\n");
    int n;
    printf("\nEnter the size : ");
    scanf("%d",&n);
    int A[n],x;
    printf("\nEnter the array elements : ");
    for(x=0;x<n;x++)
    scanf("%d",&A[x]);
    int i,j;
    i = 0;
    j = n-1;
    quickSort(A,i,j);
    printf("\nSorted array : ");
    display(A,n);
}

void quickSort(int A[],int i,int j)
{
    if(i < j)
    {
        int p = partition(A,i,j);
        quickSort(A,i,p-1);
        quickSort(A,p+1,j);
    }
}

int partition(int A[],int i,int j)
{
    int start,end,pivot;
    start = i;
    end = j;
    pivot = A[i];
    while(start<end)
    {
        while(pivot >= A[start])
            start++;
        while(pivot < A[end])
            end--;
        if(start<end)
            swap(&A[start],&A[end]);
    }
    swap(&A[i],&A[end]);
    return(end);
}

void swap(int *a,int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

void display(int A[],int n)
{
    int x;
    for(x=0;x<n;x++)
        printf("%d  ",A[x]);
}