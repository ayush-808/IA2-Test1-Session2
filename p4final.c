#include <stdio.h>

int input_array_size()
{
  int s;
  printf("Enter the size of the array: ");
  scanf("%d",&s);
  return s;
}

void input_array(int n, int a[n])
{
  for(int i=0; i<n; i=i+1)
    {
      printf("Enter a string value: ");
      scanf("%d", &a[i]);
    }
}

int is_composite(int n)
{
  for(int i=2;i<=2;i=i+1)
    {
      if (n%i==0)
        {
          return 1;
        }
    }
  return 0;
}

int sum_composite_numbers(int n, int a[n], int composite)
{
  int sum=0;
  for(int i=0; i<n;i=i+1)
    {
      if(composite==1)
      {
        sum+=a[i];
      }
    }
  return sum;
}

void output(int sum)
{
  printf("The sum of the composite numbers of the array is %d", sum);
}

int main()
{
  int n = input_array_size();
  int a[n];
  input_array(n,a);
  int composite = is_composite(n);
  int sum = sum_composite_numbers(n,a,composite);
  output(sum);
}