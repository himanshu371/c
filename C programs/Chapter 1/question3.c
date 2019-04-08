/*
If the marks obtained by a student in five different subjects
are input through the keyboard, find out the aggregate marks
and percentage marks obtained by the student. Assume that
the maximum marks that can be obtained by a student in each
subject is 100
*/
#include <stdio.h>
int main() {
  float marks1,marks2,marks3,marks4,marks5;
  float sum,average, percentage;
  printf("Enter the number Sperated by the space \n");
  scanf("%f%f%f%f%f", &marks1,&marks2,&marks3,&marks4,&marks5 );
  printf("The Marks Entered are: %f, %f ,%f ,%f ,%f \n", marks1,marks2,marks3,marks4,marks5 );
  sum = marks1+marks2+marks3+marks4+marks5;
  average= sum/5.0;
  percentage = (sum/500.0)*100;
  printf("The average of the sutuents is: %.2f:  \n", average );
  printf("the percentage of students is : %.2f:  \n",percentage );
  printf("Thanks You!\n" );

  return 0;
}
