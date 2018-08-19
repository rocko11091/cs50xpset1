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

}

/*
Algorithm

- prompt user for amount of change
    - get_float
    - loop if not a positive float > 0
        - add (and only contains 2 decimal places) condition in later iteration of project?
- convert input from float to int
    - input *100 stored as an int rounded
- While style
    - while (cointype can be used)
        increase count
        decrease change value by coin value
    - quarter, dime, nickle, penny

- Modulo style
    - int changeInt = int(user input*100)
    -
    - int coinvalue[4] = [25,10,5,1]
    - string coinName[4] = ["quarter","dime","nickle","penn"]
    - for (int i; i < 4; i++)
        - if (change % coinvalue >= 0)
            {
                coinnamecount = (change - (change % coinvalue))/coinvalue
                coincount += coinnamecount
                change =- coinvalue * coinnamecount
            }
        - else {}


*/