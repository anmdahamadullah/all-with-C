

// ARRY to Matrix......

#include <stdio.h>
int main() {

  // UserDefine..Matrix.....
  int userDefine[2][3],
      r = 0, c = 0, add,
      userDefine2[2][2]; /* Metrix  Goon Korle.....1st metrix er Shari shonkhar
                          shathe 2nd Metrix er colum shonkha shoman lagbe...*/
  printf("\nEnter Eliments for userDefine Vlue:\n");

  // Scaning values....

  for (r = 0; r < 2; r++) {
    for (c = 0; c < 3; c++) {
      printf("Row[%d],Colum[%d]:", r, c);
      scanf("%d", &userDefine[r][c]);
    }

    printf("\n");
  }

  // Printing Values.....

  printf("userDefine Row and Colum =:\n");
  for (r = 0; r < 2; r++) {
    printf("\t");
    for (c = 0; c < 3; c++) {

      printf(" %d", userDefine[r][c]);
    }
    printf("\n");
  }

  // UserDefine2...Metrix.....
  printf("\nEnter Eliments for userDefine2 Vlue:\n");

  // Scaning values....

  for (r = 0; r < 2; r++) {
    for (c = 0; c < 2; c++) { // Scaning ...
      printf("Row[%d],Colum[%d]:", r, c);
      scanf("%d", &userDefine2[r][c]);
    }

    printf("\n");
  }

  // Printing Values.....

  printf("userDefine2 Row and Colum =:\n");
  for (r = 0; r < 2; r++) {
    printf("\t");
    for (c = 0; c < 2; c++) {

      printf(" %d", userDefine2[r][c]);
    }
    printf("\n");
  }

  return 0;
};