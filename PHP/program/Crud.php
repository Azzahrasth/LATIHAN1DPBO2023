<?php
// import file
require ('Mahasiswa.php');

// deklarasi kelas crud
class Crud {
     // atribute private
    private $arraymhs = array(); // list of objek mahasiswa

    /* konstruktor */
    public function __construct( ) {
    }

    // method create : membuat objek mahasiswa
    public function create($nim, $nama, $prodi, $fakultas, $foto){
        // instansiasi objek mahasiswa
        $mhs = new Mahasiswa($nim, $nama, $prodi, $fakultas, $foto);
         // masukan objek ke dalam list
        array_push($this->arraymhs, $mhs);
    }

    // method read : menampilkan isi list
    public function read(){
        // menampilkan isi list of objek mahasiswa dalam tabel
        echo "<center><table border='3'>";
        echo "<tr>
            <th> NIM </th>
            <th> Nama </th>
            <th> Prodi </th>
            <th> Fakultas </th>
            <th> Foto </th>
            </tr>";
            for ($i=0; $i < count($this->arraymhs); $i++) { 
                echo "<tr><td>";
                echo $this->arraymhs[$i]->get_nim();
                echo "</td><td>";
                echo $this->arraymhs[$i]->get_nama();
                echo "</td><td>";
                echo $this->arraymhs[$i]->get_prodi();
                echo "</td><td>";
                echo $this->arraymhs[$i]->get_fakultas();
                echo "</td><td>";
                echo "<img src='" . $this->arraymhs[$i]->get_foto(). "'style='width: 150px'>";
                echo "</td>";
                echo "</tr>";
            }
        echo "</table> </center>";
        }

    // method update : update objek yang ingin diubah
    public function update($nim, $nama, $prodi, $fakultas, $foto ){
        // perulangan untuk mencari objek yang akan di ubah berdasarkan nim yang diinput
        for ($i=0; $i < count($this->arraymhs); $i++) { 
            // apabila nim pada objek nya sama dengan nim inputan
            if ($this->arraymhs[$i]->get_nim() == $nim) {
                // update data yang ingin diubah dengan menggunakan method setter di kelas mahasiswa
                $this->arraymhs[$i]->set_nama($nama);
                $this->arraymhs[$i]->set_prodi($prodi);
                $this->arraymhs[$i]->set_fakultas($fakultas);
                $this->arraymhs[$i]->set_foto($foto);
                break;
            }
        }
    }

    // method delete : delete objek yang ingin dihapus
    public function delete($nim){
        // perulangan untuk mencari objek yang akan di hapus berdasarkan nim yang diinput
        for ($i=0; $i < count($this->arraymhs); $i++) { 
            // apabila nim pada objek nya sama dengan nim inputan
            if ($this->arraymhs[$i]->get_nim() == $nim) {
                array_splice($this->arraymhs, $i,1); // hapus objek pada list
              break;
            }
        }
    }
}

?>