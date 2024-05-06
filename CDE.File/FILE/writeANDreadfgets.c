#include <stdio.h>
int main() {

  FILE *readFile;
  char ch[200];
  readFile = fopen("saeem.txt", "w");
  if (readFile == NULL) {
    printf("Your File is not Opend");
  } else {
    printf("Your File is Open\n");
    printf("Write Your All Data:");
    scanf("%s", ch);
    fputs(ch, readFile);
    printf("Writen Data is Successfully Done.\n");

    fclose(readFile);
  };
  readFile = fopen("saeem.txt", "r");
  if (readFile == NULL) {
    printf("\nYour File is not Opend");
  } else {
    printf("\n\nYour Read Data is Open see...\n");
    while (!feof(readFile)) {
      fgets(ch, 200, readFile);
      printf("%s", ch);
    };
  };
  fclose(readFile);
  return 0;
};