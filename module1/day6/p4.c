#include <stdio.h>

struct Student {
  int rollno;
  char name[20];
  float marks;
};

void sort_by_marks(struct Student *students, int n) {
  for (int i = 0; i < n - 1; i++) {
    for (int j = i + 1; j < n; j++) {
      if (students[i].marks < students[j].marks) {
        struct Student temp = students[i];
        students[i] = students[j];
        students[j] = temp;
      }
    }
  }
}

int main() {
  struct Student students[5];

  initialize_structures(students, 5);

  sort_by_marks(students, 5);

  display_structures(students, 5);

  return 0;
}
