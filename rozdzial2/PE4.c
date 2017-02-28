// a program that prints song lyrics
#include <stdio.h>

void jolly(void);
void deny(void);

int main(void)
{
    int n;
    n = 0;
    
    while(n < 3)
    {
        printf("For he's a ");
        jolly();
        printf(" fellow!\n");
        n++;
    }
    
    deny();
    return 0;
}

void jolly(void)
{
    printf("jolly good");
}

void deny(void)
{
    printf("Which nobody can deny!\n");
}