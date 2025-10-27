#include <stdio.h>

void addTen(int *n) {
    *n += 10; // modifies original value
}

int main() {
    int num = 5;
    addTen(&num);
    printf("New value: %d\n", num); // original value changed
    return 0;
}
