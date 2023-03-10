# Saya Riska Nurohmah [2109103] mengerjakan Latihan Praktikum 4 dalam mata kuliah Desain dan Pemrograman Berorientasi Objek
# untuk keberkahanNya maka saya tidak melakukan kecurangan seperti yang telah dispesifikasikan. Aamiin.

# import class atau library Human
from Human import Human

# Membuat kelas SivitasAkademik yang merupakan anak dari kelas Human
# sehingga kelas SivitasAkademik dapat mengakses atribut dan method dari kelas Human


class SivitasAkademik(Human):
    # deklarasi atribut private
    __asal_univ = ""
    __email = ""

    # konstruktor
    def __init__(self, asal_univ="", email=""):
        self.__asal_univ = asal_univ
        self.__email = email

    # method setter dan getter
    def setUniv(self, asal_univ):
        self.__asal_univ = asal_univ

    def setEmail(self, email):
        self.__email = email

    def getUniv(self):
        return self.__asal_univ

    def getEmail(self):
        return self.__email
