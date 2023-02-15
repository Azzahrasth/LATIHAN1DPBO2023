# import class file
from Mahasiswa import Mahasiswa

# deklarasi kelas crud


class Crud:
    # atribute private
    __list = []  # list of objek mahasiswa

    # konstruktor
    def __init__(self):
        self.__list = []

    # method create: membuat objek mahasiswa
    def create(self, nim, nama, prodi, fakultas):
        # instansiasi objek mahasiswa, lalu masukan objek ke dalam list
        self.__list.append(
            Mahasiswa(nim, nama, prodi, fakultas))

    # method read: menampilkan isi list
    def read(self):
        #    menampilkan isi list of objek mahasiswa
        print("\nList Mahasiswa : \n")
        i = 0
        for mhs in self.__list:
            print(str(i+1)+".| ", mhs.get_nim(), " | ", mhs.get_nama(),
                  " | ", mhs.get_prodi(), " | ", mhs.get_fakultas(), " | ")
            i += 1

    # method update: update objek yang ingin diubah
    def update(self, nim):
        # perulangan untuk mencari objek yang  akan di ubah berdasarkan nim yang diinput
        for mhs in self.__list:
            # apabila nim pada objek nya sama dengan nim inputan
            if (mhs.get_nim() == nim):
                # input isi variabel nama prodi fakultas
                print("\nMasukan data yang ingin diubah !")
                print("Nama: ")
                nama = str(input())
                print("Prodi: ")
                prodi = str(input())
                print("Fakultas: ")
                fakultas = str(input())
                # update data yang ingin diubah dengan menggunakan method setter di kelas mahasiswa
                mhs.set_nama(nama)
                mhs.set_prodi(prodi)
                mhs.set_fakultas(fakultas)
                break

    # method delete: delete objek yang ingin dihapus
    def delete(self, nim):
        # perulangan untuk mencari objek yang akan di hapus berdasarkan nim yang diinput
        for mhs in self.__list:
            # apabila nim pada objek nya sama dengan nim inputan
            if (mhs.get_nim() == nim):
                # hapus objek pada list
                self.__list.remove(mhs)
                break
