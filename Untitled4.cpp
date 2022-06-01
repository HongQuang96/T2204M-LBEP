#include<stdio.h>
#include <math.h>
int main()
{
  float x, s;
  int n;
  printf("Nhap vào co so x: ");
  scanf("%f", &x);
  printf("Nhap vào so mu n: ");
  scanf("%d", &n);
  s = pow(x, n);
  printf("%.1f^%d = %.1f",x,n, s);
}
   
