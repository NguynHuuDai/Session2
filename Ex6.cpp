#include <stdio.h>

int main() {
    const float PI = 3.14;
    float r;
    float chu_vi, dien_tich;

    printf("Nhap ban kinh hinh tron: ");
    scanf("%f", &r);

    chu_vi = 2 * PI * r;
    dien_tich = PI * r * r;

    printf("Chu vi hinh tron: %.2f\n", chu_vi);
    printf("Dien tich hinh tron: %.2f\n", dien_tich);

    return 0;
}

