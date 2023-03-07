/*
Saya Riska Nurohmah [2109103] mengerjakan Latihan Praktikum 4 dalam mata kuliah Desain dan Pemrograman Berorientasi Objek
untuk keberkahanNya maka saya tidak melakukan kecurangan seperti yang telah dispesifikasikan. Aamiin.
*/

// Library
#include <list>
#include <iostream>
#include <string>
#include "Course.cpp"
// ProgramStudi has a Course

// using standard namespace
using namespace std;

// Membuat kelas ProgramStudi
class ProgramStudi
{
    // deklarasi atribut privat
private:
    string namaProdi;
    string kode;
    list<Course> course;

    // deklarasi method public
public:
    // konstruktor
    ProgramStudi()
    {
    }

    // konstruktor dengan parameter
    ProgramStudi(string namaProdi, string kode, list<Course> course)
    {
        this->namaProdi = namaProdi;
        this->kode = kode;
        this->course = course;
    }

    // method untuk mengset atribut namaProdi
    void setNamaProdi(string namaProdi)
    {
        this->namaProdi = namaProdi;
    }
    // method untuk mengset atribut kode
    void setKode(string kode)
    {
        this->kode = kode;
    }
    // method untuk mengset list dari objek Course
    void setCourse(list<Course> course)
    {
        this->course = course;
    }
    // method untuk mengambil nilai atribut namaProdi
    string getNamaProdi()
    {
        return this->namaProdi;
    }
    // method untuk mengambil nilai atribut kode
    string getKode()
    {
        return this->kode;
    }
    // method untuk mengambil nilai dari list dari objek Course
    list<Course> getCourse()
    {
        return this->course;
    }
    // method untuk menampilkan list dari objek Course
    void printListCourse()
    {
        int i = 1;
        for (auto it = course.begin(); it != course.end(); ++it)
        {
            cout << i << ". " << it->getNamaMatkul() << endl;
            i++;
        }
    }

    // destruktor
    ~ProgramStudi()
    {
    }
};