#include <stdio.h>

void print_numbers(int n) {
  for (int i = 1; i <= n; i++) {
    printf("%d", i);
  }
}

void print_spaces(int n) {
  for (int i = 1; i <= n; i++) {
    printf(" ");
  }
}

void print_pattern(int n) {
  print_numbers(n);
  print_spaces(n - 1);
  print_numbers(n - 1);
  print_spaces(n - 2);
  print_numbers(n - 2);

}

int main() {
  int n;
  printf("Enter the number of rows: ");
  scanf("%d", &n);

  print_pattern(n);

  return 0;
}
