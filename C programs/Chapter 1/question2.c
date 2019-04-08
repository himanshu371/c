#include <stdio.h>
 void  main() {
  int distance;
  int meter;
  float centimeter;
  int feet;
  int inches;
  scanf("%d", &distance );
  meter = distance * 1000;
  feet = distance * 3280.83;
  inches = distance * 39370.1;
  centimeter =  (float)distance * 100000;
  printf("Distance in meter = %d ,Distance in feet = %d , Distancein inches = %d , Distance in centimeter = %d ",meter,feet,inches,centimeter );

}
