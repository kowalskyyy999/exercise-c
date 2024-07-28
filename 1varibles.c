#include <stdio.h>

int main() {
  int x;        // declaration
  x = 12;       // initialization
  int y = 321;  // declaration + initialization 
  
  int a = 17;     // integer 
  float b = 2.05;  // floating point number or decimal
  char c = 'C';   // single-character 
  char d[] = "Hello world"; // array of character or its a string 

  printf("its an integer %d\n", a);
  printf("its a float %.2f\n", b);
  printf("its a character %c\n", c);
  printf("its a character in index %d\n", c);
  printf("its a string %s\n", d);

  return 0;
}
