#include <stdio.h> 

#define LOWER 0
#define UPPER 360
#define STEP 10

int main() {

  int fahr;

  for (fahr = LOWER; fahr <= UPPER; fahr += STEP) {
    printf("%6d %6.1f\n", fahr, (5.0/9.0) * (fahr - 32));
  }

  return 0;
}
