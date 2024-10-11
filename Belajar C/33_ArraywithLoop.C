#include <stdio.h>

int main (){

  double price[] = {5.0, 10.0, 15.0, 20.0, 25.0};

printf ("%d bytes\n", sizeof(price));

  for (int i = 0; i < sizeof(price)/sizeof(price[0]); i++)
  {
  printf("\n$%.1lf", price[i]);
  }

  return 0; 
  
}