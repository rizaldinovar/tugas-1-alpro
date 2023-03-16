/*
    Program penjumlahan, pengurangan, perkalian, total, rata-rata
    Rizaldinova Ramdhani
    A11.2022.14277
    A11.4207
*/

#include <iostream>

using namespace std;

int penjumlahan(int a, int b){
    return a+b;
}

int pengurangan(int a, int b){
    return a-b;
}

int perkalian(int a, int b){
    return a*b;
}

int total(int arr[], int x){
    int hasil=0;
    for(int i=0; i<x; i++){
        hasil += arr[i];
    }
    return hasil;
}

float rata(int arr[], int x){
    float hasil=0;
    for(int i=0; i<x; i++){
        hasil += arr[i];
    }
    return hasil /= x;
}


int main()
{
    int a, b, x;

    cout << "Program Penjumlahan, Pengurangan, Perkalian 2 bilangan" << endl;
    cout << "======================================================" << endl;
    cout << "Masukkan 2 bilangan untuk melanjutkan program : ";
    cin >> a;
    cin >> b;
    cout << "=====================================================" << endl;
    cout << "Penjumlahan 2 bilangan : " << a << " + " << b << " = " << penjumlahan(a,b) << endl;
    cout << "Pengurangan 2 bilangan : " << a << " - " << b << " = " << pengurangan(a,b) << endl;
    cout << "Perkalian 2 bilangan : " << a << " * " << b << " = " << perkalian(a,b) << endl;
    cout << "=====================================================" << endl;
    cout << "Program menghitung Total dan Rata-rata Element Array" << endl;
    cout << "=====================================================" << endl;
    cout << "Masukkan jumlah element array yang akan diinput : ";
    cin >> x;
    int arr[x];
    for(int i=0; i<x; i++){
        cout << "Masukkan array ke- [" << i << "] = ";
        cin >> arr [i];
    }
    cout << "====================================================" << endl;
    cout << "Total bilangan array yang diinput\t\t: " << total(arr,x) << endl;
    cout << "Rata-rata bilangan array yang diinput \t\t; " << rata(arr,x) << endl;

    return 0;
}
