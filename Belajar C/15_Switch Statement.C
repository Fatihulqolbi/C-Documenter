#include <stdio.h>

int main (){
  // Switch = A more efficient alternative tp using many "Else if" statement 
  // allow a value to be tested for equality against many cases

char grade;

printf ("\nEnter your grade:");
scanf ("%c", &grade);

switch(grade){
  case 'A' :
  printf("GENIUS NJG\n");break;
  case 'B' :
  printf("LUMAYAN LAHH\n");break;
  case 'C' :
  printf("SING PENTING NDK NGULANG\n");break;
  case 'D' :
  printf("D FOR DOCTOR\n");break;
  case 'E' :
  printf("ANJAYY E FOR ENGINEER\n");break;
  default :
  printf("LEBOKNO NILAI SING BENER LAH!!");
}






  return 0;
}