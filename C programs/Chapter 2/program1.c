/*
If cost price and selling price of an item is input through the
keyboard, write a program to determine whether the seller has
made profit or incurred loss. Also determine how much profit
he made or loss he incurred.
*/
#include <stdio.h>
void main() {
  int cp,sp;
  printf("Enter the cost price and selling price\n");
  scanf("%d%d",&cp,&sp);
  if (cp<sp) {
    printf("profit is there ");
  }
  else{
    printf("No profit\n");
  }
}
