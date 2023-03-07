/*
Saya Riska Nurohmah [2109103] mengerjakan Latihan Praktikum 4 dalam mata kuliah Desain dan Pemrograman Berorientasi Objek
untuk keberkahanNya maka saya tidak melakukan kecurangan seperti yang telah dispesifikasikan. Aamiin.
*/

// Library
#include <iostream>
#include <string>

//  using standard namespace
using namespace std;

// Membuat kelas SivitasAkademik yang merupakan anak dari kelas Human
class SivitasAkademik : public Human
{
    // deklarasi atribut privat
private:
    string asal_univ;
    string email;

    // method public
public:
    // konstruktor
    SivitasAkademik()
    {
    }
    // method untuk mengset atribut asal_univ
    void setUniv(string asal_univ)
    {
        this->asal_univ = asal_univ;
    }
    // method untuk mengset atribut email
    void setEmail(string email)
    {
        this->email = email;
    }
    // method untuk mengambil nilai atribut asal_univ
    string getUniv()
    {
        return this->asal_univ;
    }
    // method untuk mengambil nilai atribut email
    string getEmail()
    {
        return this->email;
    }

    // destruktor
    ~SivitasAkademik()
    {
    }
};