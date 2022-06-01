#include <stdio.h>
int uocchunglonnhatcua2so(int a, int b){
	int ucln;
	int min = a, max = b;
	if(a > b){
		min = b, max = a;
	}
	if(min <= max){
		for(int i = min; i > 0; i --){
			if(min % i == 0 && max % i == 0){
				ucln = i;
				break;
			}
		}
	}
	return ucln;
}
