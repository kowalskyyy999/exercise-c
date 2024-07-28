#include<stdio.h> 
#include<string.h> 

int main() {

  char names[25];   // length of characters
  int age;
  
  printf("What is your name? ");
  // scanf("%s", &names);   // hanya bisa handle 1 kata saja
  fgets(names, 25, stdin);  // untuk meng-handle input lebih dari 1 kata
  names[strlen(names)-1] = '\0'; // menghilangkan char '\n' pada terakhir kata inputan
  printf("How old are you? ");
  scanf("%d", &age);

  printf("%s %d years old", names, age);
  return 0;
}
