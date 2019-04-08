/*
A cashier has currency notes of denominations 10, 50 and
100. If the amount to be withdrawn is input through the
keyboard in hundreds, find the total number of currency notes
of each denomination the cashier will have to give to the
withdrawer.
*/
#include <stdio.h>
void main(){
  int num, hundreds,fifty,tens,five,ones;
    printf("Enter the amount \n");
    scanf("%d",&num);
    hundreds = num / 100;
    fifty = (num - hundreds*100)/50;
    tens = (num - (fifty*50+hundreds*100))/10;
    five = (num - (tens*10+fifty*50+hundreds*100))/5;
    ones = (num - (five*5+tens*10+fifty*50+hundreds*100));
    printf("The denominations in hundreds: %d \nThe denomination of fifty : %d \nThe denomination of 10 : %d \nThe denomination of 5 : %d \nThe denomination of 1 : %d", hundreds,fifty,tens,five,ones);

}
