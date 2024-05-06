// READ ON fgets(variable,variable Size,File Name).....

#include <stdio.h>
int main() {

  FILE *readFile;

  char ch[200];

  readFile = fopen("naeem.txt", "r");
  if (readFile == NULL) {
    printf("\nYour File is not Opend");
  } else {
    printf("\n\nYour Read Data is Open see...\n");
    while (!feof(readFile)) {
      fgets(ch, 200, readFile); // Need 1st Variable,Size,File Name.
      printf("%s", ch);
    };
  };
  fclose(readFile);
  return 0;
};