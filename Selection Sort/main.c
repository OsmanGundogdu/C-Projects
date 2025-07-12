#include <stdio.h>
#include <stdlib.h>

int create_array(int array[], int N)
{
    int i;
    printf("Give the elements of the array: \n\n");
    for (i = 0; i < N; i++)
        scanf("%d",&array[i]);
}

int sort_array(int array[], int N)
{
    int temp, j, i;

    for (j = 0; j < N; j++)
    {
        for (i = j + 1; i < N; i++)
        {
            if (array[i] < array[j])
            {
                temp = array[i];
                array[i] = array[j];
                array[j] = temp;
            }
        }
    }

    printf("\n\nSorted array: ");

    for (i = 0; i < N; i++)
        printf("%d   ", array[i]);
}

int main()
{
    int array[10];

    create_array(array, 10);
    sort_array(array, 10);

    printf("\n\n\n");
    return 0;
}
