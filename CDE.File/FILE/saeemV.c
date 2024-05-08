#include <stdio.h>
#include <string.h>

int main() {
  char input[100]; // Assuming input will not exceed 100 characters

  printf("Enter a string: ");
  fgets(input, sizeof(input), stdin); // Read input as a string

  // Remove newline character if present
  input[strcspn(input, "\n")] = 0;

  // Loop through the string
  for (int i = 0; i < strlen(input); i++) {
    if (input[i] >= 'A' && input[i] <= 'Z') {
      printf("%c is an uppercase letter.\n", input[i]);
    } else if (input[i] >= 'a' && input[i] <= 'z') {
      printf("%c is a lowercase letter.\n", input[i]);
    } else if (input[i] >= '0' && input[i] <= '9') {
      printf("%c is a digit.\n", input[i]);
    } else {
      printf("%c is a special character.\n", input[i]);
    }
  }

  return 0;
}