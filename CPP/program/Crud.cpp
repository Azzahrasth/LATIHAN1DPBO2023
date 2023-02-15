// import library dan file
#include <iostream>
#include <string>
#include "Mahasiswa.cpp"

// menggunakan standarad namespace
using namespace std;

// deklarasi kelas crud
class Crud
{
    // atribute private
private:
    list<Mahasiswa> llist; // list of objek mahasiswa

public:
    /* konstruktor tanpa parameter */
    Crud()
    {
    }

    // method create : membuat objek mahasiswa
    void create(string nim, string nama, string prodi, string fakultas)
    {
        // instansiasi objek mahasiswa, lalu masukan objek ke dalam list
        llist.push_back(Mahasiswa(nim, nama, prodi, fakultas));
    }

    // method read : menampilkan isi list
    void read()
    {
        // menampilkan isi list of objek mahasiswa
        cout << "\nList Mahasiswa : " << '\n';
        int i = 0;
        for (list<Mahasiswa>::iterator it = llist.begin(); it != llist.end(); it++)
        {
            cout << (i + 1) << ".| " << it->get_nim() << " | " << it->get_nama() << " | " << it->get_prodi() << " | " << it->get_fakultas() << '\n';
            i++;
        }
    }

    // method update : update objek yang ingin diubah
    void update(string nim)
    {
        // deklrasi variabel untuk menampung nama, prodi, dan fakultas dari data yang akan diubah
        string nama, prodi, fakultas;

        // perulangan untuk mencari objek yang akan  diubah berdasarkan nim yang diinput
        for (list<Mahasiswa>::iterator it = llist.begin(); it != llist.end(); it++)
        {
            // apabila nim pada objek nya sama dengan nim inputan
            if (nim == it->get_nim())
            {
                // input isi variabel nama prodi fakultas
                cout << "\nMasukan data yang ingin diubah !\n";

                cout << "Nama: ";
                cin >> nama;
                cout << "Prodi: ";
                cin >> prodi;
                cout << "Fakultas: ";
                cin >> fakultas;

                // update data objek yang ingin diubah dengan menggunakan method setter di kelas
                // mahasiswa
                it->set_nama(nama);
                it->set_prodi(prodi);
                it->set_fakultas(fakultas);
                break;
            }
        }
    }
    // method delete : delete objek yang ingin dihapus
    void del(string nim)
    {
        // perulangan untuk  mencari objek yang akan di hapus berdasarkan nim yang diinput
        for (list<Mahasiswa>::iterator it = llist.begin(); it != llist.end(); it++)
        {
            // apabila nim pada objek nya sama dengan nim inputan
            if (nim == it->get_nim())
            {
                llist.erase(it); // hapus objek pada list
                break;
            }
        }
    }

    ~Crud()
    {
    }
};
