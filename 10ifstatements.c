#include <stdio.h> 

int main() {
  
  int year;

  printf("You born in: ");
  scanf("%d", &year);

  if (year>=1945 && year<=1964) {
    printf("You are Baby Boomers generation");
  }else if (year>=1965 && year<=1980) {
    printf("You are X generation");
  }else if (year>=1981 && year<=1995) {
    printf("You are Millenial generation");
  }else if (year>=1996 && year<=2010) {
    printf("You are Z generation");
  }else if (year>=2011) {
    printf("You are Alpha generation");
  } else {
    printf("You are veteran");
  }

  return 0;
}
