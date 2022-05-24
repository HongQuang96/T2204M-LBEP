#include <stdio.h>

int main(){
	int n;
	int f0, f1, f2;
	printf("Hay nhap n: ");
	scanf("%d",&n);
	f0=f1=f2=1;
	for(int i = 3; i<=n;i++){
		f1 = f2;
		f2 = f0;
		f0 = f1 + f2;
	}
	printf("f(%d)=%d",f0,n);
	return 0;
}
