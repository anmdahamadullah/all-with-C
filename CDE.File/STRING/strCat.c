#include <stdio.h>
#include <string.h>
int main() {

  char Str1[50] = "Saeem Khan:";

  char Str2[50] = "Is my Brother:";

  printf("\n Befor your Str1 Data:%s\n\n", Str1);
  printf("\n Befor your Str2 Data:%s\n\n ", Str2);

  strcat(Str1, Str2);
  printf("\n After your Str1 Data:%s \n \n ", Str1);
  printf("\n After your Str2 Data is Same:%s \n \n ", Str2);
  return 0;
}