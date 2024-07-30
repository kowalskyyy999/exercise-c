#include <stdio.h> 

int main() {

  // Character Counting
  printf("Character Counting !\n");

  // long nc = 0;

  // 1st Version
  // while (getchar() != EOF) {
    // ++nc;
    // printf("%ld\n", nc);
  // }
  
  // 2nd Version 
  double nc;

  for (nc=0; getchar() != EOF;nc++){
    printf("%.0f\n", nc);
    // nc = 0;
  }
  
  return 0;
}
