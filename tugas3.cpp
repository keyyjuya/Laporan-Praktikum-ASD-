//Kezia Adelina Tamba 
//124140046

#include <iostream>
using namespace std;

//fungsi untuk membalik isi array menggunakan pointer
//parameter: ptr → pointer ke array,  n   → ukuran array
void balikArray(int *ptr, int n) {
    // Tukar elemen dari depan dengan belakang
    for (int i = 0; i < n / 2; i++) {
        int temp = *(ptr + i);                 //simpan elemen depan
        *(ptr + i) = *(ptr + (n - 1 - i));     //stukar dengan elemen belakang
        *(ptr + (n - 1 - i)) = temp;           //masukkan kembali nilai awal
    }
}

int main() {
    int n;

    cout << "Masukkan ukuran array: ";    //input ukuran array
    cin >> n;

    int arr[n];        //deklarasi array
    int *ptr = arr;    //pointer menunjuk ke array

    cout << "Masukkan elemen array: ";
    for (int i = 0; i < n; i++) {
        cin >> *(ptr + i);   //input pakai pointer aritmatika
    }

    //nyeetak array sebelum dibalik
    cout << "Array sebelum dibalik: ";
    for (int i = 0; i < n; i++) {
        cout << *(ptr + i) << " ";
    }
    cout << endl;
    
    balikArray(ptr, n);    //manggil fungsi untuk membalik array


    //cetak array sesudah dibalik
    cout << "Array sesudah dibalik: ";
    for (int i = 0; i < n; i++) {
        cout << *(ptr + i) << " ";
    }
    cout << endl;

    return 0;
}
