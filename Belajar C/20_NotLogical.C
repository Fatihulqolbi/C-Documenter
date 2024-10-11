#include <stdio.h>
#include <stdbool.h>

int main (){

  // Logical Operators = ! (NOT) reserves the state of a condition

  bool sunny = true;
  if (!sunny){
    printf ("\nIt's cloudy Outside");
  }
  else {
    printf("\nIt's sunny outside");
  }

  return 0;
}