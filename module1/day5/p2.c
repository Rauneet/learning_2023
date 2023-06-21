#include <stdio.h>

typedef struct {
  float real;
  float imag;
} complex;

complex read_complex() {
  complex c;
  printf("Enter the real and imaginary parts of the complex number: ");
  scanf("%f %f", &c.real, &c.imag);
  return c;
}

void write_complex(complex c) {
  printf("The complex number is: %.2f + %.2fi\n", c.real, c.imag);
}

complex add_complex(complex c1, complex c2) {
  complex c;
  c.real = c1.real + c2.real;
  c.imag = c1.imag + c2.imag;
  return c;
}

complex multiply_complex(complex c1, complex c2) {
  complex c;
  c.real = c1.real * c2.real - c1.imag * c2.imag;
  c.imag = c1.real * c2.imag + c1.imag * c2.real;
  return c;
}

int main() {
  complex c1 = read_complex();
  complex c2 = read_complex();

  complex c3 = add_complex(c1, c2);
  write_complex(c3);

  complex c4 = multiply_complex(c1, c2);
  write_complex(c4);

  return 0;
}
