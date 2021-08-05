#include <iostream>

using namespace std;

int main() {

    float a, b, hasil;
    char aritmatika;

    cout << "Selamat datang di program calculator! \n" << endl;

    // Masukkan input dari user
    cout << "Masukkan nilai pertama: ";
    cin >> a;
    cout << "Pilih operator +, -, /, x: ";
    cin >> aritmatika;
    cout << "Masukkan nilai kedua: ";
    cin >> b;

    cout << "\nHasil perhitungan: " << a << " " << aritmatika << " " << b << " = ";

    if(aritmatika == '+') {
        hasil = a + b;
        cout << hasil << endl;
    } else if(aritmatika == '-') {
        hasil = a - b;
        cout << hasil << endl;
    } else if(aritmatika == '/') {
        hasil = a / b;
        cout << hasil << endl;
    } else if(aritmatika == 'x') {
        hasil = a * b;
        cout << hasil << endl;
    } else {
        cout << "Operator yang anda masukkan salah!" << endl;
    }


    cin.get();
    return 0;
}