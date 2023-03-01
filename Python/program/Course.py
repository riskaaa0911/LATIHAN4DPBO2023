# Saya Riska Nurohmah [2109103] mengerjakan Latihan Praktikum 4 dalam mata kuliah Desain dan Pemrograman Berorientasi Objek
# untuk keberkahanNya maka saya tidak melakukan kecurangan seperti yang telah dispesifikasikan. Aamiin.


class Course:
    # deklarasi atribut private
    __namaMatkul = ""

    # konstruktor
    def __init__(self, namaMatkul=""):
        self.__namaMatkul = namaMatkul

    # method setter dan getter
    def setNamaMatkul(self, namaMatkul):
        self.__namaMatkul = namaMatkul

    def getNamaMatkul(self):
        return self.__namaMatkul
