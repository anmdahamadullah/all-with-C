// String means Charecters Array...So must be have Charectars.

#include <stdio.h>
#include <string.h>
int main() {
  char a1[20] = "My name is";
  char a2[20] = "Ahamad Ullah";

  printf("\nBefore Your a1 Data:%s \n ", a1);
  printf("\n Before Your a2 Data:%s \n ", a2);

  strcpy(a1, a2);
  printf("\n After Your a1 Data:%s \n ", a1);
  printf("\nAfter Your a2 Data:%s \n ", a2);

  return 0;
}