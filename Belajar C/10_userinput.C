#include <stdio.h>

int main ( ){
  char name[25]; //bytes
  int Age;

  printf("What's your name ?");
  //scanf ("%s", &name);
  fgets(name, 50, stdin);
  printf("\nHow Old Are You?");
  scanf("%d", &Age);

  printf("\nHello %sHow are you?", name);
  printf("\nYou are %d years old", Age);

  return 0;
}