//Kezia Adelina Tamba 
//124140046

#include <iostream>
using namespace std;

//fungsi untuk menghitung jumlah bilangan ganjil sampai y
void jumlahGanjil(int *x, int y) {
    *x = 0; //inisialisasi hasil = 0

    for (int i = 1; i <= y; i++) {     //loop dari 1 sampai 20
        if (i % 2 != 0) {  //mengecek apakah i bilangan ganjil
            *x += i; //k alau ganjil, tambahkan ke hasil
        }
    }
}

int main() {
    int hasil;     
    int y = 20; //batas atas perhitungan= 20

    jumlahGanjil(&hasil, y); //memanggil fungsi, kirim alamat variabel hasil dan nilai y

    cout << "Jumlah bilangan ganjil dari 1 sampai " << y << ": " << hasil << endl;     //menampilkn hasil penjumlahan

    return 0;
}
