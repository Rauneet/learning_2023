#include <stdio.h>

int main() {
  float operand1, operand2;
  char operator;

  printf("Enter the first number: ");
  scanf("%f", &operand1);

  printf("Enter the operator: ");
  scanf(" %c", &operator);

  printf("Enter the second number: ");
  scanf("%f", &operand2);

  switch (operator) {
    case '+':
      printf("%.2f + %.2f = %.2f\n", operand1, operand2, operand1 + operand2);
      break;
    case '-':
      printf("%.2f - %.2f = %.2f\n", operand1, operand2, operand1 - operand2);
      break;
    case '*':
      printf("%.2f * %.2f = %.2f\n", operand1, operand2, operand1 * operand2);
      break;
    case '/':
      printf("%.2f / %.2f = %.2f\n", operand1, operand2, operand1 / operand2);
      break;
    default:
      printf("Invalid operator\n");
  }

  return 0;
}
