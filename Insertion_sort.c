#include <math.h>
#include <stdio.h>

void Insertion_sort(int arr[], int size)
{
    int j, var;
    for (int i = 1; i < size; i++)
    {
        var = arr[i];
        j = i - 1;
        while (j >= 0 && arr[j] > var)
        {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = var;
    }
}

int main()
{
    int size;
    printf("\nEnter size of array: ");
    scanf("%d", &size);
    printf("Enter elements of array: ");
    int array[size];
    for (int i = 0; i < size; i++)
    {
        scanf("%d", &array[i]);
    }

    Insertion_sort(array, size);

    printf("Array after insertion sort: ");
    for (int i = 0; i < size; i++)
    {
        printf("%d ", array[i]);
    }
    printf("\n");

    return 0;
}