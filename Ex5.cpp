#include <stdio.h>

int main() {
	
	float a, b;
	float chu_vi, dien_tich;
	
	
	printf("Nhap chieu dai cua hinh chu nhat : ");
	scanf("%f", &a);
	
	printf("Nhap chieu rong cua hinh chu nhat : ");
	scanf("%f", &b);
	
	chu_vi = (a + b) * 2;
	dien_tich = a * b;
	
	printf("chu vi cua hinh chu nhat la : %.2f\n", chu_vi);
	printf("dien tich cua hinh chu nhat la : %.2f\n", dien_tich);
	
}
