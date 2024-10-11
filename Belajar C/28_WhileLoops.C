#include <stdio.h>
#include <string.h>

int main (){

  // While lopp = repeats a section of code possibly unlimited times
  // WHILE some condition remains true 
  // a While lopp might not execute at all
  char name[25];

  printf("\nWhat's your name ?");
  fgets(name, 25, stdin);
  name[strlen(name)-1] = '\0';

  while(strlen(name) == 0);{
    printf("\n You did not enter your name");
    printf("\nWhat's your name ?: ");
    fgets(name, 25, stdin);
    name[strlen(name) -1] = '\0';
  }
  
  printf("Hello %s", name);
  return 0;
}