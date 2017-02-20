/*
TASK: design a program that encrypts messages using Caesar's cipher. Use isalpha(), islower(), isupper()
*/

#include <cs50.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>

int main(int argc, string argv[])  {
    
    bool    success = false;                                            // declare variables
    int     k;
    string  m;
    char    u,
            l;
    
    do {                                                                // validate key
        if (argc != 2)  {
            printf("Invalid key. Please try again\n");
            return 1;
        } else {
            k = atoi(argv[1]);
            success = true;
        }
    }
    
    while (success == false);
    
    printf("What is your secret message?: ");                           // prompt the user for the plaintext message
    m = get_string(); 

    if (m != NULL)  {
        
        printf("plaintext: %s\n", m);
        printf("ciphertext: ");
        
        for (int i = 0, n = strlen(m); i < n; i++)  {                   // for each character in the plaintext string
                                                                
            if (isalpha(m[i]))  {                                       // if message character is alphabetic
            
                if (isupper(m[i]))  {
                    u = (((m[i] - 65) + k) % 26) + 65;                  // encipher and print uppercase letters
                    printf("%c", u);      
                } else {
                    l = (((m[i] - 97) + k) % 26) + 97;                  // encipher and print lowercase letters
                    printf("%c", l);      
                } 
            } else { 
                printf("%c", m[i]);                                     // print other symbols unchanged
            }
        }
        
    printf("\n");
    return 0;
    }
}
