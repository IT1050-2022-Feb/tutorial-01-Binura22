/* Exercise 1 - Calculations

   Write a C program to input marks of two subjects. Calculate and print the average of the two marks. */

#include <stdio.h>

int main() {
  // variable declaration
  float std1,std2; 
  float sum,average;
   
   //get two marks by user
   printf( "Input student 1 marks:" );
   scanf( "%f", &std1 );
   
   printf( "Input student 2 marks:" );
   scanf( "%f", &std2);
   
   //add two marks
   sum = std1 + std2;
   
   //find average
   average = sum / 2;
   
   //display average
   printf( "Average of the two marks is:%.2f", average );
   
  return 0;
}

