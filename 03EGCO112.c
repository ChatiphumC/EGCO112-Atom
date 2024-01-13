//Selection Sort

#include <stdio.h>

void SelectionSort(int arr[], int n)
{
    int i,j,temp,min;
    for(i = 0; i < n; i++)
    {
        min = i; // Index of the lowest value
        for(j = i + 1; j < n; j++)
        {
            if(arr[j] < arr[min])
            {
                min = j; // Copy Index of j if j < min
            }
        }
        temp = arr[i]; // Exchange it using min Index
        arr[i] = arr[min];
        arr[min] = temp;
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

    SelectionSort(arr,n);

    for(int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
}