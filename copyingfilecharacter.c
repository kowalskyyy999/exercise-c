#include <stdio.h> 

int main() {
  // File Copying
  printf("File Copying !\n"); 
  // getchar() -> reads the next input character from a text stream and 
  //              returns that as its value
  // putchar() -> prints a character each time 
  // 
  
  // 1st version
  int c;

  c = getchar();
  // while (c != EOF) {
    // putchar(c);
    // c = getchar();
  // }

  // 2nd version 
  while ((c = getchar()) != EOF) {
    putchar(c);
  }
  return 0;
}
