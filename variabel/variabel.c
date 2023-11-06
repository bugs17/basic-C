#include <stdio.h>

int main(){

  // membuat variabel itu artinya memberikan sebagian memori untuk menyimpan data
  // jadi tong alokasikan sebagian memory untuk simpan value dari variabel itu
  // jadi di balik variabel sebenarnya ada alamat memory yang di alokasikan.
  // nanti ko akan paham kalo ko su sampe di pointer atau akses alamat <<< ini maksutnya materi tentang pointer atau memory address

  int umur;                 // ini namanya deklarasi variabel
  umur = 29;                // nah kalo ini namanya inisialisasi nilai/value ke dalam variabel yang su dibuat
  char peringkat = 'A';     // kalo ini deklarasi sekalian inisialisasi nilainya
  char nama[] = "Rionaldi"; // di C tidak ada method String. karena string sebenarnya adalah kumpulan character jadi tong bikir array character, ooh ya kalau data yang panjang gunakan petik dua ""
  float harga = 2.500;      // ini tipe data float bilangan yang ada komanya
  // oke setelah sudah inisialisai nilai pada variabel dibawah ini cara pemanggilan atau penggunaan
  // variabelnya.
  // ini cara mengakses variabel. di C tong harus menggunakan spesial karakter untuk memanggil variabelnya
  // %d ini digunakan kalau type data pada variabel adalah decimal karena data umur integer maka tong akses dengan %d
  printf("Haloo umur saya %d\n", umur); 

  // %c ini digunakan untuk mengakses variabel dengan type data single caracter
  printf("Nilai anda adalah %c\n", peringkat); 

  // ini cara akses sekumpulan character
  // %s ini artinya string
  printf("Nama saya %s\n", nama);
  printf("mangga harganya %f\n", harga); // ini hasilnya nanti 2.500000 ada 6 digit di belakang koma
  printf("mangga harganya %0.3f\n", harga); // kalau mau cuma ada digit setalah koma maka tambahkan 0.3 di depan special keynya

  return 0;
}