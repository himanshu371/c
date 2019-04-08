/*
If a four-digit number is input through the keyboard, write a
program to obtain the sum of the first and last digit of this
number.
*/
#include <stdio.h>
void main(){
  int input, sum = 0;
  printf("Enter a 4 digit number \n");
  scanf("%d",&input);
  while( input != 0){
    sum = sum + input%10;
    input=input/1000;
  }
  printf("The sum of 1st and the last digit is: %d", sum);
}
