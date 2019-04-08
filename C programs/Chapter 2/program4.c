/*
According to the Gregorian calendar, it was Monday on the
date 01/01/1900. If any year is input through the keyboard
write a program to find out what is the day on 1 st January of
this year.
*/
#include<stdio.h>
void main(){
  int year;
  printf("Enter the year");
  scanf("%d", &year);
  if ((year %100)%7 == 0 ){
      printf("The First day is Monday");
  }
  else{
      printf("The First day is not Monday");
  }

}
