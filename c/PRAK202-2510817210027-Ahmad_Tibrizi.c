#include <stdio.h>

int main() {
    float a, b;
    printf("Masukkan Nilai Pertama : ");
    scanf("%f", &a);
    printf("Masukkan Nilai Kedua : ");
    scanf("%f", &b);

    float hasil = a + b;

    printf("Hasil dari penjumlahan nilai pertama ");

    // kalonya input nilai a kada pake koma
    if (a == (int)a)
        printf("\"%.0f\" ", a); 
    // kalo input pake koma
    else
        printf("\"%.2f\" ", a); 

    printf("dan nilai kedua ");
    // kalo input b kada pake koma
    if (b == (int)b)
        printf("\"%.0f\" ", b);
    // kalo input b kada pake koma
    else
        printf("\"%.1f\" ", b);

    printf("adalah \"%.2f\"\n", hasil);

    return 0;
}
