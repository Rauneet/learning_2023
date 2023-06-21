#include <stdio.h>

int main() {
  int number;
  int largest_number = 0;

  printf("Enter a 4-digit number: ");
  scanf("%d", &number);

  
  for (int i = 1; i <= 9; i++) {
    int temp = number;
    temp -= i;
    if (temp > largest_number) {
      largest_number = temp;
    }
  }

  printf("The largest number is: %d\n", largest_number);

  return 0;
}
