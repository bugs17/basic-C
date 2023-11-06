#include <stdio.h>
#include <stdbool.h>

int main(){

  char a = 'A'; //type data char menyimpan single charcter %c
  char nama[] = "rio"; // char array menyimpan sekumpulan character. jadinya sebuah string %s
  int nila = 90; // ini menyimpan nilai integer %d
  
  //ini float 
  // menggunakan 4 byte memory (jadi ada 32-bit karna 8 kali 4 samadengan 32 satu byte 8-bit)
  // dan 6 - 7 digit decimal. cara aksesnya %f
  float c = 6.141592; 

  // double
  //  menggubakan 8 byte memory (dua kali lipat dari float jadi ada 64-bit) dan maksimal digit 15 - 16
  // dan cara aksesnya %lf
  double nilai_float = 3.263413467432457;

  // bool type data boolean ini antara true dan false
  // 1 byte adalah true dan 0 adalah false
  // jadi sebenarnya kalau true itu nanti begini 00000001
  // dan kalo false nanti 00000000
  // dan returnnya juga return bit itu bukan return text tru atau false
  // tapi tong harus include file header dulu dari stdbool.h
  // karena ini sebenarnya represent dari binary maka untuk mengaksesnya sama saja kaya integer %d
  bool is_Sold = true; // bisa kaya begini
  bool is_Ready = 0; // begini juga hasilnya false

  // char. ini bisa isi nilai integer dan jika ingin mengaksesnya sebagai nilai decimal integer maka gunakan %d
  // tetapi kali ko mau akses de sebagai ASCi character ko pake %c maksutnya 100 itu sebenarnya asci dari "d" d kecil
  // jadi kalau ko akses nilai 100 dalam varibael tipe data char dengan %c maka hasil outpunya d
  // tetapi kalau ko akses dengan %d maka hasilnya desimal 100
  // dan de menggunakana 1 byte memory
  // trus de juga ada punya minimum dan maximum number dari -128 sampai +127
  // kalau ko tau ko trabutuh nilai negatif nanti tinggal ko tambah unsigned di depan type data saja jadi minimum-maximum numbernya jadi 0 sampe +255
  char seratus = 100;


  printf("%f\n",c);
  printf("%0.15f\n",nilai_float); // tong harus tambahkan 0.15 di depan special key untuk menampilkan berapa digit setelah koma disini tong ingin tampilkan 15 digit jadi 0.15
  printf("%d\n",is_Sold); // %d karna hasilnya antara 0 dan 1 
  printf("%d\n",is_Ready); // ini juga sama saja
  printf("%c\n",seratus); // akses char sebagai char jadi de akan hasilkan nilai asci yaitu d kecil
  printf("%d\n",seratus); // ini akan mengakses nilainya sesuai dengan nilai yang di masukan yaitu integer

  return 0;
}