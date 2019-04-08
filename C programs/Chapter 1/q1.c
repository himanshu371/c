#include <stdio.h>

int main(){
int input;
int counter=0;
int n, temp;
scanf("%d" , &input);
 n=input;
 while (n>0) {
   temp=n%10;
   n=n/10;
   counter=counter*10+temp;
 }
printf("%d\n", counter );

}
