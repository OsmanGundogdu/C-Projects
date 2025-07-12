#include <stdio.h>
#include <time.h>

int main()
{
    int birth_year, age;
    time_t t = time(NULL);
    struct tm tm = *localtime(&t);

    int current_year = tm.tm_year + 1900; // counts every year from 1900.

    printf("The current year is       : %d", current_year);

    printf("\n\nGive me your birth year   : ");
    scanf("%d", &birth_year);

    age = current_year - birth_year;

    printf("\n\n\n**********************************************");

    printf("\n\n\nYour Age is ;");
    printf("\n\n\n\n%d - %d = %d", current_year, birth_year, age);

    printf("\n\n\n\n\n");
    return 0;

}
