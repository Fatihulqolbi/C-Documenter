#include <stdio.h>

int main (){

  // 2D Array = an array, where each element is an entire array 
  // useful if you need a matrix, grid, or table of data.

/*
  int numbers[2][3] = 
  {
    {1, 2, 3},
    {4, 5, 6}
    };
*/
int numbers[3][3]; 
int rows = sizeof (numbers)/sizeof(numbers[0]);
int colums = sizeof (numbers[0])/sizeof(numbers[0][0]);

printf("rows: %d\n", rows);
printf("colums: %d\n", colums);

numbers[0][0] = 1;
numbers[0][1] = 2;
numbers[0][2] = 3;
numbers[1][0] = 4;
numbers[1][1] = 5;
numbers[1][2] = 6;
numbers[2][0] = 7;
numbers[2][1] = 8;
numbers[2][2] = 9;

for(int i= 0; i < rows; i++)
{
  for(int a = 0; a < colums; a++)
  {
    printf("%d ", numbers [i][a]);
  }
  printf("\n");
}

  return 0;


}