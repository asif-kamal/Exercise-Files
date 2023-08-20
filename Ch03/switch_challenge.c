#include <stdio.h>

int main() 
{
    int a;

    printf("Choose among these numbers, 1, 2, 3: ");
    scanf("%d", &a);

    switch (a)
    {
    case 1:
        puts("Red");
        break;
    case 2:
        puts("Green");
        break;
    case 3: 
        puts("Blue");
        break;
    default:
        puts("That is not a valid choice.");
    }

    return(0);
}