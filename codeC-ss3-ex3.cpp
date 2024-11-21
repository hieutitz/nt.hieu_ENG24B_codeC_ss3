#include <stdio.h>

int main() {
    float r, chu_vi, dien_tich;
    scanf("%f", &r);
    chu_vi = 2 * PI * r;
    dien_tich = PI * r * r;
    printf("%.2f %.2f", chu_vi, dien_tich);
    return 0;
}

