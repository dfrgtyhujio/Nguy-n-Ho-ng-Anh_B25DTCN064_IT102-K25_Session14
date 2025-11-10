#include<stdio.h>

float calculateSum(float a, float b){
	float sum = a + b;
	return sum;
}

int main(){
	float a, b;
	printf("Nhap so a: ");
	scanf("%f", &a);
	printf("Nhap so b: ");
	scanf("%f", &b);
	
	printf("Tong = %.2f",calculateSum(a, b));
	
	return 0;
}
