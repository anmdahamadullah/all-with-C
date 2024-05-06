
// WRITE ON fputc.....fputc(variable Name,File Name)

#include <stdio.h>

#include <string.h>

int main() {

  FILE *newFile;
  char name[30] = "An Md Ahamad Ulllah";
  int length = strlen(name);
  int i = 0;
  newFile = fopen("DO.txt", "w");
  if (newFile == NULL) {

    printf("File dosn't Exist:\n");

  } else {

    printf("\nFile is Opened:\n");
  }

  for (i = 0; i < length; i++) {

    fputc(name[i], newFile);

    printf("File is writen Successfully:");
    fclose(newFile);
  }
  return 0;
};