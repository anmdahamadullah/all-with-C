

// We can compare 2-D dimensions with a HSC MATRIX.

/*It works with ROW and COLUMES.....
       COLUM---->>>
     > > > > > > > >
    ^
    ^
    ^
    ^  .
    ^  .
  ROW  ^


2-D Dimension Declearation....
Data_Type  Arry_Name [Row Size]  [Colum Size];
 .             .          .            .
 .             .          .            .
 .             .          .            .
int          marks      [3]          [4];

 So total Variablse is: Row * Colum....3*4 = 12.

Example..
*/

#include <stdio.h>
int main() {
  int marks[2][3] =
      {
          {2, 3, 4},
          {5, 6, 7},
      },
      i = 0, j = 0;

  for (i = 0; i < 2; i++) {

    for (j = 0; j < 3; j++) {
      printf("%d", marks[i][j]);
    }

    printf("\n");
  }
  return 0;
};