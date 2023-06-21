#include <stdio.h>

void print_exponent(double x) {
  union {
    double f;
    unsigned long long u;
  } var;

  var.f = x;

  // Get the exponent.
  unsigned int exponent = (var.u >> 52) & 0x7FF;

  // Print the exponent in hexadecimal.
  printf("The exponent in hexadecimal is: 0x%X\n", exponent);

  // Print the exponent in binary.
  printf("The exponent in binary is: 0b%X\n", exponent);
}

int main() {
  double x = 0.7;

  print_exponent(x);

  return 0;
}
