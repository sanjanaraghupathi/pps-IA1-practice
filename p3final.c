#include<stdio.h>
int input()
{
  printf("enter a number\n");
  int x;
  scanf("%d",&x);
  return x;
}
int sum_n(int n)
{
  int r=0;r=(n*(n+1))/2;
  return r;
}
void output(int n, int sum)
{
  printf("1");
  for(int f=2;f<n;f++)
  {
    printf("+%d",f);
  }
  printf("+%d is %d\n",n,sum);
}
int main()
{
  int n,sum;
  n=input();
  sum=sum_n(n);
  output(n,sum);
  return 0;
}