#include <stdio.h>

int main (){
  // Continue = Skips rest of code & Forces the next iteration of the loop
  // Break = Exits a loop/ Switch

  

for (int i = 1; i<= 20; i++ )
{
  if (i == 13)
  {
    break;
  }
  printf("%d\n", i);
}
  
  return 0;
}

