#include <stdio.h>

int main()
{
    int a = 20, b = 4, choice;

    printf("1. Addition\n");
    printf("2. Subtraction\n");
    printf("3. Multiplication\n");
    printf("4. Division\n");

    choice = 1;

    switch(choice)
    {
        case 1:
            printf("Addition = %d", a + b);
            break;

        case 2:
            printf("Subtraction = %d", a - b);
            break;

        case 3:
            printf("Multiplication = %d", a * b);
            break;

        case 4:
            printf("Division = %d", a / b);
            break;

        default:
            printf("Invalid Choice");
    }

    return 0;
}