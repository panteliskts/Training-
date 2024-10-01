#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// Modify the code below
int getRandomNumber(int maxNumber) {
int randomNumber= rand() % maxNumber + 1;
return randomNumber;
}

int main(void) {
  srand(time(NULL));
  // Modify the code below
  int randomNumber = getRandomNumber(100);//the 100 inside the parentheses is the  maxNumber variable declared inside the getRandomNumber() function and it works as the upper limit for the generator.
  printf("My random number is: %d", randomNumber);
}
