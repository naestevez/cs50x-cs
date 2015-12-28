#include <stdio.h>
#include <cs50.h>

void Printname(string name);

int main(void)
{
    printf("You name please:");
    string s = GetString();
    Printname(s);
}   

void Printname(string name)
{
    printf("Hello, %s\n", name);
}
