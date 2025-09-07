#include <stdio.h>
int main()
{
      int x=0,y=0,z=0;

      printf("X=");

      scanf("%d",&x);

      printf("Y=");

      scanf("%d",&y);

      printf("Z=");

      scanf("%d",&z);

      x=x+y+z;
      y=x-(y+z);
      z=x-(y+z);
      x=x-(y+z);

      printf("X=%d\nY=%d\nZ=%d\n",x,y,z);
}
