#include<stdio.h>

int checkPerfect(int n){
	int sum = 0;
	for(int i = 1; i < n; i++){
		if(n % i == 0){
			sum += i;
		}
	}
	if(sum == n){
		return 1;
	} else{
		return 0;
	}
}

int main(){
	int n;
	printf("Nhap n: ");
	scanf("%d", &n);

	if(checkPerfect(n)){
		printf("%d la so hoan hao", n);
	} else{
		printf("%d khong phai so hoan hao", n);
	}
	
	return 0;
}
