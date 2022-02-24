#include<stdio.h>
#include<math.h>
void input(float *x1,float *y1,float *x2,float *y2)
{
printf("Enter points (x1,y1) and (x2,y2)=");
scanf("%f%f%f%f",x1,y1,x2,y2);
}
void find_distance(float x1,float y1,float x2,float y2,float *area)
{
float a=((x2-x1)*(x2-x1))+((y2-y1)*(y2-y1));
float x=a/2;
float sq=0.5*(x+(a/x));
while(fabs(x-sq)>0.000001)
{
x=sq;
sq=0.5*(x+(a/x));
}
*area=sq;
}
void output(float x1,float y1,float x2,float y2,float area)
{
  printf("the distance between points (%f,%f) and (%f,%f) is %f",x1,y1,x2,y2,area);
}
int main()
{
float a1,b1,a2,b2;
input(&a1,&b1,&a2,&b2);
float res;
find_distance(a1,b1,a2,b2,&res);
output(a1,b1,a2,b2,res);
}
