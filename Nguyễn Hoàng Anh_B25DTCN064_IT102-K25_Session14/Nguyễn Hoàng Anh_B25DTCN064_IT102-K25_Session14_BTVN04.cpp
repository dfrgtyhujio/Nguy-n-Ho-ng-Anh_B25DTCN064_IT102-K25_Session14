#include <stdio.h>

void printArray(int a[], int n){
	int i;
	printf("Cac phan tu trong mang: ");
	for(i = 0; i < n; i++){
		printf("%d ", a[i]);
	}
}

int main(){
	int a[100], n, i;
	printf("Nhap so luong phan tu: ");
	scanf("%d", &n);
	
	for(i = 0; i < n; i++){
		printf("[%d] = ",i);
		scanf("%d", &a[i]);
	}
	
	printArray(a, n);

    return 0;
}

