/* সুইচলেখা হবে প্রথম বন্ধনী এবং দ্বিতীয় বন্ধনী থাকবে..switch(variable name){}
এটি একটি ভ্যালুকে অন্যান্য ভ্যালুগুলির সাথে তুলনা করে...*/

#include <stdio.h>

int main() {
  int month;

  printf("Enter the month number: ");
  scanf("%d", &month);

  switch (month) { // switch(variable name){}....
  case 1:
    printf("January\n");
    break;
  case 2:
    printf("February\n");
    break;
  case 3:
    printf("March\n");
    break;
  default:
    printf("Invalid month\n");
  }

  return 0;
}
