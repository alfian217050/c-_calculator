#include <iostream>

using namespace std;

int main() {

    float a, b, hasil;
    char aritmatika;

    cout << "Selamat datang di program calculator!\n" << endl;
    
    // Masukkan input dari user
    cout << "Masukkan nilai pertama: ";
    cin >> a;
    cout << "Pilih operator +, -, /, x: ";
    cin >> aritmatika;
    cout << "Masukkan nilai kedua: ";
    cin >> b;

    // Menampilkan hasil
    cout << "Hasil perhitungan: " << a << " " << aritmatika << " " << b << " = ";

    // (switch) jika aritmatika ... 
    switch (aritmatika){
        case '+':
            hasil = a + b;
            cout << hasil << endl;
            break;
        case '-':
            hasil = a - b;
            cout << hasil << endl;
            break;
        case '/':
            hasil = a / b;
            cout << hasil << endl;
            break;
        case 'x':
            hasil = a * b;
            cout << hasil << endl;
            break;
        default:
            cout << "Operator yang anda masukkan salah!" << endl;
            break;
    }

    cin.get();
    return 0;
}