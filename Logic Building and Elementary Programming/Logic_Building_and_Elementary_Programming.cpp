#include<stdio.h>
int main () {
	int F[99];
	F[0] = 0;
	F[1] = 1;
	printf("Fibonacci series between 1 and 100 :\n");
	int i;
	for (i = 2; ; i++){
		F[i]= F[i-1] + F[i-2];
		if(F[i] > 1 & F[i] < 100) {
			printf("%d   ",F[i]);
		}
		if(F[i] >= 100){
			break;
		}
	}
	return 0;
}
