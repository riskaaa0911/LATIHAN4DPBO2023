/*
Saya Riska Nurohmah [2109103] mengerjakan Latihan Praktikum 4 dalam mata kuliah Desain dan Pemrograman Berorientasi Objek
untuk keberkahanNya maka saya tidak melakukan kecurangan seperti yang telah dispesifikasikan. Aamiin.
*/

// Library
#include <iostream>
#include <string>

// using standard namespace
using namespace std;

// Membuat kelas Mahasiswa yang merupakan anak dari kelas Sivitas Akademik dan cucu dari kelas Human
class Mahasiswa : public SivitasAkademik
{
    // deklarasi atribut privat
private:
    string nim;
    string fakultas;

    // deklarasi method public
public:
    // konstruktor
    Mahasiswa()
    {
    }
    // method untuk mengset atribut nim
    void setNim(string nim)
    {
        this->nim = nim;
    }
    // method untuk mengset atribut fakultas
    void setFakultas(string fakultas)
    {
        this->fakultas = fakultas;
    }
    // method untuk mengambil nilai atribut nim
    string getNim()
    {
        return this->nim;
    }
    // method untuk mengambil nilai atribut fakultas
    string getFakultas()
    {
        return this->fakultas;
    }
    // destruktor
    ~Mahasiswa()
    {
    }
};
