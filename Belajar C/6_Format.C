#include <stdio.h>

int main ( ){

  // format specifier % = derines and formats a type of data to be displayed

  // %c = character
  // %s = String (Array of Characters)
  // %f = float
  // %if = double
  // %d = Integer

  // %.1 = Decimal Precision
  // %1 = Minimum field width
  // %- = Left align

float item1 = 5.44;
float item2 = 5.66;
float item3 = 4.33;

printf("item1: $%6.2f\n", item1);
printf("item2: $%6.2f\n", item2);
printf ("item3: $%6.2f\n", item3);






  return 0;
}