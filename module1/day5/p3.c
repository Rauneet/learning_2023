#include <stdio.h>

struct time {
  int hours;
  int minutes;
  int seconds;
};

void difference_between_time(struct time start_time, struct time stop_time, struct time *diff) {
  diff->hours = stop_time.hours - start_time.hours;
  diff->minutes = stop_time.minutes - start_time.minutes;
  diff->seconds = stop_time.seconds - start_time.seconds;

  if (diff->seconds < 0) {
    diff->seconds += 60;
    diff->minutes--;
  }

  if (diff->minutes < 0) {
    diff->minutes += 60;
    diff->hours--;
  }
}

int main() {
  struct time start_time, stop_time, diff;

  printf("Enter the start time (hours, minutes, seconds): ");
  scanf("%d %d %d", &start_time.hours, &start_time.minutes, &start_time.seconds);

  printf("Enter the stop time (hours, minutes, seconds): ");
  scanf("%d %d %d", &stop_time.hours, &stop_time.minutes, &stop_time.seconds);

  difference_between_time(start_time, stop_time, &diff);

  printf("The difference between the two time periods is: %d hours, %d minutes, and %d seconds.\n", diff.hours, diff.minutes, diff.seconds);

  return 0;
}
