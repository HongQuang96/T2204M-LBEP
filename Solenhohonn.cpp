#include <stdio.h>

int main(){
	int y;
	printf("Hay nhap so nguyen: ");
	scanf("%d",&y);
	int i;
	while(i<y){
		if(i%2 != 0)
			printf("cac so < n la: %d\n", i);
			i++;
	}
        return 0;
}
