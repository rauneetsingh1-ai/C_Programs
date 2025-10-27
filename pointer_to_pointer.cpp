#include <stdio.h>

int main() {
    int x = 50;
    int *ptr = &x;
    int **ptr2 = &ptr; // pointer to pointer

    printf("Value of x: %d\n", x);
    printf("Value via ptr: %d\n", *ptr);
    printf("Value via ptr2: %d\n", **ptr2);

    return 0;
}
