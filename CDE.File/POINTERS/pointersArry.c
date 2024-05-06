// Pointers And Arry...

#include <stdio.h>
int main() {

  int value[10] = {10, 20, 30, 40, 50, 60, 70, 80, 90, 110}, i = 0;

  int *pointer = value; //............{Whay not we use & sign?..}

  for (i = 0; i < 10; i++) {

    printf("%d\n", *pointer);
    pointer++;
  };

  return 0;
};

// chatGPT

/*#include <stdio.h>

int main() {
    int value[10] = {10, 20, 30, 40, 50, 60, 70, 80, 90, 110}, i = 0;

    int *pointer = value; // Just assign the array name, no need for &

    for (i = 0; i < 10; i++) {
        printf("%d\n", *pointer);
        pointer++;
    }

    return 0;
}
*/