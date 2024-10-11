#include <stdio.h>
#include <stdbool.h>

int main (){
  char a = 'C';
  char b[] = "Bro";

  float c = 3.14159265;
  double d = 3.14159265358979323846;

  bool e = true;
  char f = 120;
  unsigned char g = 255;

  short h = 32767;
  unsigned short int i = 65535;

  int j = 262283818;
  unsigned int k = 4724782382;

  long long int l = 922333129129101020;
  unsigned long long int m = 182101201200129393;


  //printf("%c\n", a);
  //printf("%s\n", b);
  //printf("%f\n", c);
  //printf("%d\n", d);
  //printf("%d\n", e);
  //printf("%d\n", f);
  //printf("%d\n", g);
  printf("%d\n", h);
  printf("%d\n", i);
  printf("%d\n", j);
  printf("%u\n", k);
  printf("%lld\n", l);
  printf("%llu\n", m);

  return 0;

  }
