#include <stdio.h>

int main()
{
    int age;
    float marks;

    printf("Enter your age: ");
    scanf("%d", &age);

    printf("Enter your marks: ");
    scanf("%f", &marks);

    printf("\nAge = %d\n", age);
    printf("Marks = %f\n", marks);

    return 0;
}