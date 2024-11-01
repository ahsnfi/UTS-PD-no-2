#include <iostream>
using namespace std;

int main() {
    int jumMotor, jumMobil;
    int jamMasuk, jamKeluar;
    int tarifmobilperJam = 5000;
    int tarifmotorperJam = 2000;
    int durasiJam;
    int biayaParkir;

    cout << "Masukkan jumlah motor : ";
    cin >> jumMotor;
    cout << "Masukkan jumlah mobil : ";
    cin >> jumMobil;

    cout << "Input jam masuk (Format 24 jam): ";
    cin >> jamMasuk;
    cout << "Input jam keluar (Format 24 jam): ";
    cin >> jamKeluar;

    if (jamKeluar < jamMasuk) {
        durasiJam = (24 - jamMasuk) + jamKeluar;
    }
    else {
        durasiJam = jamKeluar - jamMasuk;
    }

    //rumus untuk menghitung biaya parkir
    biayaParkir = (tarifmobilperJam * jumMobil * durasiJam) +
        (tarifmotorperJam * jumMotor * durasiJam);

    //untuk menampilkan total biaya parkir 
    cout << "\nTotal biaya parkir: Rp " << biayaParkir << " (" << durasiJam << " jam)" << endl;

    return 0;
}