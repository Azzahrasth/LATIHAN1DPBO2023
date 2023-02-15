/* Saya Azzahra Siti Hadjar NIM 2100901 mengerjakan soal Latihan 1
dalam mata kuliah Desain dan Pemrograman Berorientasi Objek
untuk keberkahanNya maka saya tidak melakukan kecurangan
seperti yang telah dispesifikasikan. Aamiin. */

// import library dan file
#include <bits/stdc++.h>
#include "Crud.cpp"

// menggunakan standarad namespace
using namespace std;

int main()
{
    // deklarasi variabel
    Crud crud;                         // Intansiasi objek crud
    string nama, nim, prodi, fakultas; // variabel untuk menampung string inputan
    int m;                             // variabel untuk memilih menu crud
    do
    {
        // menampilkan menu
        cout << "\nMenu : " << '\n';
        cout << "0. Exit" << '\n';
        cout << "1. Create" << '\n';
        cout << "2. Read" << '\n';
        cout << "3. Update" << '\n';
        cout << "4. Delete" << '\n';

        cout << "\nSilahkan pilih menu yang diinginkan : ";
        cin >> m; // input menu pilihan

        if (m == 1) // jika menu yang dipilih adalah 1
        {
            // meminta masukan data objek mahasiswa
            cout << "\nMasukan data mahasiswa : \n";
            cout << "NIM: ";
            cin >> nim;
            cout << "Nama: ";
            cin >> nama;
            cout << "Prodi: ";
            cin >> prodi;
            cout << "Fakultas: ";
            cin >> fakultas;
            // memanggil method create yang ada pada objek crud
            crud.create(nim, nama, prodi, fakultas);
        }
        else if (m == 2) // jika menu yang dipilih adalah 2
        {
            // memanggil method read yang ada pada objek crud
            crud.read();
        }
        else if (m == 3) // jika menu yang dipilih adalah 3
        {
            // input nim mahasiswa yang data nya akan di update
            cout << "\nMasukan NIM yang akan di update : ";
            cin >> nim;
            // memanggil method update yang ada pada objek crud
            crud.update(nim);
        }
        else if (m == 4) // jika menu yang dipilih adalah 4
        {
            // input nim mahasiswa yang data nya akan di delete
            cout << "\nMasukan NIM yang akan di delete : ";
            cin >> nim;
            // memanggil method delete yang ada pada objek crud
            crud.del(nim);
        }
        else if (m == 0) // jika menu yang dipilih adalah 0
        {
            cout << "\nTerima Kasih" << '\n';
        }
    } while (m != 0); // perulangan berjalan selama user tidak menginput 0

    return 0;
}