#include <stdio.h>
#include <stdbool.h>

int main (){

  // Logical Operators = && (AND) checks if two conditions are true

  float temp = 25;
  bool sunny = true;
  if (temp >=0 && temp <= 30 && sunny == true){
    printf("The weather is good!");
  }

  else {
  printf("The weather is bad");

  }
  return 0;
}