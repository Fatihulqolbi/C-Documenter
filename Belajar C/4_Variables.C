#include <stdio.h>

int main(){
  // This is a comment 
  /*INI 
  HANYA
  KOMENTAR 
  BIASA
  */
  int x; //declaration
  x = 123; //initialization
  int y = 321; //declaration + Initialization

  int age = 19;
  float gpa = 3.95; 
  char grade = 'A';
  char name[] = "Muhammad Fatihul Qolbi";

  printf("Hello %s\n",name);
  printf("You are %d years old\n",age);
  printf("Your average grade %c\n",grade);
  printf("Your GPA is %f\n",gpa);

  return 0;
}