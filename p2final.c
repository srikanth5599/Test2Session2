
#include<stdio.h>
void input_triangle(float *x1,float *y1,float *x2,float *y2,float *x3,float *y3)
{
  printf("Enter points (x1,y1) ,(x2,y2) and (x3,y3)=");
  scanf("%f%f%f%f%f%f",x1,y1,x2,y2,x3,y3);
}
int is_triangle(float x1,float y1,float x2,float y2,float x3,float y3)
{
  float a;
  a=0.5*(((x1*(y2-y3))+(x2*(y3-y1))+(x3*(y1-y2))));
  printf("Area of three point is %f\n",a);
  if(a>0)
    return 1;
  else
    return 0;
}
void output(int istriangle)
{
  if(istriangle==1)
    printf("Theses 3 points forms a triangle");
  else
    printf("not form triangle");
}
int main()
{
  float a1,b1,a2,b2,a3,b3;
  int area;
  input_triangle(&a1,&b1,&a2,&b2,&a3,&b3);
  area=is_triangle(a1,b1,a2,b2,a3,b3);
  output(area);
}