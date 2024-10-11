#include <stdio.h>

int findMax(int x, int y)
{
  return (x > y) ? x : y;
}



int main (){

  // Ternary Operator : Shorcut to if/else when assigning / returning a value
  // (condition) ? value if true : value if false
  int max = findMax (5, 6);
  printf("%d", max);


  return 0;
}
