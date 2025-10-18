#include <stdio.h>

int main() {
    float a, b, i, j, x, y, hasil;

    printf("Masukkan a: ");
    scanf("%f", &a);
    printf("Masukkan b: ");
    scanf("%f", &b);
    printf("Masukkan i: ");
    scanf("%f", &i);
    printf("Masukkan j: ");
    scanf("%f", &j);
    printf("Masukkan x: ");
    scanf("%f", &x);
    printf("Masukkan y: ");
    scanf("%f", &y);

    hasil = ((a - b) * (i / j)) - x - y;
    printf("%.3f\n", hasil);
    return 0;
}