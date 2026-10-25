#include <stdio.h>

int main()
{
    int a, b, c, d, max, min;

    printf("Enter four numbers: ");
    scanf("%d %d %d %d", &a, &b, &c, &d);

    max = a;
    min = a;

    if (b > max)
        max = b;
    else
        min = b < min ? b : min;

    if (c > max)
        max = c;
    else
        min = c < min ? c : min;

    if (d > max)
        max = d;
    else
        min = d < min ? d : min;

    printf("Maximum = %d\n", max);
    printf("Minimum = %d\n", min);

    return 0;
}