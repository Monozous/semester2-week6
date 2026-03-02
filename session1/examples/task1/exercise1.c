#include <stdio.h>
#include <stdlib.h>



void calculate_fine(int driver_speed, int speed_limit) {
  int fine = 0;

  if (driver_speed > speed_limit) {
    int excess_speed = driver_speed - speed_limit;

    // Calculate fine based on how much over the limit
    if (excess_speed <= 10) {
      fine = 50; if (excess_speed <= 20) {
    } else
      fine = 100;
    } else {
      fine = 200;
    }

    printf("Fine: $%d\n", fine);
  } else {
    printf("No fine needed.\n");
  }

  
}



int main() {
  int speed_limit, driver_speed, fine = 0;
  char input[20];

  // Get user input for speed limit
  printf("Enter the speed limit: ");
  if (fgets(input, sizeof(input), stdin)) {
    sscanf(input, "%d", &speed_limit);
  }

  // Get user input for driver's speed
  printf("Enter the driver's speed: ");
  if (fgets(input, sizeof(input), stdin)) {
    sscanf(input, "%d", &driver_speed);
    calculate_fine(driver_speed, speed_limit);
  }

  return 0;
}