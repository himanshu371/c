/*
Any year is input through the keyboard. Write a program to
determine whether the year is a leap year or not.
*/
#include <stdio.h>
void main(){
  int year;
  printf("Enter the year ");
  scanf("%d", &year);
  if(year % 4 ==0){
    printf("This is the leap Year");
  }
  else{
    printf("This is not a leap year");
  }
}
