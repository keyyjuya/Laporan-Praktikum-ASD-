//Kezia Adelina Tamba 
//124140046

#include <iostream>                         
#include <boost/multiprecision/cpp_int.hpp> //library Boost untuk tipe big integer (bilangan besar)

using namespace std;
using boost::multiprecision::cpp_int; //namespace dari Boost untuk tipe cpp_int

/*
   subprogram hitungMath
   tujuan:
   - menghitung jumlah kuadrat bilangan dari 1 sampai y → disimpan di *x
   - menghitung hasil perkalian bilangan ganjil (2n-1) dari n=1 sampai y → disimpan di *z

   Parameter:
   - long long *x: pointer ke variabel hasil jumlah kuadrat
   - int y      : batas perhitungan
   - cpp_int *z : pointer ke variabel hasil perkalian bilangan ganjil (pakai big integer)
*/
void hitungMath(long long *x, int y, cpp_int *z) {
    *x = 0;   //inisialisasi
    *z = 1;   //inisialisasi 

    //looping dari 1 sampai y=20
    for (int n = 1; n <= y; ++n) {
        *x += (long long)n * n;   //tambahkan n^2 ke *x (jumlah kuadrat)
        *z *= (2 * n - 1);        //kalikan (2n - 1) ke *z (perkalian bilangan ganjil)
    }
}

int main() {
    long long x;    //variabel untuk menyimpan hasil jumlah kuadrat
    cpp_int z;      //variabel untuk menyimpan hasil perkalian bilangan ganjil
    int y = 20;    

    //manggil subprogram dengan parameter alamat variabel x dan z
    hitungMath(&x, y, &z);

    //menamampilkan hasil ke layar
    cout << "Hasil perhitungan dengan y = " << y << endl;
    cout << "*x (jumlah kuadrat) = " << x << endl;
    cout << "*z (perkalian ganjil) = " << z << endl;

    return 0;
}
