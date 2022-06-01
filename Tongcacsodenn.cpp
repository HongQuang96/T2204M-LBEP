#include <stdio.h>
#include <math.h>
int tinhtong(int n){
	int tong = 0;
	int i;
	for(i=0;i<=n;i++){
		printf("Tong cac so: %ld\n",i);
		tong = tong + i;
	}
	return tong;
}
int main(){
	int n;
	printf("Hay nhap n: ");
	scanf("%d",&n);
	int ketqua;
	ketqua = tinhtong(n);
	printf("tong cac so tu 1 + 2 + 3 +...+n la: %d\n",ketqua);
	return 0;
}
