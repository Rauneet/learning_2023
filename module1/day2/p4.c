#include <stdio.h>

int count_set_bits(int *array, int size) {
  int count = 0;
  int i;

  for (i = 0; i < size; i++) {
    int temp = array[i];
    while (temp > 0) {
      if (temp & 1) {
        count++;
      }
      temp >>= 1;
    }
  }

  return count;
}

int main() {
  int array[] = {0x1, 0xF4, 0x10001};
  int size = sizeof(array) / sizeof(array[0]);
  int count = count_set_bits(array, size);
  printf("The total number of set bits is: %d\n", count);

  return 0;
}
