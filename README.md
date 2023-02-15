# LATIHAN1DPBO2023

-- Desain Program --
Terdapat 2 Kelas yaitu kelas Mahasiswa dan Crud

1. Kelas Mahasiswa 
memiliki private atribut betipe data string untuk menyimpan data nim, nama, prodi, fakultas dari mahasiswa  (khusus php terdapat foto). Pada program ini nim dijadikan sebagai atribut primary key pada data mahasiswa.

memiliki public method setter dan getter untuk nim, nama, prodi dan fakultas. Setter untuk menginisialisasi atribut sedangkan getter untuk mereturn nilai atribut pada kelas

2. Kelas Crud
memiliki private atribut bertipe data list of object Mahasiswa untuk menyimpan objek-objek mahasiswa

memiliki public method :
- CREATE : membuat objek mahasiswa, lalu memasukan objek tersebut ke dalam list
- READ : menampilkan isi dari list of object mahasiswa
- UPDATE : merubah/mengupdate data nama, prodi, fakultas, dan foto mahasiswa dari objek mahasiswa yang dipilih (nim dijadikan patokan dalam memilih objek yang akan di update)
- DELETE : menghapus objek mahasiswa yang dipilih (nim dijadikan patokan dalam memilih objek yang akan di hapus)

-- Penjelasan Alur --
Pertama, intansiasi objek Crud untuk membuat list of objek mahasiswa.
Lalu program akan menampilkan menu CRUD (Create, Read, Update, Dellete), dan user diminta untuk menginput nilai integer untuk memilih menu yang diinginkan
Jika user menginput 1 maka akan dilakukan proses create objek mahasiswa, user akan diminta untuk menginputkan data objek mahasiswa berupa nim, nama, prodi dan fakultas. Selanjutnya program memanggil method create pada crud
Jika user menginput 2 maka akan dilakukan proses read/menampilkan list of objek mahasiswa, lalu program memanggil method read pada crud
Jika user menginput 3 maka akan dilakukan proses update objek mahasiswa, user akan diminta untuk menginputkan data objek mahasiswa berupa nim mahasiswa yang data nya akan diubah. Selanjutnya program memanggil method update pada crud, dalam method update ini apabila nim yang akan diubah ditemukan pada list maka user pelu menginputkan data mahasiswa berupa nama, prodi, fakultas dan foto yang terbaru
Jika user menginput 4 maka akan dilakukan proses delete objek mahasiswa, user akan diminta untuk menginputkan data objek mahasiswa berupa nim mahasiswa yang objek nya akan di hapus dari list. Selanjutnya program memanggil method delete pada crud.
Jika user menginput 0 maka keluar dari program

-- Dokumentasi saat Program  di Jalankan --
![1](https://user-images.githubusercontent.com/100898963/219065544-88980119-c0d8-493c-a78a-c4be902fbdc5.jpg)
![2](https://user-images.githubusercontent.com/100898963/219065557-5c449f36-7d21-46c3-944e-f4ac786ae268.jpg)
![3](https://user-images.githubusercontent.com/100898963/219065562-5ad61f1a-00bd-48b3-8062-2287fae1cfe8.jpg)
![4](https://user-images.githubusercontent.com/100898963/219065565-c84ece92-c6e3-4b7a-8823-be9257b1e9b7.jpg)
![5](https://user-images.githubusercontent.com/100898963/219065571-8c153070-37d9-4dec-b218-859fc724cfbd.jpg)

