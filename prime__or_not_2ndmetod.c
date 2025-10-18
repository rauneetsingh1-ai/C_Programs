#include <stdio.h>

int main() {
    int number, i, count = 0;

    printf("Enter a positive integer: ");
    scanf("%d", &number);

    for (i = 1; i <= number; i++) {
        if (number % i == 0) {
            count++; // count how many numbers divide 'number' exactly
        }
    }

    if (count == 2) {
        // Only divisible by 1 and itself
        printf("%d is a prime number.\n", number);
    } else {
        printf("%d is not a prime number.\n", number);
    }

    return 0;
}
