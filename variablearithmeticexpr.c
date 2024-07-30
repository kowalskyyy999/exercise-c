#include <stdio.h> 

int main() {
  int fahr, celcius;
  int lower, upper, step;

  lower = 0;
  upper = 360;
  step = 10;

  fahr = lower;

  while (fahr <= upper) {
    celcius = 5 * (fahr - 32) / 9;
    printf("%d\t%d\n", fahr, celcius);
    fahr += step;
  }

  // For statement 
  fahr = 0;

  for (fahr=0;fahr<=360;fahr+= step) {
    printf("%3d %6.1f\n", fahr, (5.0/9.0) * (fahr - 32));
  }
  return 0;
}
