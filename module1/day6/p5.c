#include <stdio.h>
#include <string.h>

struct Student {
  int rollno;
  char name[20];
  float marks;
};

int search_by_name(struct Student *students, int n, char *name) {
  int low = 0;
  int high = n - 1;
  int mid;

  while (low <= high) {
    mid = (low + high) / 2;

    if (strcmp(students[mid].name, name) == 0) {
      return mid;
    } else if (strcmp(students[mid].name, name) < 0) {
      low = mid + 1;
    } else {
      high = mid - 1;
    }
  }

  return -1;
}

int main() {
  struct Student students[5];

  initialize_structures(students, 5);

  int index = search_by_name(students, 5, "Aron");

  if (index != -1) {
    printf("Student found at index: %d\n", index);
    printf("Roll number: %d\n", students[index].rollno);
    printf("Name: %s\n", students[index].name);
    printf("Marks: %.2f\n", students[index].marks);
  } else {
    printf("Student not found.\n");
  }

  return 0;
}
