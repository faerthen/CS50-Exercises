// TASK: convert minutes spent in the shower (t) to bottles of drinking water (b)

#include <stdio.h>
#include <cs50.h>

int main(void)
{
    printf("Minutes in shower: ");
    int t = get_int();
    int b = (t * 198) / 16;
    printf("Number of bottles used: %i\n", b);
}
