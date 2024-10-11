#include <stdio.h>
#include <string.h>

int main (){

  char man[][10] = {"Andi", "Budi", "Cilot"};

  // man[0] = "Ando";
  strcpy(man[0], "Ando");

for(int i=0; i < sizeof(man)/sizeof(man[0]); i++) 
{
  printf("%s\n", man[i]);
}

  return 0;
}