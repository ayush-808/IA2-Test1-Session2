#include <stdio.h>

void input(float *base, float *height)
{
  printf("Enter the base and height of the triangle: ");
  scanf("%f%f", base, height);
}

void find_area(float base, float height, float *area)
{
  *area=(base*height)/2;
}

void output(float base, float height, float area)
{
  printf("The area of triangle with base %f and height %f is %f",base, height, area);
}

int main()
{
  float x,y,z;
  input(&x, &y);
  find_area(x, y, &z);
  output(x,y,z);
  return 0;
}