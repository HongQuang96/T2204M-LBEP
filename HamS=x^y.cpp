#include <stdio.h>
#include <math.h>
int main(){
	float x, S;
	int y;
	printf("Nhap vao co so X: ");
	scanf("%f", &x);
	printf("Nhap va so mu Y: ");
	scanf("%d", &y);
	S = pow(x, y);
	printf("%.1f^%d = %.1f", x, y, S);
	return 0;
}
