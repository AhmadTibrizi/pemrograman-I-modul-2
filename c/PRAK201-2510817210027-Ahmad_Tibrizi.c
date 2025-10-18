#include <stdio.h>

int main() {
    char nama[50], nim[20], kelas[10], ttl[50], alamat[100], hobby[50], no_hp[20];

    printf("Nama: ");
    scanf(" %[^\n]", nama); // membaca kalimat sampai enter
    printf("NIM: ");
    scanf(" %[^\n]", nim);
    printf("Kelas Paralel: ");
    scanf(" %[^\n]", kelas);
    printf("Tempat/Tanggal Lahir: ");
    scanf(" %[^\n]", ttl);
    printf("Alamat: ");
    scanf(" %[^\n]", alamat);
    printf("Hobby: ");
    scanf(" %[^\n]", hobby);
    printf("No. HP: ");
    scanf(" %[^\n]", no_hp);

    printf("Nama                : %s\n", nama);
    printf("NIM                 : %s\n", nim);
    printf("Kelas Paralel       : %s\n", kelas);
    printf("Tempat/Tanggal Lahir: %s\n", ttl);
    printf("Alamat              : %s\n", alamat);
    printf("Hobby               : %s\n", hobby);
    printf("No. HP              : %s\n", no_hp);

    return 0;
}
