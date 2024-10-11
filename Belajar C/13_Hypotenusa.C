#include <stdio.h>
#include <math.h>

int main (){
  double A;
  double B;
  double C;

  printf("\nEnter price of A");
  scanf ("%lf", &A);

  printf ("Enter price of B");
  scanf ("%lf", &B);

  C = sqrt(A*A + B*B);

  printf ("\nJadi nilai C adalah : %lf", C);

  return 0;


}