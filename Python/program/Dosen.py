# Saya Riska Nurohmah [2109103] mengerjakan Latihan Praktikum 4 dalam mata kuliah Desain dan Pemrograman Berorientasi Objek
# untuk keberkahanNya maka saya tidak melakukan kecurangan seperti yang telah dispesifikasikan. Aamiin.

# import class atau library SivitasAkademik
from SivitasAkademik import SivitasAkademik

# Membuat kelas Dosen yang merupakan anak dari kelas SivitasAkademik dan cucu dari Human
# sehingga kelas Dosen dapat mengakses atribut dan method dari kelas Sivitasakademik maupun Human


class Dosen(SivitasAkademik):
    # deklarasi atribut privat
    __nip = ""
    __fk = ""  # fakultas
    __pendTerakhir = ""
    __keahlian = ""

    # konstruktor
    def __Init__(self, nip="", fk="", pendTerakhir="", keahlian=""):
        self.__nip = nip
        self.__fk = fk
        self.__pendTerakhir = pendTerakhir
        self.__keahlian = keahlian

    # method setter dan getter
    def setNip(self, nip):
        self.__nip = nip

    def setFk(self, fk):
        self.__fk = fk

    def setPendTerakhir(self, pendTerakhir):
        self.__pendTerakhir = pendTerakhir

    def setKeahlian(self, keahlian):
        self.__keahlian = keahlian

    def getNip(self):
        return self.__nip

    def getFk(self):
        return self.__fk

    def getPendTerakhir(self):
        return self.__pendTerakhir

    def getKeahlian(self):
        return self.__keahlian
