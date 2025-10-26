#include <stdio.h>

int main() {
    int arr[] = {1, 2, 3, 4, 5};
    int *ptr = arr; // pointer points to first element

    for(int i = 0; i < 5; i++) {
        printf("%d ", *(ptr + i)); // pointer arithmetic
    }

    return 0;
}
