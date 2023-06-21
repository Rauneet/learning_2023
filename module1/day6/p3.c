#include <stdio.h>

struct Student {
  int rollno;
  char name[20];
  float marks;
};

void display_structures(struct Student *students, int n) {
  for (int i = 0; i < n; i++) {
    printf("Student %d:\n", i + 1);
    printf("Roll number: %d\n", students[i].rollno);
    printf("Name: %s\n", students[i].name);
    printf("Marks: %.2f\n", students[i].marks);
  }
}

int main() {
  struct Student students[5];

  initialize_structures(students, 5);

  display_structures(students, 5);

  return 0;
}
