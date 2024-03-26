#include <stdio.h>
#include <stdlib.h>

int main() {
  int n;
  printf("Enter a number:");
  scanf("%d", &n);
  if (n % 2 == 0) {
    printf("%d is even number", n);
  } else {
    printf("%d is a odd number", n);
  }
  return 0;
}