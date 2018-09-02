/*
Project Name: Cash

Developer: Rikhav Kothari

Description
Takes user input in the form of a positive float (amount of change)
and returns the minimum number of coins to provide necessary change

Comment Key -
[_] Not included
[in] included but untested
[x] tested and working

*/



#include <stdio.h>
#include <cs50.h>
#include <math.h>

float input(void);
int coincounter(float c);

int main(void)
{
    //[x]call input to get change value
    float change = input();
    //test print
    //printf("input function return value: %.2f\n\n", change);
    int coincount = coincounter(change);
    printf("%i\n", coincount);
}

//[x]gets user input
float input(void)
{
    float change;
    do
    {
        printf("Please enter your change (as a positive float with no more that 2 decimal places):  ");
        change = get_float();
    }
    while (change <= 0);
    return change;
}

//[x] take change as input, return coin count
int coincounter(float c)
{
    //printf("%f", c);
    //[x]recast i as int, and mult by 100 for total cents
    int changeCents = round(c * 100);
    //test print
    //printf("change in cents: %i\n", changeCents);

    //init variables for loop
    int coinValue[] = {25, 10, 5, 1};
    //# of total coins to return
    int coinCount = 0;
    // max # of [i] coin to return (ex. 5 quarters(25's))
    int coinValueCount = 0;

    //interate loop 4 times, once for each coin value
    for (int i = 0; i < 4; i++)
    {
        // printf("Step %i: %i cents\n", i+1, coinValue[i]);
        //if changeCents can be divided into the current coinValue
        if (changeCents % coinValue[i] >= 0)
        {
            //find the number of coinValue[i] that fit into changeCents
            coinValueCount = (changeCents - (changeCents % coinValue[i])) / coinValue[i];
            //printf("coinValueCount: %i\n", coinValueCount);
            //add number of coinValue[i] to coinCount
            coinCount += coinValueCount;
            //printf("current coinCount: %i\n", coinCount);
            //subtract the value of the max coinValue[i]'s that fit in changeCents
            changeCents -= coinValue[i] * coinValueCount;
            //printf("current remaining changeCents: %i\n\n", changeCents);
        }
    }
    return coinCount;
}

/*
Modulo style
                coinnamecount = (change - (change % coinvalue))/coinvalue
                coincount += coinnamecount
                change =- coinvalue[i-1] * coinnamecount
            }
*/


/*
Algorithm

-[x] prompt user for amount of change
    - get_float
    - loop if not a positive float > 0
        - add (and only contains 2 decimal places) condition in later iteration of project?
-[i] convert input from float to int
    - input *100 stored as an int rounded
-[_] While style
    - while (cointype can be used)
        increase count
        decrease change value by coin value
    - quarter, dime, nickle, penny

-[_] Modulo style
    - int changeInt = int(user input*100)
    -
    - int coinvalue[4] = [25,10,5,1]
    - string coinName[4] = ["quarter","dime","nickle","penn"]
    - for (int i; i < 4; i++)
        - if (change % coinvalue >= 0)
            {
                coinnamecount = (change - (change % coinvalue))/coinvalue
                coincount += coinnamecount
                change =- coinvalue[i-1] * coinnamecount
            }



*/