#include <stdio.h>

int main() 
{
    int a, b, c;
    printf("Give me a number:");
    scanf("%d", &a);
    printf("Give me a second number:");
    scanf("%d", &b);
    c = a + b;
    printf("%d + %d = %d\n", a, b, c);
    return 0;   
}
