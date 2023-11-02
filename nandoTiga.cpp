#include <iostream>
#include <cmath>
#include <string>

using namespace std;

void tes ();
void kontak1 ();
void burung (string fname)
 {
   cout << "Burung" << " " << fname;
   cout << " " << endl;
 }
void kontak2 ()
 {
  cout << "=======================" << endl;
  cout << "Nama = Maholi Tumanggor" << endl;
  cout << "Alamat = Semanan" << endl;
  cout << "No.hp = 081234758990" << endl;
  cout << "=======================" << endl;
 }
void kontak3 ()
 {
  cout << "=====================" << endl;
  cout << "Nama = Jercho Reyhan" << endl;
  cout << "Alamat = Pedongkelan" << endl;
  cout << "No.hp = 089566345786" << endl;
  cout << "====================" << endl;
 }
// BATAS UTAMA

int main() {
  int hitungdua,hitungtiga;

 //penghitungan sesuai  task
 const int hitungsatu = 5;
  hitungdua = 0;
  for(int i = 1; i <= hitungsatu; i++){
    hitungdua = i * 5;
    cout << hitungdua << " ";
  }
  for(int j = 1; j <= hitungsatu; j++){
    hitungdua = j * 6;
    cout << hitungdua << " ";
   }
  for(int k = 1; k <= hitungsatu; k++){
    hitungdua = k * 7;
    cout << hitungdua << " ";
   }
 //batas
 cout << endl;

 int hitungempat,hitunglima,hitungenam;

 hitungempat = 0;
 for(int i = 0; i <= 10; i++){
   hitungempat = i * -1;
   cout << hitungempat << " ";
  }

 cout << endl;
 //batas

 int hitungtujuh,hitungdelapan,hitungsembilan;
 hitungdelapan = 10;
 hitungtujuh = -1;
 hitungsembilan = 0;
 for(int i = 1; i <= hitungdelapan; i++){
  hitungtujuh = -1 * hitungtujuh;
  hitungsembilan = (hitungtujuh * 2 * i);
  cout << hitungsembilan << " ";
 }

 cout << endl;
 //batas
 int hitungsbls;
 int hitungsplh = 3;
 for(int i = 0; i <= 10; i++){
  hitungsbls = pow(i,hitungsplh);
  cout << hitungsbls << " ";
 }

 cout << endl;
 //batas
   int rows = 5;

   for (int i = 1; i <= rows; i++) {
        for (int j = 1; j <= i; j++) {
             cout << "* ";
        }
         cout << endl;
    }
 //batas
  int kolom = 3;
  for (int a = 0; a < kolom; a++)
    {
       for(int b = 1; b <= a; b++)
          {
            cout << " - ";
          }
     cout << endl;
    }
 //batas
 int hitungtjbls,hitungdlpnbls,hitungsmblnls;

  hitungtjbls = 10;
  for(int i = 0; i <= hitungtjbls; i++)
     {
       for(int j = 1; j <= i; j++)
       {
         cout << j;
       }
      cout << i;
      cout << endl;
     }

 cout << endl;
 //batas
 string au,aua,aub;
 int auc,aud;
 float aue,auf,aug;
 cout << "Berikan berapa sumbangan yang Anda berikan " << endl;
 cout << "Setiap sumbangan mendapat kalimat perulangan = ";
 cin >> aud;

 auc = 0;
 while (auc < aud)
   {
     cout << "Selamat anda mendapatkan ucapan " << endl;
     auc++;
     tes ();
   }
 
//batas

 int pilihan,hitungdbls,hitungtgbls,hitungembls,pngkts,pngktd,hasil,hasild;
 string opsi;
 cout << "=======================================================================" << endl;
 cout << "                      Perhitungan Pangkat Bilangan     " << endl;
 cout << "=======================================================================" << endl;

 cout << endl;

 cout << "Silahkan pilih perhitungan " << endl;
 cout << "1.Perkalian           2.Pembagian" << endl;
 cout << "Pilihan = ";
 cin  >> hitungdbls;
 cout << "---------------------------" << endl;
 cout << "Masukkan Angka 1 = ";
 cin >> hitungtgbls;
 cout << "Masukkan Angka 2 = ";
 cin >> hitungembls;
 cout << "Masukkan Pangkat 1 = ";
 cin >> pngkts;
 cout << "Masukkan Pangkat 2 = ";
 cin >> pngktd;

 switch(hitungdbls) {
  case 1:
    if(hitungtgbls != hitungembls)
     {
       hasil = pow(hitungtgbls,pngkts) * pow(hitungembls,pngktd);
       if (pngkts == pngktd)
         {
           hasil = pow(hitungtgbls * hitungembls,pngkts);
         }
     }
     else
     {
     hasil = pow(hitungtgbls,pngkts + pngktd);
     }
    cout << "------------------------------" << endl;
    cout << "Hasil dari bilangan yang Anda masukkan adalah = " << hasil << endl;
    cout << "======================================================================" << endl;
    break;
  case 2:
    if(hitungtgbls != hitungembls)
      {
       hasild = pow(hitungtgbls,pngkts) / pow(hitungembls,pngktd);
        if (pngkts == pngktd)
         {
          hasild = pow(hitungtgbls / hitungembls, pngkts);
         }
      }
    else
      {
       hasild = pow(hitungtgbls,pngkts - pngktd);
      }
    cout << "------------------------------" << endl;
    cout << "Hasil dari bilangan yang Anda masukkan adalah = " << hasild << endl;
    cout << "=======================================================================" << endl;
    break;
  default:
    cout << "Error";
    break;
 }
cout << endl;
//batas
string masuks,masukd;
int tanda;
cout << "----------------------" << endl;
cout << "Silahkan masukkan nama depan = ";
cin >> masuks;
tanda = 0;
  while (tanda < 5)
   {
     cout << masuks << " ";
     tanda++;
   }
cout << endl;
//batas
int na,pengali,bilangana;
cout << "Masukkan N = ";
cin >> na;

pengali = -1;
 for(int i = 1; i <= na; i++)
    {
      pengali *= -1;
      bilangana = (2 * i -1) * pengali;
      cout << bilangana << endl;
    }
cout << endl;
//batas
cout << "Jenis Burung-burung" << endl;
cout << "Masukkan jenis burung yang kamu ketahui = ";
burung ("Nuri");
burung ("Cenderawasih");
burung ("Parkit");
//batas
string ndp,nbl;
cin.ignore();
cout << "Silahkan masukkan nama depan Anda = ";
getline(cin,ndp);
cout << "Silahkan masukkan nama belakang Anda = ";
getline(cin,nbl);

cout << endl;
cout << "==========================" << endl;
cout << "Nama Anda adalah = " << ndp + " " + nbl << endl;
//batas
int nmrk;
cout << "Aplikasi Memanggil kontak sederhana" << endl;
cout << "Disajikan antara rentang no 1-3" << endl;

for(int i = 0; i < 4; i++)
{
cout << "Silahkan pilih nomor = ";
cin >> nmrk;
 switch (nmrk) {
   case 1:
      kontak1 ();
      break;
   case 2:
      kontak2 ();
      break;
   case 3:
      kontak3 ();
      break;
   default:
      cout << "Anda salah";
      break;
  }
}
cout << endl;
//batas


 return 0;
}

void tes ()
 {
  cout << "Selamat Anda berhasil" << endl;
  cout << "Ayo bisa bisa bisa" << endl;
 }
void kontak1 ()
 {
  cout << "=========================" << endl;
  cout << "Nama = Fernando          " << endl;
  cout << "Alamat = Kalideres       " << endl;
  cout << "No.hp = 082114049809     " << endl;
  cout << "=========================" << endl;
 }

