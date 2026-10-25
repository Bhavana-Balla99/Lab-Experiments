#include <stdio.h>
#include <math.h>

int main()
{
    double p, r, t, amount, ci;

    printf("Enter principal amount: ");
    scanf("%lf", &p);

    printf("Enter rate of interest: ");
    scanf("%lf", &r);

    printf("Enter time in years: ");
    scanf("%lf", &t);

    amount = p * pow(1 + r / 100, t);
    ci = amount - p;

    printf("Compound Interest = %.2f\n", ci);
    printf("Total Amount = %.2f\n", amount);

    return 0;
}