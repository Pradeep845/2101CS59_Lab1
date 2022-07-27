#include <stdio.h>

// Predefining used function
void swap(int *a, int *b);
int Part(int array[], int l, int h);
void Quick_Sort(int array[], int l, int h);

// main funtion
int main()
{
    int size;
    printf("\nEnter size of array : ");
    scanf("%d", &size);

    int array[size];

    printf("Enter elements of array : \n");
    for (int i = 0; i < size; i++)
    {
        scanf("%d", &array[i]);
    }

    // calling Quick_sort funtion
    Quick_Sort(array, 0, size - 1);

    printf("\nArray after sorting using Quick sort : \n");
    for (int i = 0; i < size; ++i)
    {
        printf("%d  ", array[i]);
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

// funtion for division/Part
int Part(int array[], int l, int h)
{
    int k = array[h];
    int i = (l - 1);
    for (int j = l; j < h; j++)
    {
        if (array[j] <= k)
        {
            i++;
            swap(&array[i], &array[j]);
        }
    }
    swap(&array[i + 1], &array[h]);
    return (i + 1);
}

// Recursive Quick sort funtion
void Quick_Sort(int array[], int l, int h)
{
    if (l < h)
    {
        int p = Part(array, l, h);

        Quick_Sort(array, l, p - 1);
        Quick_Sort(array, p + 1, h);
    }
}
