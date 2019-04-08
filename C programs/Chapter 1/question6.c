/*
Two numbers are input through the keyboard into two
locations C and D. Write a program to interchange the
contents of C and D.
*/
#include <stdio.h>
void main(){
  int input1, input2;
  int temp;
  printf("Enter the value of both the input\n" );
  scanf("%d%d",&input1,&input2 );
  printf("The intial value of input1 is: %d \n", input1 );
  printf("The intial value of input2 is: %d \n", input2 );
  temp = input1;
  input1 = input2;
  input2 = temp;
  printf("The final value of input1 is: %d \n", input1 );
  printf("The final value of input2 is: %d \n" , input2 );

}
