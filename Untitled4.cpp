#include<stdio.h>
#include <math.h>
int main()
{
  float x, s;
  int n;
  printf("Nhap v�o co so x: ");
  scanf("%f", &x);
  printf("Nhap v�o so mu n: ");
  scanf("%d", &n);
  s = pow(x, n);
  printf("%.1f^%d = %.1f",x,n, s);
}
   
