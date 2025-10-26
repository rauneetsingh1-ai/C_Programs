#include <stdio.h>

int main() {
    int x = 10;
    int *ptr = &x; // pointer stores address of x

    printf("Value of x: %d\n", x);
    printf("Address of x: %p\n", ptr);
    printf("Value using pointer: %d\n", *ptr); // dereference

    return 0;
}
