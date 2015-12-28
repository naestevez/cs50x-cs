/**  
* mario.c
*
* Nayeli "Alejandra" Estevez
* nestevez7@gmail.com
*
* prints a half-pyramid of hashes that is right-aligned 
* with a height provided by a user that is between
* 0 and 23 
*/  
            
#include <cs50.h>
#include <stdio.h>



int main(void)
{   
    
    // gets the height of the half-pyramid from the user
    int height;
    do 
    {
        printf("Choose a number between 1 and 23.\n");
        printf("Height:");
        height = GetInt();  
    }   
    while (height <= 0 || height > 23);
 
   
    // assigns variables for height (h), space (s), and hashes (h) 
    int p = height;
    int spaces = height - 1;
    int hashes = 2;
   
    // sets up height for the half-pyramid
    while (p > 0)
    {
       
        // establishes condition for spaces  
        while (spaces >= 0)
        {
            /**  
             * establishes condition for hashes
             * prints and decrements spaces
             * prints and increments hashes
             */   
            while (hashes <= p + 1)
            {
                printf("%.*s", spaces, "                        ");
                printf("%.*s", hashes, "########################");
                printf("\n"); 
                spaces--;
                hashes++;  
            }
            
        }
        p--;
        
    }
   
}
