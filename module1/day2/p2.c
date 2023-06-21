#include <stdio.h>

void swap(void *a, void *b) {
  void *temp = a;
  a = b;
  b = temp;
}

int main() {
  int x = 10;
  int y = 20;

  printf("Before swapping: x = %d, y = %d\n", x, y);

  swap(&x, &y);

  printf("After swapping: x = %d, y = %d\n", x, y);

  return 0;
}
