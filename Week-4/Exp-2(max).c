#include <stdio.h>

void main()
{
    int a, b, c, r, d;

    printf("enter a number:");
    scanf("%d", &a);

    printf("enter a number:");
    scanf("%d", &b);

    printf("enter a number:");
    scanf("%d", &c);

    r = (a > b && a > c) ? a : (b > c) ? b : c;

    printf("%d", r);
}