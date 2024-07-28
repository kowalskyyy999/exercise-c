#include <stdio.h> 
#include <math.h>
int main() {

  double a = sqrt(9);
  double b = pow(2, 4);
  int c = round(3.14);
  int d = ceil(3.14);
  int e = floor(8.09);
  double f = fabs(-100);
  double g = log(9);
  double h = sin(80);
  double i = cos(0);
  double j = tan(45);

  printf("sqrt functions: %0.1fl\n", a);
  printf("pow functions: %0.1fl\n", b);
  printf("round functions: %d\n", c);
  printf("ceil functions: %d\n", d);
  printf("floor functions: %d\n", e);
  printf("f-absolute functions: %fl\n", f);
  printf("log functions: %fl\n", g);
  printf("sin functions: %fl\n", h);
  printf("cos functions: %fl\n", i);
  printf("tan functions: %fl\n", j);

  return 0;
}
