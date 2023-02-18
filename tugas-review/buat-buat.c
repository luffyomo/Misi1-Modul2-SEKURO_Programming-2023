#include <stdio.h>

#define SIZE_OF_ARRAY 4

/* Pada file ini, kalian diminta untuk melengkapi fungsi/prosedur di bawah ini  */
/* sesuai dengan spesifikasi yang diberikan */

/* Contoh */
// Sebelum:
// void printArray(/* parameter */){
//     /* aksi */
// }
// Setelah:
void printArray(int array[], int size) {
    printf("[ ");
    for (int i = 0; i < size; i++) {
        printf("%d ", array[i]);
    }
    printf("]");
}

/* Nomor 1 [5 poin] */
void swap(int *a, int *b) {
   int data1 = *a;
    printf("\nProses Penukaran Data");
    printf("\nA = %d, B = %d\n", *a, *b);
    *a = *b;
    *b = data1;
}

/* Nomor 2 [10 poin] */
char isKabisat(int tahun) {
char hasil;
    if (tahun % 4 != 0) 
    {
        hasil = 'G';
    }
    else if (tahun % 100 != 0) 
    {
        hasil = 'Y';
    }
    else if (tahun % 400 != 0) 
    {
        hasil = 'G';
    }
    else 
    {
        hasil = 'Y';
    }
    tahun = hasil;
}

/* Nomor 3 [15 point] */
void transformArray(int *ptr, int size) {
   for (int i = 0; i < size; i++) {
        if (ptr[i] % 2 != 0) {
            ptr[i] = 0;   
        }
        else 
        {
           ptr[i] = 1;
        }
    }
}

int main() {
    /* Program berikut bisa dipakai untuk memeriksa jawaban kalian */
    
    /* Nomor 1 [5 poin] */
    /* Lengkapi prosedur swap() yang menukarkan value dua variabel integer */
    int x = 10;
    int y = 20;

    printf("Sebelum: x = %d, y = %d\n", x, y);
    swap(&x, &y);
    printf("Setelah: x = %d, y = %d\n", x, y);

    // Expected Output:
    // Sebelum: x = 10, y = 20
    // Setelah: x = 20, y = 10

    printf("\n");


    /* Nomor 2 [10 poin] */
    /* Lengkapi fungsi isKabisat() yang mengembalikan apakah tahun yang dimasukkan merupakan tahun kabisat atau bukan */
    /* Informasi: Pada awal pembentukan kalender masehi, semua tahun yang dapat dibagi 4 merupakan tahun kabisat. Namun, sejak tahun 1582 M, tahun kelipatan 100 yang bukan kelipatan 400 tidak lagi disebut kabisat. */
    /* Output hanya berupa Y (jika kabisat) dan G (jika tidak) */
    int year1 = 2020;
    int year2 = 1400;
    int year3 = 1800;
    
    printf("Apakah %d tahun kabisat? %c\n", year1, isKabisat(year1));
    printf("Apakah %d tahun kabisat? %c\n", year2, isKabisat(year2));
    printf("Apakah %d tahun kabisat? %c\n", year3, isKabisat(year3));
    
    // Expected Output:
    // Apakah 2020 tahun kabisat? Y
    // Apakah 1400 tahun kabisat? Y
    // Apakah 1800 tahun kabisat? G
    

    printf("\n");

    /* Nomor 3 [15 poin] */
    /* Lengkapi prosedur checkArray() yang mengubah isi sebuah array of integer */
    /* Jika elemen dari array tersebut bilangan ganjil, maka nilai elemen tersebut berubah menjadi 0 */
    /* Jika elemen dari array tersebut bilangan genap, maka nilai elemen tersebut berubah menjadi 1 */
    int array[4] = {19, 62, 31, 1};

    printf("Sebelum: ");
    printArray(array, 4);
    printf("\n");

    transformArray(array, 4);

    printf("Setelah: ");
    printArray(array, 4);
    printf("\n");

    // Expected Output:
    // Sebelum: [ 19 62 31 1 ]
    // Setelah: [ 0 1 0 0 ]

    return 0;
}
