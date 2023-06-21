#include <stdio.h>

int main() {
  int roll_no;
  char name[50];
  int physics, math, chemistry;
  int total;
  float percentage;

  printf("Enter the roll number: ");
  scanf("%d", &roll_no);

  printf("Enter the name of the student: ");
  scanf("%s", name);

  printf("Enter the marks of physics: ");
  scanf("%d", &physics);

  printf("Enter the marks of math: ");
  scanf("%d", &math);

  printf("Enter the marks of chemistry: ");
  scanf("%d", &chemistry);

  total = physics + math + chemistry;
  percentage = (total / 300.0) * 100;

  printf("Roll number: %d\n", roll_no);
  printf("Name: %s\n", name);
  printf("Total marks: %d\n", total);
  printf("Percentage: %.2f%%\n", percentage);

  return 0;
}
