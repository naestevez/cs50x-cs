#include <stdio.h>
#include <cs50.h>

int main(void)
{
    printf("Please give me a number from 1 to 10:");
    int x = GetInt();
    
    if (x >= 1 && x <= 3)
    {
        printf("You picked a small number!\n");
    }
    else if (x >= 4 && x <= 7)
    {
        printf("You picked a middle number!\n");
    } 
    else if (x >= 8 && x <= 10)
    {
        printf("You picked a high number!\n");
    } 
}
