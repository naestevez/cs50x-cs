#include <cs50.h>
#include <math.h>
#include <stdio.h>

// demonstrates floating point imprecision
int main(void)
{
    // gets a float from the user and then prints it
    float f = GetFloat();
    printf("%f \n", f);
    return 0;
}
