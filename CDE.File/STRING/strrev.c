

#include <stdio.h>
#include <string.h>

int main() {
  char *str[50] = "ADEFHJKD";

  printf("The given string is =%s\n", str);
  strrev(str);

  printf("After reversing string is =%s", strrev(str));

  return 0;
}