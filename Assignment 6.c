#include <stdio.h>

// Function to compute factorial without recursion (iterative)
unsigned long long factorialIterative(int n) {
    unsigned long long fact = 1;
    for (int i = 1; i <= n; i++) {
        fact *= i;
    }
    return fact;
}

// Function to compute factorial with recursion
unsigned long long factorialRecursive(int n) {
    if (n == 0 || n == 1) {
        return 1;
    }
    return n * factorialRecursive(n - 1);
}

int main() {
    int num;

    printf("Enter a non-negative integer: ");
    scanf("%d", &num);

    if (num < 0) {
        printf("Factorial is not defined for negative numbers.\n");
    } else {
        printf("Without recursion -> Factorial of number=%llu\n", factorialIterative(num));
        printf("With recursion    -> Factorial of number=%llu\n", factorialRecursive(num));
    }

    return 0;
}