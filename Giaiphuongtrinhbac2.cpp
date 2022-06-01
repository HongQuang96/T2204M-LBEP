#include <stdio.h>
#include <math.h>
int main(){
	
	float a,b,c,x1,x2, delta;
	
	printf("Nhap vao he so a: ");
	scanf("%f", &a);
	printf("Nhap vao he so b: ");
	scanf("%f", &b);
	printf("Nhap vao he so c: ");
	scanf("%f", &c);
	
	if (a==0){
		printf("\nHe so a phai khac 0");
	}else{

		delta = b*b - 4*a*c;
		printf("\ndelta = %f", delta);
		
		if (delta>0){
			x1 = (-b-sqrt(delta))/(2*a);
			x2 = (-b+sqrt(delta))/(2*a);
			printf("\nPhuong trinh co nghiem phan biet: x1=%f va x2=%f", x1, x2);
		}else if(delta==0){
			x1 = -b/(2*a);
			printf("\nPhuong trinh co nghiem kep x1=x2=%f", x1);
		}else{
			printf("\nPhuong trinh vo nghiem");
		}
		
	}
	return 0;
}
