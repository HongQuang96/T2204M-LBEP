#include <stdio.h>

int main(){
	int n;
	printf("Nhap cac chu so nguyen n: ");
	scanf("%d",&n);
	int Tong = 0;
	for(int i = 1; i <= n; i++){
		Tong = Tong + n%10;
		n = n/10;	
	}
	printf("Tong cac chu so cua n: %d\n", Tong);
	return 0;
}
