#include <stdio.h>
int main() {
  FILE *readFile;
  char chData;

  readFile = fopen("naeem.txt", "r");

  if (readFile == NULL) {

    printf("Your file dos't opened\n");
  } else {

    printf("Your file is open Successfully see...\n\n");

    while (!feof(readFile)) {

      chData = fgetc(readFile);
      printf("%c", chData);
    }

    fclose(readFile);
  }

  return 0;
};