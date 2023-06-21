#include <stdio.h>

void find_smallest_and_largest_digits(int n, int *numbers) {
  int smallest_digit = 10, largest_digit = 0;

  for (int i = 0; i < n; i++) {
    int temp = numbers[i];
    while (temp > 0) {
      int digit = temp % 10;
      if (digit < smallest_digit) {
        smallest_digit = digit;
      } else if (digit > largest_digit) {
        largest_digit = digit;
      }
      temp /= 10;
    }
  }

  if (smallest_digit == 10) {
    printf("Not Valid\n");
  } else {
    printf("Smallest digit: %d\nLargest digit: %d\n", smallest_digit, largest_digit);
  }
}

int main() {
  int n = 3;
  int numbers[] = {8, 156, 123450};

  find_smallest_and_largest_digits(n, numbers);

  return 0;
}
