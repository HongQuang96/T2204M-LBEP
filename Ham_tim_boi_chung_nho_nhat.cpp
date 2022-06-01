#include <stdio.h>
int boichungnhonhatcua2so(int a, int b){
	int bcnn;
	int min = a, max = b;
	if(a > b){
		min = b, max = a;
	}
	if(min <= max){
		for(int i = 1; i <= max; i++){
			if((min * i) % max == 0){
				bcnn = min * i;
				break;
			}
		}
	}
	return bcnn;
}
