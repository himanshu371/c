/*
The length & breadth of a rectangle and radius of a circle are
input through the keyboard. Write a program to calculate the
area & perimeter of the rectangle, and the area &
circumference of the circle.
*/
#include <stdio.h>
void main(){
  int length,breadth,radius;
  float area,area2, perimeter,circumference;
  printf("Enter the length, breadth and radius: \n");
  scanf("%d%d%d", &length,&breadth,&radius);
  area = length * breadth;
  perimeter = 2*(length+breadth);
  area2 = 2*3.14*radius*radius;
  circumference = 2*3.14*radius;
  printf("The area and perimeter of rectangle is : %.2f , %.2f \n", area,perimeter);
  printf("The area and circumference of the circle is : %.2f , %.2f", area2 , circumference);

}
