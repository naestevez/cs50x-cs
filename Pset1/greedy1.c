#include <cs50.h>
#include <stdio.h>
#include <math.h>



int main(void)
{

  
  
    float input();
    int count = 0;
    
    do 
    {    
        printf("How much change is owed?");
        float input = GetFloat();
    }
    while (input <= 0);
    
}
