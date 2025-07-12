#include <stdio.h>
#include <stdlib.h>

void area_of_square()
{
    int a;

    printf("\nPlease write 'a': ");
    scanf("%d", &a);

    int area_of_square = a * a;

    draw_line();

    printf("\nArea of square is: %d\n", area_of_square);

    draw_line();
}

void area_of_triangle()
{
    float b, h;

    printf("\nPlease write 'b': ");
    scanf("%f", &b);

    printf("\nPlease write 'h': ");
    scanf("%f", &h);

    float area_of_triangle = b * h / 2.0;

    draw_line();

    printf("\nArea of triangle is: %.2f\n", area_of_triangle);

    draw_line();
}

void area_of_circle()
{
    float pi = 3.14, r;

    printf("\nPlease write 'r': ");
    scanf("%f", &r);

    double area_of_circle = 2.0 * r * pi;

    draw_line();

    printf("\nArea of circle is: %.2f\n", area_of_circle);

    draw_line();
}

void draw_line()
{
    printf("\n\n\n---------------------------------------------\n\n\n");
}

int main()
{
    int process;

    printf("Please choose the process you want to do.\n\n 1-Area of square\n 2-Area of triangle\n 3-Area of circle\n");

    printf("\nYour decision is: ");

    scanf("%d", &process);
    switch(process){
        case 1:
            area_of_square();
        break;
        case 2:
            area_of_triangle();
        break;
        case 3:
            area_of_circle();
        break;
        default: printf("you have to choose the right option!");
        break;
    }
    return 0;
}
