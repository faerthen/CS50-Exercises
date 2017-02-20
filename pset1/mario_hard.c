/* 

Print out a pyramid of a specified height, as below (ht = 8):

******##**##
     ###  ###
    ####  ####
   #####  #####
  ######  ######
 #######  #######
########  ########

*/

#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int ht;                                         // declare (ht) variable outside the first function for reuse in later code
    
    do  {
        printf("Choose a number between 1-23: ");   // prompt the user for the pyramid’s height (ht)
        ht = get_int(); 
    }
    while (ht < 1 || ht > 23);                      // re-prompt for anything but a non-negative integer no greater than 23
    
    for (int r=0; r<ht; r++)  {                     // loop each row(r) of the pyramid
        for (int s=0; s<(ht-r-1); s++)  {           // loop the spaces(s) on each row
            printf(" ");                            // print the spaces on each row
        } 
        
        for (int h=0; h<r+2; h++)  {                // loop the hashes(h) on each row. Start with 2 hashes on first line
            printf("#");                            // print the hashes on each row
        } 

        printf("  ");                               // print two-space gap between halves
           
        for (int p=0; p<r+2; p++)  {
            printf("#");                            // print the right side pyramid hashes(p) after gap
        }
            
        printf("\n");                               // break line at end of each row
    }
}
