#include <stdio.h>

int main() {
    float toan, van, anh, tong, trung_binh;
    scanf("%f %f %f", &toan, &van, &anh);
    tong = toan + van + anh;
    trung_binh = tong / 3;
    printf("%.2f %.2f", tong, trung_binh);
    return 0;
}

