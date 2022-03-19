#include<stdio.h>
int input_array_size()
{
  int a;
  printf("enter the array size\n");
  scanf("%d",&a);
  return a;
}
void input_array(int n,int a[n])
{
  printf("enter the value of n\n");
  for(int i=0;i<n;i++)
    {
      scanf("%d",&a[i]);
    }
}
int sum_n_array(int n,int a[n])
{
  int sum=0;
  for(int i=0;i<n;i++)
    {
     sum=sum+a[i]; 
    }
  return sum;
}
void out_put(int n,int a[n],int sum)
{
  for(int i=0;i<n;i++)
{
  printf("%d+",a[i]);
}
  printf("%d=%d\n",a[n-1],sum);
  }
int main()
{
  int n,sum;
  n=input_array_size();
  int a[n];
  input_array(n,a);
  sum=sum_n_array(n,a);
  out_put(n,a,sum);
  return 0;
}