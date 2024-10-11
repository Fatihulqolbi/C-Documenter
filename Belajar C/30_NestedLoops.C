#include <stdio.h>

int main ( ){
  // Nested Loop = A loop inside of another loop

  int rows;
  int colums;
  char symbol;

  printf("\n Enter # of rows: ");
  scanf("%d", &rows);

  printf("\n Enter # of colums: ");
  scanf("%d", &colums);

  scanf("%c");

  printf("\n Enter a symbol to use: ");
  scanf("%c", &symbol);

  for(int i = 1; i <= rows; i++)
  {
    for (int j = 1; j <= colums; j++ )
  {
    printf("%c", symbol);
  }
    printf("\n");
  }
  return 0;

}