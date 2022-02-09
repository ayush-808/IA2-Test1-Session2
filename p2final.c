#include <stdio.h>
int input_side()
{
  int x;
  printf("Enter a side of the triangle: \n");
  scanf("%d", &x);
  return x;
}

int check_scalene(int a, int b, int c)
{
  if (a==b || a==c || b==c)
  {
    return 0;
  }
  else
  {
    return 1;
  }
}

void output(int a, int b, int c, int isscalene)
{
  if(isscalene)
  {
    printf("The triangle with sides %d, %d and %d IS SCALENE\n",a,b,c);
  }
  else
  {
    printf("The triangle with sides %d, %d and %d IS NOT SCALENE\n",a,b,c);
  }
}

int main()
{
  int side1 = input_side();
  int side2 = input_side();
  int side3 = input_side();

  int check = check_scalene(side1, side2, side3);
  output(side1, side2, side3, check);

  return 0;
}