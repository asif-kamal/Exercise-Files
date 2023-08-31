#include <stdio.h>
#include <string.h>

int main(void)
{
    char buffer[50];

    char firststring[25];
    char secondstring[25];

    printf("Enter First String: ");
    fgets(firststring, 25, stdin);
    printf("Enter Second String: ");
    fgets(secondstring, 25, stdin);

    strcpy(buffer, firststring);
    strcat(buffer, secondstring);

    printf("%s", buffer);

    return (0);
}