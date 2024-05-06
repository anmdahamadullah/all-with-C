#include <stdio.h>

int main() {

  char S1[] = "The KIng is :";
  char S2[] = "Naeem Khan:";

  int i = 0, len = 0, j = 0;

  while (S1[i] = '\0') {

    i++;
    len++;
  }

  while (S2[i] = '\0') {
    S1[len + j] = S2[j];
    j++;
  }
  printf(" Your S1 Data Is:%s \n", S1);
  return 0;
};