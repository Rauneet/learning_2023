#include <stdio.h>

int find_biggest_if_else(int a, int b) {
  int biggest;

  if (a > b) {
    biggest = a;
  } else {
    biggest = b;
  }

  return biggest;
}

int find_biggest_ternary(int a, int b) {
  return a > b ? a : b;
}

int main() {
  int a = 10;
  int b = 20;

  int biggest_if_else = find_biggest_if_else(a, b);
  int biggest_ternary = find_biggest_ternary(a, b);

  printf("The biggest number using if else is: %d\n", biggest_if_else);
  printf("The biggest number using ternary operator is: %d\n", biggest_ternary);

  return 0;
}
