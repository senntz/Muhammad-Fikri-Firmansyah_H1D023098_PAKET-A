#include<stdio.h>

int main(){
    //Definisikan Array dam pointer yang digunakan
    int arr[6]={1, 6, 13, 16, 25, 26};
    int *revisi;

    //Cetak isi array sebelum perubahan
    printf("Daftar Halaman Sebelum Perubahan:\n");
    for(int i=0; i<6; i++){
        printf("%d ", arr[i]);
    }
    printf("\n\n");


    //Ubah value pada Array
    revisi = &arr[2];
    *revisi = arr[2] + 2;
    revisi = &arr[3];
    *revisi = arr[3] + 2 + 3;
    revisi = &arr[4];
    *revisi = arr[4] + 2 + 3;
    revisi = &arr[5];
    *revisi = arr[5] + 2 + 3 + 1;

    //Cetak isi array setelah perubahan
    printf("Daftar Halaman Setelah Perubahan:\n");
    for(int i=0; i<6; i++){
        printf("%d ", arr[i]);
    }
}