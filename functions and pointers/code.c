#include <stdio.h>

// Write your code below
void incrementAge(int *agePointer){
  *agePointer += 1;
}

int main(void) {
  int age;
  printf("what is your age: ");
  scanf("%d", &age);
  incrementAge(&age);
  printf("You will be %d years old next year\n", age);
}
