#include <stdio.h>

int main(void) {
  // (1) declaration of variable
  char character;
  int i, num;
  double temperature;

  // (2) assignment values to variables
  character = 'z';
  i = 42;
  num = i + 10;
  temperature = -3.4;

  // (3) displaying the value of a variable
  printf("%c\n", character);
  printf("%d\n", i);
  printf("%d\n", num);
  printf("%f\n", temperature);

  return 0;
}
