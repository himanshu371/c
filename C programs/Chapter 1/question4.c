/*
Temperature of a city in Fahrenheit degrees is input through
the keyboard. Write a program to convert this temperature
into Centigrade degrees.
*/
# include <stdio.h>
void main(){
  float temperature, Centigrade;
  printf("Enter the temperature in Fahrenheit\n" );
  scanf("%f", &temperature );
  Centigrade = ((temperature - 32) * 5)/9;
  printf("the temperature is: %.2f\n", Centigrade );

}
