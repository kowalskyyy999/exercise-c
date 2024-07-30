#include <stdio.h> 
#include <string.h>

#define DEST_SIZE 40

int main() {
  // check length of variables
  char name[] = "Rio";
  printf("%s is %ld elements long\n", name, sizeof(name));

  // Modifying Strings
  // #include <strings.h>
  // strlen(s1): returns the length of a string 
  // strcpy(s1, s2): copies string s2 to s1
  // strrev(s1): reverses the given string 
  // strcmp(s1, s2): returns 0 if s1 and s2 contain the same string 
  // strcat(s1, s2): concatenates two strings 


  // String concatenation with C 
  char str1[50] = "Hello";
  char str2[50] = "World!";
  char result[100];

  strcpy(result, str1);   // Copy str1 into result 
  strcat(result, " ");    // Add a space to result 
  strcat(result, str2);   // Concatenate str2 to result 

  printf("%s\n", result);   // Print the concatenated string
  
  // Another method
  char destination[] = "Hello ";
  char source[] = "World!";
  strcat(destination, source);
  printf("Concatenated string: %s\n", destination);

  // Append with strncat function 
  char src[] = "World Here";
  char dest[DEST_SIZE] = "Hello";

  strncat(dest, src, 5);
  printf("Append with 'strncat' function: %s\n", dest);

  char src2[] = "World Here";
  char dest2[DEST_SIZE] = "Hello";

  strncat(dest2, src2, 3);
  printf("Append with 'strncat' function: %s\n", dest2);


  char s1[50] = "Hello";
  char s2[50] = "World!";
  char result2[100];

  sprintf(result2, "%s %s", s1, s2); 
  printf("Concat string with 'sprintf' function: %s\n", result2);
  return 0;
}
