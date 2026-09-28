#include <iostream>
#include <string>
using namespace std;

string satuan[] = {"nol","satu","dua","tiga","empat","lima","enam","tujuh","delapan","sembilan",
                    "sepuluh","sebelas","dua belas","tiga belas","empat belas","lima belas",
                    "enam belas","tujuh belas","delapan belas","sembilan belas"};
string puluhan[] = {"","","dua puluh","tiga puluh","empat puluh","lima puluh",
                     "enam puluh","tujuh puluh","delapan puluh","sembilan puluh"};

string terbilang(int n) {
    if (n == 100) {
        return "seratus";
    } else if (n < 20) {
        return satuan[n];
    } else {
        int sisa = n % 10;
        if (sisa == 0) return puluhan[n / 10];
        else return puluhan[n / 10] + " " + satuan[sisa];
    }
}

int main() {
    int angka;
    cout << "Masukkan angka (0-100): ";
    cin >> angka;

    cout << angka << " : " << terbilang(angka) << endl;

    return 0;
}