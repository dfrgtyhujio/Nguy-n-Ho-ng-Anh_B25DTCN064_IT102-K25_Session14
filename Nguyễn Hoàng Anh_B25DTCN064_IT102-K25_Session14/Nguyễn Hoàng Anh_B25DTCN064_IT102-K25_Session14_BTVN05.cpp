#include<stdio.h>

int factorial(int n){
	int i, result = 1;
	for(i = 1; i <= n; i++){
		result = result * i; 
	} 
	return result;
}

int main(){
	int n;
	printf("Nhap so so nguyen: ");
	scanf("%d", &n);

	printf("%d! = %d",n , factorial(n));
	
	return 0;
}
