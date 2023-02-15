<?php
// deklarasi kelas mahasiswa
class Mahasiswa {
    // atribut private
    private $nim = '';
    private $nama = '';
    private $prodi = '';
    private $fakultas = '';
    private $foto = '';

    // konstruktor
    public function __construct( $nim = '', $nama = '' , $prodi = '', $fakultas = '',$foto='' ) {
        $this->nim = $nim;
        $this->nama = $nama;
        $this->prodi = $prodi;
        $this->fakultas = $fakultas;
        $this->foto = $foto;
    }
 /* Getter dan Setter */
    public function set_nim($nim){
        $this->nim = $nim;
    }

    public function get_nim(){
        return $this->nim;
    }
    
    public function set_nama($nama){
        $this->nama = $nama;
    }
    public function get_nama(){
        return $this->nama;
    }
    public function set_prodi($prodi){
        $this->prodi = $prodi;
    }

    public function get_prodi(){
        return $this->prodi;
    }
    
    public function set_fakultas($fakultas){
        $this->fakultas = $fakultas;
    }
    public function get_fakultas(){
        return $this->fakultas;
    }
    public function set_foto($foto){
        $this->foto = $foto;
    }
    public function get_foto(){
        return $this->foto;
    }

}

?>