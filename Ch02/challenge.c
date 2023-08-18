#include <stdio.h>
#include <math.h>

int main() 
{
    float a;
    float b;

    printf("Input floating point for a: ");
    scanf("%f", &a);// must use pointer instead of value of a
    printf("Input floating point for b: ");
    scanf("%f", &b); // must use pointer instead of value of b

    printf("%f + %f = %f\n", a,b,a+b);
    printf("%f - %f = %f\n", a,b,a-b);
    printf("%f * %f = %f\n", a,b,a*b);
    printf("%f / %f = %f\n", a,b,a/b);

    printf("a to the bth power is %f\n", pow(a,b));

    printf("The square root of a is %f\n", sqrt(a));
    printf("The square root of b is %f\n",sqrt(b));
}