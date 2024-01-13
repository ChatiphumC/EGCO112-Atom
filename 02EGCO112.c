//Bubble Sort

#include <stdio.h>
#include <stdlib.h>

int findMax(int arr[], int n) // Sort Max Value to the rightest
{
    int i,temp;
    for(i = 0; i < n - 1; i++)
    {
        if(arr[i] > arr[i+1])
        {
            temp = arr[i];
            arr[i] = arr[i+1];
            arr[i+1] = temp;
        }
    }
}

int BubbleSort(int arr[], int n) // Bubble Sorting
{
    int i,j,temp;
    for(i = 0; i < n - 1; i ++)
    {
        for(j = 0; j < n - 1; j++)
        {
            if(arr[j] > arr[j+1])
            {
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
}

int main(int argc, char **argv)
{
    // fixed array
    /*int arr[7] = {5,10,2,1,15,7,50}; 
    //findMax(arr,7);
    BubbleSort(arr,7);
    for(int i = 0; i < 7; i++)
    {
        printf("%d ", arr[i]);
    }*/

    // argc argv atoi
    /*int *a,i,n; 
    n = argc - 1;
    a = (int*)malloc(sizeof(int)*n);

    for(int i = 0; i < n; i++)
    {
        a[i] = atoi(argv[i+1]);
    }

    BubbleSort(a,n);

    for(int i = 0; i < argc; i++)
    {
        printf("%d ", a[i]);
    }*/

    int n;
    printf("Input size of array : ");
    scanf("%d", &n);
    int arr[n];
    printf("Input number into array : ");
    for(int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    BubbleSort(arr,n);

    for(int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
}