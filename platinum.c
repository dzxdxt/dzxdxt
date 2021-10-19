#include<stdio.h>
int main(void){
	float weight;
	float value;
	printf("Are you worth your weight in platinum?");
	printf("Let's check it out .\n");
	printf("Please enter your weight in pounds:");
	scanf("%f", &weight);
	value = 1700.0*weight*14.5833;
	printf("Your weight in platinum is worth $%.2f2\n", value);
	printf(You are esilly worth that!If platinum prices drop, \n);
	printf("eat more te maintain your value .\n");
	return 0;
}
