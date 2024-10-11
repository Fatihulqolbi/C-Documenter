#include <stdio.h>

int main(){

  char op;
  double num1;
  double num2;
  double result;

  printf("\nEnter an operator (+ - * /):");
  scanf ("%c", &op);

  printf("\nEnter Number 1 : ");
  scanf("%lf", &num1);

  printf("\nEnter Number 2 : ");
  scanf("%lf", &num2);

  switch (op){
    case '+' :
    result = num1 + num2;
    printf ("\nresult: %.0lf", result);
    break;

    case '-' :
    result = num1 - num2;
    printf ("\nresult: %.0lf", result); 
    break;

    case '*' :
    result = num1 * num2;
    printf ("\nresult: %.0lf", result); 
    break;

    case '/' :
    result = num1 / num2;
    printf ("\nresult: %.0lf", result);
    break;
    
    default:
    printf("%c is not valid", op);
  }



  return 0;
}