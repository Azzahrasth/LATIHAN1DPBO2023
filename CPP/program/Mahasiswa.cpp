// import library
#include <iostream>
#include <string>

// menggunakan standard namespace
using namespace std;

// deklarasi kelas mahasiswa
class Mahasiswa
{
    // atribut private
private:
    string nama, nim, prodi, fakultas;

public:
    /* konstruktor */

    // konstruktor tanpa parameter
    Mahasiswa()
    {
        // set isi atribut secara default
        this->nim = "";
        this->nama = "";
        this->prodi = "";
        this->fakultas = "";
    }

    // konstruktor dengan parameter
    Mahasiswa(string nim, string nama, string prodi, string fakultas)
    {
        // set isi atribut sesuai isi parameter
        this->nim = nim;
        this->nama = nama;
        this->prodi = prodi;
        this->fakultas = fakultas;
    }

    /* Getter dan Setter*/

    // Get nim
    string get_nim()
    {
        return this->nim;
    }

    // Set nim
    void set_nim(string nim)
    {
        this->nim = nim;
    }
    // Get nama
    string get_nama()
    {
        return this->nama;
    }

    // Set nama
    void set_nama(string nama)
    {
        this->nama = nama;
    }

    // Get prodi
    string get_prodi()
    {
        return this->prodi;
    }

    // Set prodi
    void set_prodi(string prodi)
    {
        this->prodi = prodi;
    }

    // Get fakultas
    string get_fakultas()
    {
        return this->fakultas;
    }

    // Set fakultas
    void set_fakultas(string fakultas)
    {
        this->fakultas = fakultas;
    }

    /* desktruktor */

    // default
    ~Mahasiswa() // desktruktor
    {
    }
};
