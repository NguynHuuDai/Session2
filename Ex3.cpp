#include <stdio.h>

int main() {
    int a = 10;
    int b = 20;
    int tong, hieu, thuong, tich;
    
    tong = a + b;
    hieu = a - b;
    thuong = a / b;	
    tich = a * b;
    
    printf("Gia tri cua tong la: %d\n", tong );
    printf("Gia tri cua hieu la: %d\n", hieu );
    printf("Gia tri cua thuong la: %d\n", thuong );
    printf("Gia tri cua tich la: %d\n", tich );
    return 0;
}

