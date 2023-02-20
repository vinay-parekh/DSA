//reversing an array

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num, *arr, i, j;
    printf("Enter the size : ");
    scanf("%d", &num);

    arr = (int*) malloc(num * sizeof(int));
    
    printf("\nEnter the array :\n");
    for(i = 0; i < num; i++) {
        scanf("%d", &arr[i]);
    }

    i = 0;
    j = num - 1;
    
    while(i < j)
    {
        arr[i] = arr[i] + arr[j];
        arr[j] = arr[i] - arr[j];
        arr[i] = arr[i] - arr[j];
        
        i++;
        j--;
    }
    
    for(i = 0; i < num; i++)
        printf("%d ", arr[i]);
    printf("\n");
    return 0;
}