#include <stdio.h> 

int main() {

  int year;

  printf("You born in: ");
  scanf("%d", &year);
  
  switch(year){
    case 1946 ... 1964:
      printf("You are Baby Boomers generation");
      break;
    case 1965 ... 1980:
      printf("You are X generation");
      break;
    case 1981 ... 1995:
      printf("You are Millenial generation");
      break;
    case 1996 ... 2010:
      printf("You are Z generation");
      break;
    default:
      printf("Maybe you in Alpha generation or Veteran");
      break;
  }

  return 0;
}
