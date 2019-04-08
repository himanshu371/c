/*
Any integer is input through the keyboard. Write a program to
find out whether it is an odd number or even number.
*/
#include<stdio.h>
void main(){
  int num1;
  printf("Enter the Number \n");
  scanf("%d",&num1);
  if(num1%2 == 0){
    printf("number is even ");
  }
  else{
    printf("Number is Odd");
  }
}
