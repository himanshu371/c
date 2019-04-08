/*
If a five-digit number is input through the keyboard, write a
program to print a new number by adding one to each of its
digits. For example if the number that is input is 12391 then
the output should be displayed as 23402.
*/
#include <stdio.h>
#include <math.h>
void main(){
  int input, number =0 , remainder = 0, counter = 0;
  printf("Enter the number \n" );
  scanf("%d",&input);
  while (input !=0) {
      remainder = input%10 +1;
      int power = pow(10,counter);
      number = remainder * power + number;
      input = input/10;
      counter++;
  }
  printf("The output is : %d\n", number );
}
