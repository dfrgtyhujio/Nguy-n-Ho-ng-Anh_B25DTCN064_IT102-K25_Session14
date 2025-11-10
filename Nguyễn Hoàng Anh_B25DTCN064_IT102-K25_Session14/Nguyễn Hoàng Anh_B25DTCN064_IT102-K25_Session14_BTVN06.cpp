#include <stdio.h>

int maxArray(int a[], int n){
	int i;
	int max = a[0];
	for(i = 1; i < n; i++){
		if(a[i] > max){
			max = a[i];
		}
	}
	return max; 
}

int main(){
	int a[100], n, i;
	printf("Nhap so luong phan tu: ");
	scanf("%d", &n);
	
	for(i = 0; i < n; i++){
		printf("[%d] = ",i);
		scanf("%d", &a[i]);
	}
	
	printf("Phan tu lon nhat trong mang: %d", maxArray(a, n));

    return 0;
}

