#include <stdio.h>

int main() {
  FILE *fp;
  char buffer[200];

  fp = fopen("Do.txt", "w");

  if (fp == NULL) {
    printf("Error opening the file!\n");

  } else {

    printf("Write Your Data:");
    scanf("%c", buffer);
    fputs(buffer, fp);

    fclose(fp);
  };

  fp = fopen("Do.txt", "r");
  if (fp == NULL) {
    printf("Error opening the file for reading\n");
  } else {
    printf("\nRead Your Data...\n");
    fgets(buffer, 200, fp);
    while (!feof(fp)) {
    };
  }
  printf("%s", buffer);
  fclose(fp);
  return 0;
};
