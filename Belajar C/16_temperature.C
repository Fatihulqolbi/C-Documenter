#include <stdio.h>
#include <ctype.h>

int main (){

  char unit;
  float temp;

  printf("\nIs the temperature in (F) or (C)?:");
  scanf ("%c", &unit);

  unit = toupper(unit);

  if(unit == 'C'){
    printf("Enter the temp in Celcius : ");
    scanf ("%f", &temp);
    temp = (temp * 9 / 5) + 32;
    printf ("\n The temp in Farrenheit is: %.0f", temp );
  }

  else if (unit == 'F' ){
    printf("The temp is currently in F : ");
    scanf ("%f", &temp);
    temp = ((temp -32 ) *5 ) /9 ;
    printf ("\nThe temp in Celcius is: %.0f", temp );
  }
  else {
    printf("\n %c Not Valid unit", unit);
  }

  return 0;


}