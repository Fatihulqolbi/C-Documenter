#include <stdio.h>

void hello (char name [], int );

int main () {

  // Function prototype

  // WHAT IS IT?
  // Function declaration, w/o body. before main ()
  // Ensures that calls to a function are made with the correct arguments

  //IMPORTANT NOTES 
  // Many C compilers do not check for parameter matching
  // Missing argument will result in unexpected behavior
  // A function prototype causes the compiler to flag an error if arguments are missing

  // ADVANTAGES
  // 1. Easier to navigate a program w/ main() at the top
  // 2. Helps with debugging
  // 3. Commonly used in header files

  char name [] = "Senku";
  int age = 19;
  hello(name, age);

  return 0;
}
void hello (char name [], int age){

  printf("\nHello %s", name);
  printf("\nYou are %d years old", age);

}