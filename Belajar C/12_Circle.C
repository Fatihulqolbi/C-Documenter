#include <stdio.h>

int main ( ){

  const double PI = 3.14159;
  double radius;
  double keliling;
  double luas;

  printf ("\nEnter Radius of a Circle");
  scanf ("%lf", &radius);
  keliling = 2 * PI * radius;
  luas = PI * radius * radius;
  
  printf("\nJadi keliling Lingkaran adalah: %lf", keliling);
  printf("\nJadi luas lingkaran adalah: %lf", luas);

  return 0;
}