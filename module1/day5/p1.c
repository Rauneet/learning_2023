#include <stdio.h>

struct box {
  int length;
  int breadth;
  int height;
};

void find_volume_and_surface_area(struct box *box) {
  int volume = box->length * box->breadth * box->height;
  int surface_area = 2 * (box->length * box->breadth + box->length * box->height + box->breadth * box->height);

  printf("Volume of the box is: %d\n", volume);
  printf("Surface area of the box is: %d\n", surface_area);
}

int main() {
  struct box box;
  box.length = 10;
  box.breadth = 5;
  box.height = 3;

  find_volume_and_surface_area(&box);

  return 0;
}
