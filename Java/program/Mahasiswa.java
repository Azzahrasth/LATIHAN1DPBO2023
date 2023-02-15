// deklarasi kelas mahasiswa
public class Mahasiswa {
    // atribut private
    private String nim, nama, prodi, fakultas;

    /* konstruktor */

    // konstruktor tanpa parameter
    public Mahasiswa() {
        // set isi atribut secara default
        this.nim = "";
        this.nama = "";
        this.prodi = "";
        this.fakultas = "";
    }

    // konstruktor dengan parameter
    public Mahasiswa(String nim, String nama, String prodi, String fakultas) {
        // set isi atribut sesuai isi parameter
        this.nim = nim;
        this.nama = nama;
        this.prodi = prodi;
        this.fakultas = fakultas;
    }

    /* Getter dan Setter */

    // Get nim
    public String getNim() {
        return this.nim;
    }

    // set nim
    public void setNim(String nim) {
        this.nim = nim;
    }

    // Get nama
    public String getNama() {
        return this.nama;
    }

    // set nama
    public void setNama(String nama) {
        this.nama = nama;
    }

    // get prodi
    public String getProdi() {
        return this.prodi;
    }

    // set prodi
    public void setProdi(String prodi) {
        this.prodi = prodi;
    }

    // get fakultas
    public String getFakultas() {
        return this.fakultas;
    }

    // set fakultas
    public void setFakultas(String fakultas) {
        this.fakultas = fakultas;
    }
}
