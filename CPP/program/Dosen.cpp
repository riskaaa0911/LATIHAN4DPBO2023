/*
Saya Riska Nurohmah [2109103] mengerjakan Latihan Praktikum 4 dalam mata kuliah Desain dan Pemrograman Berorientasi Objek
untuk keberkahanNya maka saya tidak melakukan kecurangan seperti yang telah dispesifikasikan. Aamiin.
*/

// Library
#include <iostream>
#include <string>

// using standard namespace
using namespace std;

// Membuat kelas Dosen yang merupakan anak dari kelas SivitasAkademik dan cucu dari kelas Human
class Dosen : public SivitasAkademik
{
    // deklarasi atribut privat
private:
    string nip;
    string fakultas;
    string prodi;
    string pend_terakhir;
    string keahlian;

    // deklarasi method public
public:
    // konstruktor
    Dosen()
    {
    }
    // method untuk mengset atribut nip
    void setNip(string nip)
    {
        this->nip = nip;
    }
    // method untuk mengset atribut fakultas
    void setFakultas(string fakultas)
    {
        this->fakultas = fakultas;
    }
    // method untuk mengset atribut prodi
    void setProdi(string prodi)
    {
        this->prodi = prodi;
    }
    // method untuk mengset atribut pend_terakhir
    void setPendTerakhir(string pend_terakhir)
    {
        this->pend_terakhir = pend_terakhir;
    }
    // method untuk mengset atribut keahlian
    void setKeahlian(string keahlian)
    {
        this->keahlian = keahlian;
    }
    // method untuk mengambil nilai atribut nip
    string getNip()
    {
        return this->nip;
    }
    // method untuk mengambil nilai atribut fakultas
    string getFakultas()
    {
        return this->fakultas;
    }
    // method untuk mengambil nilai atribut prodi
    string getProdi()
    {
        return this->prodi;
    }
    // method untuk mengambil nilai atribut pendTerakhir
    string getPendTerakhir()
    {
        return this->pend_terakhir;
    }
    // method untuk mengambil nilai atribut keahlian
    string getKeahlian()
    {
        return this->keahlian;
    }

    // destruktor
    ~Dosen()
    {
    }
};