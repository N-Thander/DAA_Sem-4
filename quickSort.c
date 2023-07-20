// Implementation of quick sort

#include<stdio.h>

void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

int partition(int arr[], int low, int high)
{
    int pivot = arr[high];
    int i = (low - 1);
    int j;
    for (j = low; j <= high -1; j++)
    {
        if (arr[j] < pivot)
        {
            i++;
            swap(&arr[i], &arr[j]);
        }
    }
    swap(&arr[i+1], &arr[high]);
    return(i+1);
}

void quickSort(int arr[], int low, int high)
{
    if(low < high)
    {
        int pi = partition(arr, low, high);
        quickSort(arr, low, pi - 1);
        quickSort(arr, pi+1, high);
    }
}

void display(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%d\t", arr[i]);
    }
    printf("\n");
    
}

int main()
{
    int n;
    printf("Enter the number of members in the array: ");
    scanf("%d", &n);
    
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        printf("Enter value: ");
        scanf("%d", &arr[i]);
    }

    printf("The given array is: ");
    display(arr, n);

    quickSort(arr, 0, n-1);
    printf("The sorted array is: ");
    display(arr, n);

    printf("The minimum value in the array: %d\n", arr[0]);
    printf("The maximum value in the array: %d\n", arr[n-1]);

    return 0;    
}
