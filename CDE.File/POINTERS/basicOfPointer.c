
#include <stdio.h>
/*Pointer is a type of variable that store the Address of another variable.

Syntax of Pointer...
1.Data type.
2.*Variablse Name.
int *marks;


Pointer Symbol is tow......
a}*...(stric symble.) its define adjectly pointer Value.
b}&....(ampersant symble.) its found memory/Address.*/

int main() {
  int marks = 100;

  int *pointer = &marks; //..............{Whay we use & sign?}...

  printf("The value of marks:%d \n", marks);

  printf("The address of marks: %p\n", &marks);

  printf("The value of pointer: %d\n", *pointer);
  printf("The address stored in pointer: %p\n", &pointer);

  return 0;
};

/* #include <stdio.h>

int main() {
  int marks = 100;

  int *pointer;

  pointer = &marks; // Assign the address of marks to pointer

  printf("The value of marks: %d\n", marks);
  printf("The value pointer points to: %d\n", *pointer);
  printf("The address stored in pointer: %p\n", (void *)pointer);
  printf("The address of marks: %p\n", (void *)&marks);

  return 0;
}*/
