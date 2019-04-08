#include <stdio.h>
void main() {
  int basicSalary;
  int hra,da;
  int grossSalary;
  scanf("%d", &basicSalary );
  hra= basicSalary * 0.4;
  da=basicSalary * 0.2 ;
  grossSalary=hra+da+basicSalary;
  printf("%d\n", grossSalary );

}
