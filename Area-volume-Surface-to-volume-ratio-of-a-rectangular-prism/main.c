#include <stdio.h>
#include <stdlib.h>

int main()
{
    float a, b, c;

    printf("Please write the edges of rectangular prism:\n");
    printf("First edge  :  ", a);
    scanf("%f", &a);
    printf("Second edge :  ", b);
    scanf("%f", &b);
    printf("Height      :  ", c);
    scanf("%f", &c);

    printf("\n\n\n******************************************************\n\n\n\n");

    float area = 2 * (a * b + a * c + b * c);
    printf("The area of the rectangular prism                 : %.2f\n", area);

    float volume = a * b * c;
    printf("\nThe volume of the rectangular prism               : %.2f\n", volume);

    float surface_to_volume_ratio = area / volume;
    printf("\nSurface-to-volume ratio of the rectangular prism  : %.2f", surface_to_volume_ratio);


    printf("\n\n\n\n\n\n\n\n");
    return 0;
}
