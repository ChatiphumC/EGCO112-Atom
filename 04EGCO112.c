// Insertion Sort

#include <stdio.h>

void InsertionSort(int arr[], int n)
{
    int i, j, value;
    for(i = 1; i < n; i++)
    {
        value = arr[i];
    for (j = i - 1; j >= 0 && arr[j] > value; j--)
    {
        arr[j + 1] = arr[j];
    }
        arr[j + 1] = value;
    }
}

int main(int argc, char **argv)
{
    int n;
    printf("Input size of array : ");
    scanf("%d", &n);
    int arr[n];
    printf("Input number into array : ");
    for(int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    
    InsertionSort(arr,n);

    for(int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
}