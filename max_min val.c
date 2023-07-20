// Finding the maximum and minimum value in a given array

#include<stdio.h>
#include<stdlib.h>


int main()
{
    int n;
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        printf("Enter value: ");
        scanf("%d", &arr[i]);
    }

    printf("The entered array is: ");
    for (int i = 0; i < n; i++)
    {
        printf("%d, ", arr[i]);
    }
    printf("\n");

    int max, min;
    max = arr[0];
    min = arr[0];

    for (int i = 0; i < n; i++)
    {
        if(max < arr[i])
        {
            max = arr[i];
        }
        if(min > arr[i])
        {
            min = arr[i];
        }
    }

    printf("The minimum value in the array is: %d\n", min);
    printf("The maximum value in the array is: %d\n", max);

    return 0;
}
