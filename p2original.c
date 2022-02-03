#include <stdio.h>
int cmp(int a,int b,int c)
{
  if(a>b)
  {
    if(a>c)
    {
      return a;
    }
   else
   {
   return c;
   }
  }
  else
  {
    if(b>c)
    {
      return b;
    }
    else
    {
      return c;
    }
  }
}
int input()
{
  int x;
  scanf("%d",&x);
  return x;
}
void output(int a,int b,int c,int large)
{
   printf("%d is the the largest of three\n",large);
}
int main()
{
  int a,b,c,lar;
  printf("enter three numbers\n");
  a=input();
  b=input();
  c=input();
  lar=cmp(a,b,c);
   output(a,b,c,lar);
  return 0;
}