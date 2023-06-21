#include <stdio.h>

struct student {
  int roll_number;
  char name[50];
};

void swap_structures(struct student *s1, struct student *s2) {
  struct student temp;

  temp = *s1;
  *s1 = *s2;
  *s2 = temp;
}

int main() {
  struct student s1, s2;

  s1.roll_number = 10;
  strcpy(s1.name, "John Doe");

  s2.roll_number = 20;
  strcpy(s2.name, "Jane Doe");

  printf("Before swapping:\n");
  printf("s1.roll_number: %d\n", s1.roll_number);
  printf("s1.name: %s\n", s1.name);
  printf("s2.roll_number: %d\n", s2.roll_number);
  printf("s2.name: %s\n", s2.name);

  swap_structures(&s1, &s2);

  printf("After swapping:\n");
  printf("s1.roll_number: %d\n", s1.roll_number);
  printf("s1.name: %s\n", s1.name);
  printf("s2.roll_number: %d\n", s2.roll_number);
  printf("s2.name: %s\n", s2.name);

  return 0;
}
