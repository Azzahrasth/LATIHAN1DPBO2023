# class declaration
class Mahasiswa:

    # atribut private
    __nim = ""
    __nama = ""
    __prodi = ""
    __fakultas = ""

   # konstruktor
    def __init__(self, nim="", nama="", prodi="", fakultas=""):
        self.__nim = nim
        self.__nama = nama
        self.__prodi = prodi
        self.__fakultas = fakultas

    # Getter and Setter

    def get_nim(self):
        return self.__nim

    def set_nim(self, nim):
        self.__nim = nim

    def get_nama(self):
        return self.__nama

    def set_nama(self, nama):
        self.__nama = nama

    def get_prodi(self):
        return self.__prodi

    def set_prodi(self, prodi):
        self.__prodi = prodi

    def get_fakultas(self):
        return self.__fakultas

    def set_fakultas(self, fakultas):
        self.__fakultas = fakultas
