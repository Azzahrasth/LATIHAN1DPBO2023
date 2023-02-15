<!-- Saya Azzahra Siti Hadjar NIM 2100901 mengerjakan soal Latihan 1
dalam mata kuliah Desain dan Pemrograman Berorientasi Objek
untuk keberkahanNya maka saya tidak melakukan kecurangan
seperti yang telah dispesifikasikan. Aamiin.  -->

<?php
// import file
require ('Crud.php');

$Crud = new Crud(); // Intansiasi objek crud
// membuat 4 objek mahasiswa untuk dimasukan ke dalam list menggunakan method create pada kelas crud
$Crud->create('2100901', 'Azzahra_Siti_Hadjar', 'Ilmu_Komputer', 'FPMIPA', 'foto\1.jpeg');
$Crud->create('2123410', 'Ara_Khairunnisa', 'Kimia', 'FPMIPA', 'foto\2.jpeg');
$Crud->create('2123410', 'Choi_Yeonjun', 'Arsitektur', 'FPTK', 'foto\5.jpeg');
$Crud->create('2133556', 'Zeni_Azkia', 'Bahasa_Korea', 'FPBS', 'foto\3.jpeg');
// menampilkan isi list menggunakan method read pada kelas crud
$Crud->read();
echo '<center><br> List Mahasiswa setelah di Update dan Dellete <br> </center>';
// mengupdate objek mahasiswa dengan nim '2100901' menggunakan method update pada kelas crud
$Crud->update('2100901', 'Azzahra_SH', 'Hukum', 'FPIPS', 'foto\4.jpeg');
// menghapus objek mahasiswa dengan nim '2123410' menggunakan method delete pada kelas crud
$Crud->delete('2123410');
// menampilkan isi list menggunakan method read pada kelas crud
$Crud->read();

?>