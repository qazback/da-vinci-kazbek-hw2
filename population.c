#include <stdio.h>
#include <cs50.h>

int main(void)
{int startsize, endsize, years = 0;
    {
        startsize = get_int("Starting population size: ");
    }
    while (startsize < 9);
    {
        endsize = get_int("Ending population size: ");
    }
    while (endsize < startsize);
    int population = startsize;
    while (population < endsize)
    {
        population += population / 3 - population / 4;
        years++;
    }
    printf("Years: %d\n", years);}
