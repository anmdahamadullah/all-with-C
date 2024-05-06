

/* A file is a collection of data stored on a computer disk for future access,
 typically used to read, write, and edit data.

 FileSyntax...
 1.Data type Is FILE and than...
 2.*file Name...                   a)fopen,name,mode
ex..FILE *startWriting;


If we want to  WRITE FILE so we used to FILE standard FUNCTION.........
1.fputc()>>>>>>fputc(Variable Name,*File Name);
2.fputs()>>>>>>fputs(Variable Name,*File Name);
3.fputw()
4.fprintf()>>>>fprintf(File Name,Format Spacifire %d %s, Spasifire Name);
5.fwrite()


If we want to  READ  FILE so we used to FILE standard FUNCTION.........
1.fgetc()>>>>Variable = fgetc(File Name);
2.fgets()>>>>fgets(Variable Name,Size,File Name);
3.fgetw()
4.fscanf()>>>>fscanf(File Name,Format Spacifire %d %s,&Spacifire Name);
5.fread()*/

#include <stdio.h>
int main() {
  FILE *initialFile;
  initialFile = fopen("test.txt", "w");
  if (initialFile == NULL) {

    printf("\tFile dosn't open\n");

  } else {

    printf("\tFile is opened\n");

    fputs("I love C_Programing", initialFile);

    fclose(initialFile);
  }

  return 0;
};
