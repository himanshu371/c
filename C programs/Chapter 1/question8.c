/*
If a five-digit number is input through the keyboard, write a
program to calculate the sum of its digits.
*/
#include <stdio.h>
void main(){
  int input, sum = 0 ;
  printf("Enter the number \n");
  scanf("%d",&input);
  while(input !=0){
    sum=sum+input %10;
    input= input/10;
  }
  printf("the sum is : %d\n", sum );
}
