#include <stdio.h>

int main() 
{
    for(int x = 1; x <= 20; x++)
    {
        printf("%d\n", x);
    }

    int y = -10;

    while(y <= 10)
    {
        if(y % 2 == 0)
        {
            printf("%d\n", y);
        }
        y++;
    }
}