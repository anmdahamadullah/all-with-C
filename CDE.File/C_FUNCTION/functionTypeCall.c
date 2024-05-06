#include <stdio.h>

int doubleType(double memory1, double memory2) { return memory1 / memory2; };

int floatType(float memory3, float memory4) { return memory3 * memory4; };

int intigerType(int memory5, int memory6) { return memory5 + memory6; };
void charecterType(char memory7, char memory8){};

int main() {
  int num1, num2, num3, num4;
  printf("Input Five Digit:");
  scanf("%d %d %d %d", &num1, &num2, &num3, &num4);

  double Type1 = doubleType(num1, num2);

  float Type2 = floatType(num2, num4);

  int Type3 = intigerType(num3, num1);

  printf("\nType1 Data Is:%lf \n Type2 Data Is:%f\n Type3 Data Is:%d \n", Type1,
         Type2, Type3);

  return 0;
};
