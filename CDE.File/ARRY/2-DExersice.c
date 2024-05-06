

/*Take a tow dimensional Arry of integer dats type of size [3*3].Take the values
from the user using scanf().Now print the average of all the values.*/
#include <stdio.h>
int main() {

  int marks[3][3], i = 0, j = 0, sum = 0;

  for (i = 0; i < 3; i++) { // Scan....values...

    for (j = 0; j < 3; j++) {
      printf("Row[%d],Colum[%d]", i, j);
      scanf("%d", &marks[i][j]);
    }
    printf("\n");
  }

  for (i = 0; i < 3; i++) {
    for (j = 0; j < 3; j++) { // Printing Vlues....

      printf("%d", marks[i][j]);
      sum = sum + marks[i][j];
    }
    printf("\n");
  }

  float average = sum / 9.0; //[3*3]=9 So...Output Float...
  printf("\nThe Add value Is:%d", sum);
  printf("\nAverage value is:%f", average);

  return 0;
};