#include<stdio.h>
#include<math.h>
int main ()
{
float x,y,a,b,d;
printf("enter co ordinates of point 1 (x,y)\n");
scanf("%f%f",&x,&y);
printf("enter co ordinates of point 2 (x1,y1)\n");
scanf("%f%f",&a,&b);
d=sqrt((x-a)*(x-a)+(y-b)*(y-b));
printf("The distance between two points is %f \n",d);
return 0;
}

