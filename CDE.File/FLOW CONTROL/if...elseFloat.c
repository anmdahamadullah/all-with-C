// if..else---> input/output.

#include <stdio.h>
int main() {
  float naeemMarks;
  printf("Enter my  data");
  scanf("%f", &naeemMarks);
  if (naeemMarks == 80.60) {
    `Ah printf("my data is correct:%f \n", naeemMarks);
  } else if (naeemMarks == 70.60) {
    printf("my data is not correct:%f \n", naeemMarks);
  } else if (naeemMarks == 50.60) {
    printf("my data is correct:%f \n", naeemMarks);
  } else {
    printf(" my data is not correct");
  }
  return 0;
};