#include <cs50.h>
#include <stdio.h>

int main (void) 
{
    printf("Please give me an number between 1 and 10:");
    int n = GetInt();
    
    if (n >= 1 && n <= 3) 
    {
        printf("You picked a small number!\n");
    }
    
    else if (n >= 4 && n <= 7)
    {
        printf("You picked a medium number!\n");
    }
    
    else if (n >= 8 && n <= 10)
    {
        printf("You picked a high number!\n");
    }
    else  
    {
        printf("You picked an invalid number!\n");
    }
}
