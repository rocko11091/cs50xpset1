#include <stdio.h>
#include <cs50.h>


int main (void) {
    int n;
//loop asks for user inp of positive int <24; repeats if not met
    do {
        printf("Please enter a positive integer for the height of the pyramid:  ");
        n = get_int();
    } while (n < 0 || n > 23);

    printf("Height: %i\n", n);

}