#include <stdio.h>
#include <string.h>
int main() {

  //  If i gave Same String Value,Then i get Output is Same.
  //  Add Int value.

  char A1[20] = "Bangladesh";
  char A2[20] = "Bangladesh";

  int A3 = strcmp(A1, A2);
  if (A3 == 0) {
    printf("A1 and A2 is Equal:\n");
  } else {

    printf("A1 and A2 is Not Equal;\n");
  }

  return 0;
}