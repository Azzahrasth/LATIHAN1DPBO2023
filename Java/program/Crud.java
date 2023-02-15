import java.util.ArrayList;
import java.util.Scanner;

// deklarasi kelas crud
public class Crud {

    // atribute private
    private ArrayList<Mahasiswa> list; // list of objek mahasiswa

    /* konstruktor */
    public Crud() {
        list = new ArrayList<>();
    }

    // method create : membuat objek mahasiswa
    public void create(String nim, String nama, String prodi, String fakultas) {
        // instansiasi objek mahasiswa
        Mahasiswa mhs = new Mahasiswa(nim, nama, prodi, fakultas);
        // masukan objek ke dalam list
        list.add(mhs);
    }

    // method read : menampilkan isi list
    public void read() {
        // menampilkan isi list of objek mahasiswa
        System.out.println("\nList Mahasiswa : \n");
        int i;
        for (i = 0; i < list.size(); i++) {
            System.out
                    .println(Integer.toString(i + 1) + ".| " + list.get(i).getNim() + " | "
                            + list.get(i).getNama() + " | " + list.get(i).getProdi() + " | "
                            + list.get(i).getFakultas());
        }
    }

    // method update : update objek yang ingin diubah
    public void update(String nim) {
        Scanner sc = new Scanner(System.in);

        // deklrasi variabel untuk menampung nama, prodi, dan fakultas dari data yang
        // akan diubah
        String nama, prodi, fakultas;

        // perulangan untuk mencari objek yang akan di ubah berdasarkan nim yang
        // diinput
        for (int i = 0; i < list.size(); i++) {
            // apabila nim pada objek nya sama dengan nim inputan
            if (nim.equals(list.get(i).getNim())) {
                // input isi variabel nama prodi fakultas
                System.out.println('\n' + "Masukan data yang ingin diubah !");
                System.out.println("Nama: ");
                nama = sc.next();
                System.out.println("Prodi: ");
                prodi = sc.next();
                System.out.println("Fakultas: ");
                fakultas = sc.next();

                // update data yang ingin diubah dengan menggunakan method setter di kelas
                // mahasiswa
                list.get(i).setNama(nama);
                list.get(i).setProdi(prodi);
                list.get(i).setFakultas(fakultas);
                break;
            }
        }
    }

    // method delete : delete objek yang ingin dihapus
    public void delete(String nim) {
        // perulangan untuk mencari objek yang di akan di hapus berdasarkan nim yang
        // diinput
        for (int i = 0; i < list.size(); i++) {
            // apabila nim pada objek nya sama dengan nim inputan
            if (nim.equals(list.get(i).getNim())) {
                list.remove(list.get(i)); // hapus objek pada list
                break;
            }
        }
    }
}
