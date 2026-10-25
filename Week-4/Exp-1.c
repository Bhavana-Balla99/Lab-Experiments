#include <stdio.h>

int main()
{
    int A, B, C, D, E, F, G, result;
    int i, J;

    printf("Enter A, B, C, D, E, F and G: ");
    scanf("%d%d%d%d%d%d%d", &A, &B, &C, &D, &E, &F, &G);

    result = A + B * C + (D * E) + F * G;
    printf("\na) A+B*C+(D*E)+F*G = %d", result);

    result = A / B * C - B + A * D / 3;
    printf("\nb) A/B*C-B+A*D/3 = %d", result);

    result = A + B - A;
    printf("\nc) A+++B---A = %d", result);

    printf("\nEnter i: ");
    scanf("%d", &i);

    J = i + (i + 2);
    i = i + 2;

    printf("\nd) J = (i++)+(++i) = %d", J);

    return 0;
}