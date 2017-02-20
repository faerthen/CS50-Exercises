/*
TASK: write a program that prints the initials of a name
*/

#include <cs50.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(void)  {
    
    string name = get_string();                         // get input
    
    printf("%c", toupper(name[0]));                     // print capitalized first letter of string
    
    for (int i=0, n=strlen(name); i<n; i++)  {
        if (name[i] == ' ')  {                          // find space(s)
            printf("%c", toupper(name[i+1]));           // print capitalized first letter after space
        }
    }
    printf("\n");    
}
