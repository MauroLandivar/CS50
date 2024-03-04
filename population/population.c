#include <cs50.h>
#include <stdio.h>

int main(void)

{
// TODO: Prompt for start size
    //Loop until he informs a population greater than 9
    int start_population;
    int min_population = 9 ;
    do
    {
        start_population = get_int ("What's the START population? \n");
        //Inform that a population less than 9 is an error
        if (start_population <= min_population)
        {
            printf("You can not inform a smaller population than 9, let's try again\n");
        }

    }
    while (start_population <= min_population);

// TODO: Prompt for end size
    //Loop until he informs a end population greater than the start population
    int end_population;
    do
    {
        end_population = get_int("What's the END population? \n");
        //Inform that a population less than the initial is an error
        if (end_population <= start_population)
        {
            printf("You can't insert a smaller population than the initial, let's try again\n");
        }
    }
    while (end_population < start_population);

// TODO: Calculate number of years until we reach threshold
    // How many years it would take to get the goal
    int b = 0;
    int years = 12;
    while (start_population < end_population)

    {
        //+=  start_population + start_population/12
        start_population += start_population / years;
        b++;
    }
    printf("Years: %i\n", b);
}