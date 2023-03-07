/*
Saya Riska Nurohmah [2109103] mengerjakan Latihan Praktikum 4 dalam mata kuliah Desain dan Pemrograman Berorientasi Objek
untuk keberkahanNya maka saya tidak melakukan kecurangan seperti yang telah dispesifikasikan. Aamiin.
*/

// library
#include <bits/stdc++.h>
#include "Human.cpp"
#include "SivitasAkademik.cpp"
#include "Mahasiswa.cpp"
#include "Dosen.cpp"
#include "ProgramStudi.cpp"

int main()
{
    list<Mahasiswa> list_mhs; // deklarasi list dari objek Mahasiswa
    list<Dosen> list_dosen;   // deklarasi list dari objek Dosen

    Mahasiswa mhs; // instansiasi objek Mahasiswa

    // set atribut dari objek Mahasiswa
    // Karena Mahasiswa merupakan anak dari SivitasAkademik dan cucu dari Human
    // maka dapat mengakses atribut di kelas SivitasAkademik dan Human
    mhs.setNik("12345678");
    mhs.setNama("Riska Nurohmah");
    mhs.setGender("Female");
    mhs.setUniv("UPI");
    mhs.setEmail("riskanurohmah@upi.edu");
    mhs.setNim("2109103");
    mhs.setFakultas("FPMIPA");
    mhs.setProdi("Ilkom");
    list_mhs.push_back(mhs); // memasukan data ke list mahasiswa

    Mahasiswa mhs2; // instansiasi objek Mahasiswa kedua

    // set atribut dari objek Mahasiswa kedua
    mhs2.setNik("65432789");
    mhs2.setNama("Arfan Juliandri");
    mhs2.setGender("Male");
    mhs2.setUniv("UPI");
    mhs2.setEmail("arfan01@upi.edu");
    mhs2.setNim("2109102");
    mhs2.setFakultas("FPMIPA");
    list_mhs.push_back(mhs2); // memasukan data ke list mahasiswa

    // menampilkan data dari list Mahasiswa
    int i = 0;
    cout << "==========Data Mahasiswa==========" << '\n';
    for (list<Mahasiswa>::iterator it = list_mhs.begin(); it != list_mhs.end(); it++)
    {
        cout << (i + 1) << ".";
        cout << "NIK         : " << it->getNik() << endl;
        cout << "  Nama        : " << it->getNama() << endl;
        cout << "  Gender      : " << it->getGender() << endl;
        cout << "  Universitas : " << it->getUniv() << endl;
        cout << "  Email       : " << it->getEmail() << endl;
        cout << "  NIM         : " << it->getNim() << endl;
        cout << "  Fakultas    : " << it->getFakultas() << endl;

        i++;
    }

    Dosen dosen1; // instansiasi objek Dosen
    // set atribut dari objek Dosen
    // Karena Dosen merupakan anak dari SivitasAkademik dan cucu dari Human
    // maka dapat mengakses atribut di kelas SivitasAkademik dan Human
    dosen1.setNik("87654321");
    dosen1.setNama("Yudi");
    dosen1.setGender("Male");
    dosen1.setUniv("UPI");
    dosen1.setEmail("yudi@upi.edu");
    dosen1.setNip("135790246");
    dosen1.setFakultas("FPMIPA");
    dosen1.setPendTerakhir("S2");
    dosen1.setKeahlian("Data Mining");
    // memasukan data ke list dosen
    list_dosen.push_back(dosen1);

    Dosen dosen2; // instansiasi objek Dosen kedua
    dosen2.setNik("87654320");
    dosen2.setNama("Ani");
    dosen2.setGender("Female");
    dosen2.setUniv("UPI");
    dosen2.setEmail("ani@upi.edu");
    dosen2.setNip("135790247");
    dosen2.setFakultas("FPMIPA");
    dosen2.setPendTerakhir("S2");
    dosen2.setKeahlian("Pemrograman Web");
    // memasukan data ke list dosen
    list_dosen.push_back(dosen2);

    // menampilkan data dari list Dosen
    i = 0;
    cout << "==========Data Dosen==========" << '\n';
    for (list<Dosen>::iterator it = list_dosen.begin(); it != list_dosen.end(); it++)
    {
        cout << (i + 1) << ".";
        cout << "NIK         : " << it->getNik() << endl;
        cout << "  Nama        : " << it->getNama() << endl;
        cout << "  Gender      : " << it->getGender() << endl;
        cout << "  Universitas : " << it->getUniv() << endl;
        cout << "  Email       : " << it->getEmail() << endl;
        cout << "  NIP         : " << it->getNip() << endl;
        cout << "  Fakultas    : " << it->getFakultas() << endl;
        cout << "  PendAkhir   : " << it->getPendTerakhir() << endl;
        cout << "  Keahlian    : " << it->getKeahlian() << endl;
        i++;
    }

    // deklarasi list matkul(mata kuliah)
    list<Course> list_matkul;
    // instansiasi objek Course dengan argumen dan memasukannya kedalam list matkul
    Course course1("Data Maining");
    list_matkul.push_back(course1);
    Course course2("Sistem Basis Data");
    list_matkul.push_back(course2);
    Course course3("Sistem Kontrol");
    list_matkul.push_back(course3);
    Course course4("Kalkulus");
    list_matkul.push_back(course4);
    Course course5("Kecerdasan Buatan");
    list_matkul.push_back(course5);

    // instansiasi objek ProgramStudi dengan argumen
    ProgramStudi ps1("Ilmu Komputer", "204", list_matkul);

    // menampilkan data pada atribut-atribut ProgramStudi
    cout << "\n==========Data Prodi==========\n"
         << endl;
    cout << "Nama Prodi   : " << ps1.getNamaProdi() << endl;
    cout << "Kode         : " << ps1.getKode() << endl;
    cout << "Daftar Matkul:" << endl;
    ps1.printListCourse(); // memanggil method untuk menampilkan list Course pada objek ProgramStudi

    return 0;
}
