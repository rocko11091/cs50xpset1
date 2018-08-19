#include <stdio.h>
#include <cs50.h>


int main(void)
{
    int height;
//loop asks for user inp of positive int <24; repeats if not met
    do
    {
        printf("Please enter a positive integer for the height of the pyramid:  ");
        height = get_int();
    }
    while (height < 0 || height > 23);

    //printf("Height: %i\n", height);

    //print pyramid
    for (int i = 0; i < height; i++)
    {

        //print spaces
        for (int j = 0; j < height - (i + 1); j++)
        {
            printf(" ");
        }

        //print hashes
        for (int j = 0; j < i + 2; j++)
        {
            printf("#");

        }
        //new line
        printf("\n");

    }
}