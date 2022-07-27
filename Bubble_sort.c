#include <stdio.h>

// Predefining used funtion here
void swap(int *a, int *b);
void Bubble_Sort(int array[], int n);

// main funtion
int main()
{
    int size;
    printf("\nEnter size of array: ");
    scanf("%d", &size);

    int array[size];
    printf("Enter elements of array : \n");
    for (int i = 0; i < size; i++)
    {
        scanf("%d", &array[i]);
    }

    // calling Bubble sort function for sorting
    Bubble_Sort(array, size);

    // Printing elements of array after sorting using bubble sort
    printf("Array after sorting using bubble sort : \n");
    for (int i = 0; i < size; i++)
    {
        printf("%d ", array[i]);
    }
    printf("\n");

    return 0;
}

// swap funtion
void swap(int *a, int *b)
{
    int t = *a;
    *a = *b;
    *b = t;
}

// sorting funtion using bubble sort
void Bubble_Sort(int array[], int size)
{
    for (int i = 0; i < size - 1; i++)
    {
        for (int j = 0; j < size - i - 1; j++)
        {
            if (array[j] > array[j + 1])
            {
                swap(&array[j], &array[j + 1]);
            }
        }
    }
}
