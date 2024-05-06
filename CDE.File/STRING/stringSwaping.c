

#include <stdio.h>
#include <string.h>

int main()

// If I want to swap then I have to use copy string......
{

  char S1[40] = "Bangladesh";
  char S2[40] = "China";
  char S3[30];
  printf("\nBefor S1 Data Is:%s \n", S1);
  printf("Befor S2 Data Is:%s \n", S2);

  strcpy(S3, S1);
  strcpy(S1, S2);
  strcpy(S2, S3);

  printf("\nAfter S1 Data Is:%s \n", S1);
  printf("After S2 Data Is:%s \n", S2);

  return 0;
}
