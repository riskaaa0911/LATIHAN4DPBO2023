# Saya Riska Nurohmah [2109103] mengerjakan Latihan Praktikum 4 dalam mata kuliah Desain dan Pemrograman Berorientasi Objek
# untuk keberkahanNya maka saya tidak melakukan kecurangan seperti yang telah dispesifikasikan. Aamiin.

# import class atau library Course
from Course import Course

# ProgramStudi has a Course


class ProgramStudi:
    # deklarasi atribut private
    __namaProdi = ""
    __kode = ""
    # __course = Course()

    # konstruktor
    def __init__(self, namaProdi, kode, course):
        self.__namaProdi = namaProdi
        self.__kode = kode
        self.__course = course

    # method setter dan getter
    def setNamaProdi(self, namaProdi):
        self.__namaProdi = namaProdi

    def setKode(self, kode):
        self.__kode = kode

    def setCourse(self, course):
        self.__course = course

    def getNamaProdi(self):
        return self.__namaProdi

    def getKode(self):
        return self.__kode

    def getCourse(self):
        return self.__course
