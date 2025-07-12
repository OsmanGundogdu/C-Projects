#include <stdio.h>
#include <time.h>

void sort_array(int X[], int size)
{
    int i, j, temp;

    for (i = 0; i < size - 1; i++)
    {
        for (int j = i + 1; j < size; j++)
        {
            if (X[i] > X[j])
            {
                temp = X[i];
                X[i] = X[j];
                X[j] = temp;
            }
        }
    }
}

void create_array(int X[], int size)
{
    srand(time(NULL));

    int i, j;

    for (i = 0; i < size; i++)
        X[i] = rand() % 20;
}

void print_array(int X[], int size)
{
    int i, j;

    for (i = 0; i < size; i++)
        printf("%d  \n", X[i]);
}

void calculate_median(int X[], int size)
{
    if (size % 2 == 0)
    {
        int middle_index = size / 2;
        double median = ( X[middle_index - 1] + X[middle_index] ) / 2.0;
        printf("Median is: %.1f\n", median);
    }
    else
    {
        int median = size / 2;
        printf("Median is: %d", X[median]);
    }

}

void draw_line()
{
    printf("\n\n\n*********************************\n\n\n");
}

int main()
{
    int temp, i , N;

    printf("Please give the dimension of the array: ");
    scanf("%d", &N);

    draw_line();

    int array[N];

    create_array(array, N);

    printf("Auto created array: \n\n");
    print_array(array, N);

    draw_line();

    sort_array(array,N);

    printf("Sorted array: \n\n");
    print_array(array, N);

    draw_line();

    calculate_median(array, N);

    draw_line();
    return 0;
}
