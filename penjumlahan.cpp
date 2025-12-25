//=============================
//Nama : Ahmad Rasyid Fadhilah
//NIM : 2500018042
//Kelas : A
//Quiz : Penjumlahan
//Tanggal : 25-12-2025
//=============================

#include <iostream>
using namespace std;

// Perbaiki fungsi rekursif penjumlahan ini!
int jumlah(int n) {
    if (n == 1) {  
        return 1;
    }
    return n + jumlah(n - 1);
    //Kesalahan pertama adalah karena menggunakan * (perkalian), sehingga hasilnya adalah faktorial (n!), bukan penjumlahan
}

int main() {
    int angka;
    cout << "Masukkan angka: ";
    cin >> angka;
    
    cout << "Jumlah dari 1 hingga " << angka << " adalah: " << jumlah(angka) << endl;
    //Kesalahan kedua yaitu pemanggilan fungsi di main salah, seharusnya "jumlah(angka)" -1 nya dihilangkan
    
    return 0;
}
