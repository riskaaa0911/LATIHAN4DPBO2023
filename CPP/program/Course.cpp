/*
Saya Riska Nurohmah [2109103] mengerjakan Latihan Praktikum 4 dalam mata kuliah Desain dan Pemrograman Berorientasi Objek
untuk keberkahanNya maka saya tidak melakukan kecurangan seperti yang telah dispesifikasikan. Aamiin.
*/

// Library
#include <iostream>
#include <string>

// using standard namespace
using namespace std;

// Membuat kelas Course
class Course
{
    // deklarasi atribut privat
private:
    string namaMatkul;

    // deklarasi method public
public:
    // konstruktor
    Course()
    {
    }

    // konstruktor dengan parameter
    Course(string namaMatkul)
    {
        this->namaMatkul = namaMatkul;
    }

    // method untuk mengset atribut namaMatkul
    void setNamaMatkul(string namaMatkul)
    {
        this->namaMatkul = namaMatkul;
    }

    // method untuk mengambil nilai atribut namaMatkul
    string getNamaMatkul()
    {
        return this->namaMatkul;
    }

    // destructor
    ~Course()
    {
    }
};