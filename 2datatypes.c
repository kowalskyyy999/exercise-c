#include<stdio.h>
#include<stdbool.h>

int main() {

  char a = 'A';               // single-character 
  char b[] = "hello world";   //array of characters

  float c = 3.14146929839;        // 4 bytes (32 bits of precision) 6-7 digits %f  
  double d = 3.14146929839;       // 8 bytes (64 bits of precision) 15-16 digits %f
  
  bool e = true;

  char f = 128;               // 1 byte (-128 to + 127) %d or %c 
  unsigned char g = 0;      // 1 byte (0 to +255) %d or %c 

  short int h = 32768;            // 2 bytes (-32,768 to + 32,767) %d
  unsigned short int i = 65535;   // 2 bytes (0 to +65,535) %d 

  int j = 2147483647;             // 4 bytes (-2,147,483,648 to +2,147,483,647) %d
  unsigned int k = 4294967295L;   // 4 bytes (0 to +4,294,967,295) %u

  long long int l = 9223372036854775807;  // 8 bytes (-9 quintillion to +9 quintillion) %lld
  unsigned long long int m = 18446744073709551615U; // 8 bytes (0 + 18 quintillion) %llu

  printf("- single character: %c\n", a);
  printf("- array of characters: %s\n", b);
  printf("- float 4 bytes: %0.15f\n", c);
  printf("- float 8 bytes: %0.15lf\n", d);
  printf("- boolean: \t\t%d\n", e);
  printf("- char: \t\t%c - %d\n", f, f);
  printf("- unsigned char: \t%c - %d\n", g, g);
  printf("- short: \t\t%d\n", h);
  printf("- unsigned short: \t%d\n", i);
  printf("- int: \t\t\t%d\n", j);
  printf("- unsigned int: \t%u\n", k);
  printf("- long long int: \t%lld\n", l);
  printf("- unsigned long long int: %llu\n", m);

  return 0;
}
