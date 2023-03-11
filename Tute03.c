/*Exercise 3 - Repetition

Write a C program to calculate the sum of the numbers from 1 to n.
Where n is a keyboard input.

e.g.

n -> 100
sum = 1+2+3+....+ 99+100 = 5050

n -> 1-
sum = 1+2+3+...+10 = 55 */

#include <stdio.h>
int main() {
  //counter variable declaration
  int i;
  //variable declaration
  int num ,total;
  
  //get input by user
  printf( "Enter number(n) :" );
  scanf( "%d", &num );
  
  //start for loop for do calculation
  for( i = 0; i <= num ; ++i )
  {
    total = total + i ;
  }
  
  //print sum of the numbers from 1 to n
  printf("Sum of the numbers from 1 to n :%d", total );
  
  return 0;
}

