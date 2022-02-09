#include <stdio.h>
int input_number()
{
  int a;
  printf("Enter the number:\n");
  scanf("%d", &a);
  return a;
}

int is_composite(int number)
{
  for (int i = 2; i <= number/2; i=i+1)
  {
    if (number%i == 0)
      return 1;
  }
  return 0;
}

void output(int number, int isComposite)
{
  if (isComposite)
    printf("%d is a COMPOSITE NUMBER\n", number);
  else 
    printf("%d is NOT A COMPOSITE NUMBER\n", number);
}

int main()
{
  int num = input_number();
  int res = is_composite(num);
  output(num, res);
  return 0;
}