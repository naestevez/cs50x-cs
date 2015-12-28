#include <cs50.h>
#include <stdio.h>
#include <math.h>
#include <ctype.h>



int main(int argc, string argv[])
{
    
    float userinput = 0;
    
    do 
    {     
        printf("How much change is owed?\n");
        userinput = GetFloat();
    }
    while (userinput <= 0);
  
    
    
    int change = int(userinput * 100)curl http://udacity.github.io/ud595-shell/stuff.zip -o things.zip;
    int count = 0;   
    
    while (change > 99) 
    {
        count++;
        change = change - 25;
    }
    
      while (change > 25) 
    {
        count++;
        change = change - 25;
    }
   
    while (10 <= change < 25) 
    {
        count++;
        change = change - 10;
    }
    
    while (5 <= change < 10) 
    {
        count++;
        change = change - 5;
    }
    
    while (0 < change < 5) 
    {
        count++;
        change = change - 1;
    }
    
    printf("I owe you %d coins.\n", count);
    return 0;
    
}
