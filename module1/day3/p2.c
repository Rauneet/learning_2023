#include <stdio.h>

void print_bits(int n) {
  for (int i = 31; i >= 0; i--) {
    printf("%d", (n >> i) & 1);
  }
}

int main() {
  int n;
  printf("Enter a 32-bit integer: ");
  scanf("%d", &n);

  print_bits(n);

  return 0;
}
