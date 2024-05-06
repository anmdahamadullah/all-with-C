#include <stdio.h>
int main() {

  FILE *initialFile;

  char name[200];
  initialFile = fopen("Write.txt", "w");

  if (initialFile == NULL) {

    printf("\n File is dosn't pen for thistime:");

  } else {

    printf("Your File is open\n");

    printf("Enter Your Name::?...");
    scanf("%s", name);
    fputs(name, initialFile);
    fputs("\n", initialFile);
    printf("File is Writen Successfully Done.Chek your Save file:");
  }
  fclose(initialFile);

  return 0;
};