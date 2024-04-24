// int,float,char-->input/output.
#include <stdio.h>

int main() {
  int naeem;
  int naeemKing;
  printf("Enter naeemGot:  ");
  scanf("%d", &naeemKing);
  printf("Total Number:%d \n", naeemKing);

  char unknownCharecter[3230];
  char unknown[3230];
  printf("Enter your charecter:  ");
  scanf("%s", unknown);
  printf(" charecter Name:%s \n", unknown);

  float testNumber;
  float test;
  printf("Enter your float number:  ");
  scanf("%f", &test);
  printf("total float Got:%f \n", test);

  return 0;
};
