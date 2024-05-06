
#include <stdio.h>
int main() {

  FILE *initialFile;

  char name[50];
  int age;
  initialFile = fopen("naeem.txt", "w");

  if (initialFile == NULL) {

    printf("\n File is dosn't pen for thistime:");

  } else {

    printf("Your File is open\n");

    printf("Enter Your Name:?...");

    scanf("%s", name);
    printf("Enter Your Age:?");
    scanf("%d", &age);
    fprintf(initialFile, "name=%s,age=%d", name, age);

    printf("File is Writen Successfully Done.Chek your Save file:");
  }
  fclose(initialFile);

  return 0;
};