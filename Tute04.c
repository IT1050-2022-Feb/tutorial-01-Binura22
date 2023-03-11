/*Exercise 4 - Functions

Implement the three functions minimum(), maximum() and multiply() below the main() function.

Do not change the code given in the main() function when you are implementing your solution.*/

#include <stdio.h>

int minimum( int no1, int no2 );
int maximum( int no1, int no2 );
int multiply( int no1, int no2 );

//main function
int main() {
   //variable declaration
   int no1, no2;
   
   //get input from user
   printf("Enter a value for no 1 : ");
   scanf("%d", &no1);
   
   printf("Enter a value for no 2 : ");
   scanf("%d", &no2);
   
   //function call
   printf("%d ", minimum(no1, no2));
   printf("%d ", maximum(no1, no2));
   printf("%d ", multiply(no1, no2));
   
   return 0;
}

//create function to find minimum number
int minimum( int no1, int no2 )
   {
   int min;
      if(no1< no2)
      {
         min = no1;
      }
      else
      {
         min = no2;
      }
   return min; //return min value to main function
   }

//create function to find maximum number
int maximum( int no1, int no2 )
{
   int max;
      if(no1< no2)
      {
         max = no2;
      }
      else
      {
         max = no1;
      }
   return max;    //return max value to main function
}

//create function to find multiplication of two numbers
int  multiply( int no1, int no2 )
   {
      int mul;
   
      mul = no1 * no2;
   
      return mul;    //return mul value to main function
   }



