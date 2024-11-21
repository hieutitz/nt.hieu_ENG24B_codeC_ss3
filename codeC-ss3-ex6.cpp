#include <stdio.h>

int main() {
    float canh, chieuCao, dienTich;
    scanf("%f %f", &canh, &chieuCao);
    dienTich = 0.5 * canh * chieuCao;
    printf("%.2f", dienTich);
    return 0;
}

