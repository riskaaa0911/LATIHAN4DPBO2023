# Saya Riska Nurohmah [2109103] mengerjakan Latihan Praktikum 4 dalam mata kuliah Desain dan Pemrograman Berorientasi Objek
# untuk keberkahanNya maka saya tidak melakukan kecurangan seperti yang telah dispesifikasikan. Aamiin.

# import class atau library SivitasAkademik
from SivitasAkademik import SivitasAkademik

# Membuat kelas Mahasiswa yang merupakan anak dari kelas SivitasAkademik dan cucu dari kelas Human
# sehingga kelas Mahasiswa dapat mengakses atribut dan method dari kelas SivitasAkademik maupun HUman


class Mahasiswa(SivitasAkademik):
    # deklarasi atribut privat
    __nim = ""
    __fakultas = ""

    # konstruktor
    def __Init__(self, nim="", fakultas="", prodi=""):
        self.__nim = nim
        self.__fakultas = fakultas

    # method setter dan getter
    def setNim(self, nim):
        self.__nim = nim

    def setFakultas(self, fakultas):
        self.__fakultas = fakultas

    def getNim(self):
        return self.__nim

    def getFakultas(self):
        return self.__fakultas
