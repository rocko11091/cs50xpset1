/*
Project Name: Cash

Developer: Rikhav Kothari

Description
Takes user input in the form of a positive float (amount of change)
and returns the minimum number of coins to provide necessary change

*/



#include <stdio.h>
#include <cs50.h>


int main(void)
{
    float change;
    do
    {
       printf("Please enter your change (as a positive float with no more that 2 decimal places):  ");
       change = get_float();
    } while (change <=0);


    printf("%.2f", change);
}

/*
Algorithm

-[x] prompt user for amount of change
    - get_float
    - loop if not a positive float > 0
        - add (and only contains 2 decimal places) condition in later iteration of project?
-[_] convert input from float to int
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