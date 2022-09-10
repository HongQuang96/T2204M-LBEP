#include<stdio.h>
int main () {
	float a;//initial amount
	printf("Enter the initial amount : ");
	scanf("%f", &a);
	
	float b;//interest rate
	printf("\nEnter interest rate  : ");
	scanf("%f", &b);
	
	int c;//number of years sent
	printf("\nEnter the number of years to send : ");
	scanf("%d", &c);
	
	float sum;
	float interest;
	sum = a;
	printf("Year   ");
	printf("Interest         ");
	printf("Sum\n");
	for(int i = 1;i < c; i++){
		interest = sum * b/100;
		sum = sum + sum*b/100;
		printf("%d      ",c);
		printf("%f      ", interest);
		printf("%f\n", sum);
	}		
}
