#include <stdio.h>

int main(){
	int y;
	printf("Hay nhap so nguyen: ");
	scanf("%d",&y);
	int i;
	while(i < y){
		if(i%2==0 && i%3==0)
		printf("so chia het cho 2 va 3 la: %d\n",i);
		i++;
	}
	return 0;
}
