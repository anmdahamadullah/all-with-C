#include <stdio.h>
int main() {

  int marks[100], userChoose, i = 0, max;
  printf("How many numbers:?");
  scanf("%d", &userChoose); // User Scan.....
  printf("Please type your number:");
  for (i = 0; i < userChoose; i++) {

    scanf("%d", &marks[i]);
  }

  max = marks[0];
  for (i = 1; i < userChoose; i++) { // Mximum value....

    if (max < marks[i])
      max = marks[i]; // If i want to Minimum Vlue ....Same Prossece
  }

  printf("The maximum Value Is:%d \n ", max);

  return 0;
};