#include <stdio.h>

int main() {
    char ch;
    printf("Enter a character: ");
    scanf("%c", &ch);
    int isDigit = (ch >= '0') && (ch <= '9');
    printf("Result (1 = digit, 0 = not digit): %d\n", isDigit);
   return 0;
}
