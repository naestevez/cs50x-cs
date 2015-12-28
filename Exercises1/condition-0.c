#include <stdio.h>
#include <cs50.h>

int main(void)
{
    printf("Please give me a number:");
    int n = GetInt(); 
    
    if (n > 0)
{
    printf("Your number is positive!\n");
}
    else if (n < 0)
{    
    printf("Your number is negative!\n");
} 
    else if (n == 0)
{
    printf("You picked 0!\n");
}
  
}
