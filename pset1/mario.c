/* 

Print out a half-pyramid of a specified height, as below (ht = 8):

******##
     ###
    ####
   #####
  ######
 #######
########

*/

/*

What's the relationship between user input (ht), the number of lines (l), and the number of spaces (s) and #s (h) on a given line?
l == ht
s == ht - 2 // first row
s--
...
h == 2 // first row
h++

*/

#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int ht;

    do
    {
        printf("Choose a number between 1-23: ");   // prompt the user for the half-pyramid’s height
        ht = get_int(); 
    }
    while (ht <= 0 || ht > 23);                     // re-prompt for anything but a non-negative integer no greater than 23
    
    
    for (int r=0; r<ht; r++)  {                     // loop each row(r) of the pyramid 
           for (int s=0; s<(ht-r-1); s++)  {        // loop the spaces(s) on each row
                    printf(" ");                    // print space
                } 
                
           for (int h=0; h<r+2; h++) {              // loop the hashes(h) on each row. Skip the first row(r) to start with 2 hashes
                    printf("#");                    // print hash
                } 
           
            printf("\n");                           // break line

    }
}
