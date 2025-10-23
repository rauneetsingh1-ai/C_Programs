#include <stdio.h>

int sum(int k) {
  if (k > 0) {
    return k + sum(k - 1);
  } else {
    return 0;
  }
}

int main() {
  int n;
  printf("Enter the value of n: ");
  scanf("%d", &n);
  int result = sum(n);
  printf("The sum of first %d natural numbers is %d", n, result);
  return 0;
}
