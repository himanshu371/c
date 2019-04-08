/*
A five-digit number is entered through the keyboard. Write a
program to obtain the reversed number and to determine
whether the original and reversed numbers are equal or not.
*/
#include <stdio.h>
void main(){
  int num, number, rev = 0, rem;
  printf("Enter the number : \n");
  scanf("%d",&num);
  number = num;
  while(num !=0){
    rem = num%10;
    rev = rev *10 + rem;
    num = num/10;
  }
  if (rev == number ){
    printf("The number is palindrome");
  }
  else {
    printf("The number is not palindrome");
  }
}
