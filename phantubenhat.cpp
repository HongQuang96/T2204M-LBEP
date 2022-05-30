#include <stdio.h>
int mangso[5];
void nhapmang(){
	for(int i = 0; i <= 5; i++){
		printf("mangso[%d]= ",i);
		scanf("%d",&mangso[i]);
	}
}
void inmang(){
	for(int i = 0; i <= 5; i++){
		printf("in ra mang so");
		printf("mangso[%d]=%d\n",i,mangso[i]);
	}
}
void sapxep(){
	int min = mangso[0];
	for(int i = 0; i<= 5; i++){
		if(min>mangso[i]){
			min = mangso[i];
			printf("phan tu nho nhat la: %d",min);
		}
	}
}
int main(){
	nhapmang();
	inmang();
	sapxep();
	return 0;
}
