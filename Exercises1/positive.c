#include <cs50.h>
#include <stdio.h>

int main (void)
{
    int n;
    do
    {
        printf("Please give me a positive int:\n");
        n = GetInt();
    }    
    while (n < 1);
    {
        printf("Thank you for the int\n"); 
    }
}
