#include <stdio.h>
#include <stdlib.h>

// Predefining the funtion here.
void Merging(int array[], int l, int m, int r);
void Merge_sort(int array[], int l, int r);
void printArray(int A[], int size);

int main()
{
    int size;
    printf("\nEnter Size of array: ");
    scanf("%d", &size);
    printf("Enter elements of array : \n");
    int array[size];
    for (int i = 0; i < size; i++)
    {
        scanf("%d", &array[i]);
    }

    Merge_sort(array, 0, size - 1);

    printf("\nArray after Merging sort : ");
    for (int i = 0; i < size; i++)
    {
        printf("%d ", array[i]);
    }
    printf("\n");

    return 0;
}

// Merging  funtion
void Merging(int array[], int l, int m, int r)
{
    int i, j, k;
    int n1 = m - l + 1;
    int n2 = r - m;
    int L[n1], R[n2];

    for (int i = 0; i < n1; i++)
    {
        L[i] = array[l + i];
    }
    for (j = 0; j < n2; j++)
    {
        R[j] = array[m + 1 + j];
    }
    i = 0;
    j = 0;
    k = l;
    while (i < n1 && j < n2)
    {
        if (L[i] <= R[j])
        {
            array[k] = L[i];
            i++;
        }
        else
        {
            array[k] = R[j];
            j++;
        }
        k++;
    }
    while (i < n1)
    {
        array[k] = L[i];
        i++;
        k++;
    }
    while (j < n2)
    {
        array[k] = R[j];
        j++;
        k++;
    }
}

// Merger sort funtion
void Merge_sort(int array[], int l, int r)
{
    if (l < r)
    {
        int m = l + (r - l) / 2;
        Merge_sort(array, l, m);
        Merge_sort(array, m + 1, r);
        Merging(array, l, m, r);
    }
}

// funtion to print Array elements
void printArray(int A[], int size)
{
    for (int i = 0; i < size; i++)
    {
        printf("%d ", A[i]);
    }
    printf("\n");
}
