#include <stdio.h> 

int main() {
  // arithmetic operators 
  //
  // + (addition)
  // - (subtraction)
  // * (multiplication)
  // / (division)
  // % (modulus)
  // ++ increment 
  // -- decrement

  int x = 5;
  int y = 2;

  int a = x + y;
  int b = x - y;
  int c = x * y;
  float d = x / (float) y;
  int e = x % y;

  x++;
  y--;

  printf("Addition: \t%d\n", a);
  printf("Subtraction: \t%d\n", b);
  printf("Multiplication: %d\n", c);
  printf("Division: \t%f\n", d);
  printf("Modulus 5%2: \t%d\n", e);
  printf("Increment +1 x: %d\n", x);
  printf("Decrement -1 y: %d\n", y);
  return 0;
}
