#include <stdio.h>

int main() {
    float jari, tinggi, volume, luas, keliling;
    const float pi = 22.0 / 7.0;

    printf("Masukkan jari-jari: ");
    scanf("%f", &jari);
    printf("Masukkan tinggi: ");
    scanf("%f", &tinggi);

    volume = pi * jari * jari * tinggi;
    luas = 2 * pi * jari * (jari + tinggi);
    keliling = 2 * pi * jari;

    printf("Volume = %.2f\n", volume);
    printf("Luas = %.2f\n", luas);
    printf("Keliling = %.2f\n", keliling);

    return 0;
}