/*
Rock,papper,scissor ...

Rock vs papper  >>>>>  Winner is.....Papper.
Rock vs Scissor >>>>>  Winner is......Rock.
Scissor vs Rock >>>>>  Winner is.....Rock.
Scissor vs Papper >>>> Winner is.....Scissor.
*/

#include <stdio.h>
#include <stdlib.h> //its Standard library Fuction.For use Random selection for computer.
#include <time.h> //its Standard library Fuction.For use Random selection for computer.

int main() {

  srand(time(NULL)); // For use.. Random selection for computer.

  int you;
  int computer = (rand() % 3) + 1; // For use.. Random selection for computer.

  printf("\n1 for Rock,2 for Siccor,3 for Papper\n");

  printf("Enter choose your Selection:");
  scanf("%d", &you);

  if (you >= 1 && you < 4) {
    printf("Your selection:you=[%d],Computer Selection:compute=[%d]\n",
           you, // Show one by one Selection.....
           computer);
    if (you == 1 && computer == 1) {
      printf("Its time Draw");
    } else if (you == 1 && computer == 2) {
      printf("You lose!! Computeris Wine\n");
    } else if (you == 1 && computer == 3) {
      printf("You win\n");
    } else if (you == 2 && computer == 2) {
      printf("Its time Draw\n");
    } else if (you == 2 && computer == 3) {
      printf("You Win\n");
    } else if (you == 3 && computer == 3) {
      printf("Its time draw\n");
    } else if (you == 3 && computer == 1) {
      printf("You Wine\n");
    } else if (you == 2 && computer == 1) {
      printf("You Wine\n");
    } else if (you == 3 && computer == 2) {
      printf("You lose.Computer is Wine\n");
    }
  } else {
    printf("\nYour selection is Worng!!!!");
  }

  return 0;
}
