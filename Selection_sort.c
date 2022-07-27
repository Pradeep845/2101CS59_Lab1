#include <stdio.h>

// Predefining Used funtion
void swap(int *a, int *b);
void Selection_Sort(int array[], int n);

// main funtion
int main()
{
    int size;
    printf("\nEnter size of array: ");
    scanf("%d", &size);
    printf("Enter elements of array: \n");
    int array[size];
    for (int i = 0; i < size; i++)
    {
        scanf("%d", &array[i]);
    }

    // calling sort funtion
    Selection_Sort(array, size);

    // printing final sorted array
    printf("\nArray after sorting using Selection_sort : \n");
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
    int temp = *a;
    *a = *b;
    *b = temp;
}

// sorting funtion using selection sort
void Selection_Sort(int array[], int size)
{
    for (int i = 0; i < size - 1; i++)
    {
        int k = i;
        for (int j = i + 1; j < size; j++)
        {
            if (array[j] < array[k])
            {
                k = j;
            }
        }
        swap(&array[k], &array[i]);
    }
}