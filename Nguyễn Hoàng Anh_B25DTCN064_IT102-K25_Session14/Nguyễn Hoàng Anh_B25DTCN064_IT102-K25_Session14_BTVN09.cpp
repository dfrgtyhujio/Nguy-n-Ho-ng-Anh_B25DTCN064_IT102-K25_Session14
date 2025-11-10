#include <stdio.h>

int findUCLN(int a, int b){
    while(b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

int main(){
    int a, b;
    printf("Nhap a: ");
    scanf("%d", &a);
    printf("Nhap b: ");
    scanf("%d", &b);

    int UCLN = findUCLN(a, b);
    printf("UCLN = %d\n", UCLN);

    return 0;
}

