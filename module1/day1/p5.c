#include <stdio.h>

int bit_operations(int num, int oper_type) {
  int result;
  int bit_mask;

  bit_mask = 1 << 0;
  if (oper_type == 1) {
    result = num | bit_mask;
  } else if (oper_type == 2) {
    result = num & ~bit_mask;
  } else if (oper_type == 3) {
    result = num ^ bit_mask;
  } else {
    result = num;
  }

  return result;
}

int main() {
  int num = 10;
  int oper_type = 3;
  int result;

  result = bit_operations(num, oper_type);

  printf("The result is: %d\n", result);

  return 0;
}
