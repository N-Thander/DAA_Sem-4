// Implementation of binary search

#include<stdio.h>
#include<stdlib.h>

int binarySearch(int arr[], int l, int r, int x)
{
    if (r >= l)
    {
        int mid = l + (r-l)/2;
        if (arr[mid] == x)
        {
            return mid;
        }
        if (arr[mid] > x)
        {
            return binarySearch(arr, l, mid-1, x);
        }
        return binarySearch(arr, mid+1, r, x);
        
    }
    return -1;

}

int main()
{
    int arr[10] = {10, 20, 30, 40, 50, 60, 70, 80, 90, 100};

    int n;
    printf("Enter element to search for: ");
    scanf("%d", &n);

    int result = binarySearch(arr, 0, 10, n);
    if (result == -1) 
    {
        printf("The element %d is not present in the array\n", n);
    }
    else
    {
        printf("The element %d is present in the array\n", n);
    }

    return 0;
}
