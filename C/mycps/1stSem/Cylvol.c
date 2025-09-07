#include <stdio.h>
int main()
{
     float r,h,pi=22/7,vol=0;

     printf("Please Enter The Radius and Height of The Cylinder:\n");

     scanf("%f%f",&r,&h);

     vol=(pi*r*r)*h;

     printf("Volume of The Cylinder is %f\n",vol);
}
