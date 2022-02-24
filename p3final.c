#include<stdio.h>
int input_number()
{
  int n;
  printf("Enter an number=");
  scanf("%d",&n);
  return n;
}
int is_prime(int n)
{
  int f=0;
  for(int i=1;i<=n;i++)
    {
      if(n%i==0)
        f++;
    }
  return f;
}
void output(int n,int is_prime)
{
  if(is_prime==2)
    printf("%d is a prime number",n);
  else
    printf("%d is not a prime number",n);
}
int main()
{
  int n,res;
  n=input_number();
  res=is_prime(n);
  output(n,res);
  return 0;
}

