#include <stdio.h>
#include <stdlib.h>

void draw_line()
{
    printf("\n\n\n---------------------------------------------------\n\n\n");
}

int main()
{
    int process;
    float a, b, Collection, Extraction, Impaction, Partition;

    printf("Please choose the process you want to do.\n\n1-)Collection\n2-)Extraction\n3-)Multiplication\n4-)Partition\n");

    printf("\nYour decision is: ");
    scanf("%d", &process);

    draw_line();

    switch (process){
        case 1:
            printf("******************* COLLECTION *******************\n\n\n\n\n\n");

            printf("Please write the first number: ");
            scanf("%f", &a);

            printf("\n\n");

            printf("Please write the second number: ");
            scanf("%f", &b);

            printf("\n\n+___________________________________________________\n\n");

            Collection = a + b;

            printf("%.1f + %.1f = %.1f", a, b, Collection);

            draw_line();

            break;
        case 2:
            printf("******************* EXTRACTION *******************\n\n\n\n\n\n");

            printf("Please write the first number: ");
            scanf("%f", &a);

            printf("\n\nPlease write the second number: ");
            scanf("%f", &b);

            printf("\n\n-____________________________________________________\n\n");

            Extraction = a - b;

            printf("%.1f - %.1f = %.1f", a, b, Extraction);

            draw_line();

            break;
        case 3:
            printf("***************** MULTIPLICATION *****************\n\n\n\n\n\n");

            printf("Please write the first number: ");
            scanf("%f", &a);

            printf("\n\nPlease write the second number: ");
            scanf("%f", &b);

            printf("\n\n*______________________________________________________\n\n");

            Impaction = a * b;

            printf("%.1f X %.1f = %.1f", a, b, Impaction);

            draw_line();

            break;
        case 4:
            printf("******************* PARTITION ********************\n\n\n\n\n\n");

            printf("Please write the first number: ");
            scanf("%f", &a);

            printf("\n\nPlease write the second number: ");
            scanf("%f", &b);

            printf("\n\n/_____________________________________________________\n\n");

            Partition = a / b;

            if (b != 0)
                printf("%.1f / %.1f = %.1f", a, b, Partition);
            else printf("%.1f / %.1f = You are crazy :)\n", a, b);

            draw_line();

            break;
        default:
            printf("What do you want to do huh ...... '~' \n");

            draw_line();
    }

    return 0;
}
