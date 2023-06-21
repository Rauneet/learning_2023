#include <stdio.h>

struct Student {
  int rollno;
  char name[20];
  float marks;
};

void initialize_structures(struct Student *students, int n) {
  for (int i = 0; i < n; i++) {
    students[i].rollno = i + 1;
    strcpy(students[i].name, "Student");
    students[i].marks = 0.0;
  }
}

int main() {
  struct Student students[5];

  initialize_structures(students, 5);

  for (int i = 0; i < 5; i++) {
    printf("Student %d:\n", i + 1);
    printf("Roll number: %d\n", students[i].rollno);
    printf("Name: %s\n", students[i].name);
    printf("Marks: %.2f\n", students[i].marks);
  }

  return 0;
}
