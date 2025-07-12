#include <stdio.h>
#include <stdlib.h>

int main()
{
    float a;
    float b;
    float c;

    printf("please write the values of shape's edges\n");
    printf("a:");
    scanf("%f",&a);
    printf("b:");
    scanf("%f",&b);
    printf("c:");
    scanf("%f",&c);

    float volume=a*b*c;
    printf("volume = %f\n",volume);

    float surface_area=2*(a*b+a*c+b*c);
    printf("surface area = %f\n",surface_area);

    float surface_area_to_volume_ratio=surface_area/volume;
    printf(" surface area to volume ratio: %f\n",surface_area_to_volume_ratio);

    printf("now it's time to calculate surface area to volume ratio complete to 2");
    printf("the completing is : %f",surface_area_to_volume_ratio+2);
    return 0;
}
