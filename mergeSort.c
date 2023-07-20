// Implementation of mergesort

#include<stdio.h>
#include<stdlib.h>


void merge(int arr[], int p, int q, int r)
{
    int n1 = q-p+1;
    int n2 = r - q;
    int l[n1], m[n2];

    for (int i = 0; i < n1; i++)
    {
        l[i] = arr[p+i];
    }
    for (int j = 0; j < n2; j++)
    {
        m[j] = arr[q + 1+ j];
    }
    
    int i, j, k;
    i = 0;
    j = 0;
    k = p;

    while (i < n1 && j < n2)
    {
        if (l[i] <= m[j])
        {
            arr[k] = l[i];
            i++;
        }
        else
        {
            arr[k] = m[j];
            j++;
        }k++;
    }
    while (i<n1)
    {
        arr[k] = l[i];
        i++;
        k++;
    }
    while (j < n2)
    {
        arr[k] = m[j];
        j++;
        k++;
    }    

}

void mergeSort(int arr[], int l, int r)
{
    if(l < r)
    {
        int m = l + (r -l)/2;
        mergeSort(arr, l, m);
        mergeSort(arr, m+1, r);
        merge(arr, l, m, r);
    }
}

void printArray(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        printf("%d, ", arr[i]);
    }
    printf("\n");
   
}


int main()
{
    int arr[] = {2, 9, 3, 10, 32, 29, 41, 63, 100, 1};

    int n = sizeof(arr)/sizeof(arr[0]);
    mergeSort(arr, 0, n-1);
    printf("Sorted array is:\n");
    printArray(arr, n);

    return 0;
}
