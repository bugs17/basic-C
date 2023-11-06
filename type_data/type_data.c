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

  // menggunakan unsigned
  // jadinya nilai minimum adalah 0
  // nilai minusnya di pindahkan ke depan jadi sekarang bisa menyimpan nilai hingga +255
  // menggunakan 1 byte tetap. dan cara aksesnya juga sama bisa %d dan %c untuk asci character
  unsigned char duaratus = 254; 


  // gunakan short pada integer ini menggunakan 2 byte memory
  // dan bisa menampung (-32,768 sampe +32,767)
  // kalau tidak mau gunakan angka minus bisa pake unsigned jadi nilai positif yang di simpan bisa lebih besar
  // jadi kalo berikan nilai lebih dari positif 32767 maka de akan kembali ke nilai paling awal yaitu -32768 
  short int contoh_short = 32767;


  // kali ini coba pake unsigned agar dapat menyimpan nilai positif integer lebih besar
  // karena minusnya di hilangkan jadi tetap menggunakan 2 byte memory
  // hanya saja nilai maximum hingga 65,535 kalo lebih dari ini maka de akan memulai dari awal lagi 0 ke atas tergantung lebihnya
  unsigned short int tes_integer_unsigned = 65535;


  // int menyimpan nilai dari (-2,147,483,648 sampe +2,147,483,647)
  // dan de menggunakan 4 byte memory makanya bisa simpan nilai sampe besar begitu
  // dan kalau mau nilai psotof lebih besar dan tidak butuh menyimpan nilai negatif maka tinggal tambah unsigned saja
  int j = 2147483647;

  // ini juga sama menggunakan 4 byte memory tetapi tidak menggunakan nilai negatif
  // jadi nilai positif jadi lebih besar hingga (4,249,967,295) dan minumum 0
  // cara pemanggilannya berbeda yaitu menggunakan %u
  unsigned int x = 4147483647;


  // dan kalo ko mau simpan data integer yang besar skali ko bisa pake long long int
  // kenappa long nya dua? karena int biasa di atas sebenarnya sudah pake long secara default jadi tong cukup tulis sebagai int saja
  //  tapi kalo ko mau pake long long integer ini nanti bisa simpan nilai sampe (-9 quantiliun sampe +9 quantiliun)
  // simpan nilai besar skali dan de pake memory 8 byte
  // cara pemanggilannya %lld
  long long int f = 1273979874238934234; 

  // kalau mau lebih besar lagi bisa pake unsigned tetapi ingat bahwa tidak ada nilai negatif
  // dan cara penggunaannya %llu
  // 8-byte memory juga
  // dan tong akan dapat warning bahwa nilai terlalu besar untuk ignore warnung ini tong bisa tambah U di belakang nilainya jadi kaya begini 
  // 14273979874238934234U
  unsigned long long int k = 14273979874238934234U;

  printf("%f\n", c);
  printf("%0.15f\n", nilai_float); // tong harus tambahkan 0.15 di depan special key untuk menampilkan berapa digit setelah koma disini tong ingin tampilkan 15 digit jadi 0.15
  printf("%d\n", is_Sold); // %d karna hasilnya antara 0 dan 1 
  printf("%d\n", is_Ready); // ini juga sama saja
  printf("%c\n", seratus); // akses char sebagai char jadi de akan hasilkan nilai asci yaitu d kecil
  printf("%d\n", seratus); // ini akan mengakses nilainya sesuai dengan nilai yang di masukan yaitu integer
  printf("%d\n", duaratus); // char
  printf("%c\n", duaratus); // unsigned char
  printf("%d\n", contoh_short); // short int
  printf("%d\n", tes_integer_unsigned); // unsigned short int
  printf("%d\n", j); // int
  printf("%u\n", x); // unsigned int %u
  printf("%lld\n", f); // long long int %lld
  printf("%llu\n", k); // unsigned long long int %lld



  return 0;
}