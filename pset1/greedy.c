/*
TASK: ask the user how much change is owed, then spit out the minimum number of coins with which said change can be made.
Assume that the only coins available are quarters (25¢), dimes (10¢), nickels (5¢), and pennies (1¢).
*/

#include <stdio.h>
#include <cs50.h>

                                                            // declare all variables
int     cents,
        count = 0,
        q,
        d,
        n,
        p,
        i,
        j,
        coinNumbers[4] = { 0, 0, 0, 0 },
        coinValues[4] = { 25, 10, 5, 1 };
float   getChange;
string  coinNames[4] = { " quarter(s)", " dime(s)", " nickel(s)", " pennies" };


int main(void)  {
    
    do {
        printf("\nHow much change do you want?: $");
        getChange = get_float();                        
    }
    while(getChange < 0.0);                                 // get user input; reprompt if input is out of bounds
    
    cents = getChange * 100;                                // get rid of decimals
    
 
    for (j=0; j<4; j++) {                                   // subtract one coin at a time and count them until cents-[i]==0
        while(cents / coinValues[j] >= 1) {
            cents -= coinValues[j];
            count++;
        }
        coinNumbers[j] = count;                             // assign counter total to coin, then reset counter
        count = 0;
    }
 
    printf("\nI owe you...\n\n");
    
    for (i=0; i<4; i++) {                                   // list numbers of all coins needed to make optimal change
        printf("%i", coinNumbers[i]);        
        printf("%s\n", coinNames[i]);
    
    }
    printf("\n");
}
