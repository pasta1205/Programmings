#include <stdio.h>
int main()
{
      int basic=0, da, hra, gross=0;

      printf("Please Enter Your Salary:\n");

      scanf("%d",&basic);

      da= 0.6*basic;

      hra= 0.15*basic;

      gross= basic+da+hra;

      printf("Your DA is %d\n",da);

      printf("Your HRA is %d\n",hra);

      printf("Your Gross Salary is %d\n\n",gross);
}
