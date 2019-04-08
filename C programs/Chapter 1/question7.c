/*
If a five-digit number is input through the keyboard, write a
program to reverse the number.
*/

#include <stdio.h>
void main(){
  int input,remainder,reverse =0;

  printf("Enter the input \n");
  scanf("%d",&input);
  while (input !=0){
      remainder = input%10;
      reverse = reverse*10+remainder;
      input = input/10;
  }
  printf("the reversed number is : %d\n", reverse );
}
