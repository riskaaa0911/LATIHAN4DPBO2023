# LATIHAN4DPBO2023
## Janji
Saya Riska Nurohmah [2109103] mengerjakan Latihan Praktikum 4 dalam mata kuliah Desain dan Pemrograman Berorientasi Objek untuk keberkahanNya maka saya tidak melakukan kecurangan seperti yang telah dispesifikasikan. Aamiin.
## Desain Program
![latprak4 drawio](https://user-images.githubusercontent.com/119839421/223437558-f02c6290-0f0f-4cad-a78e-fdf6a80b5640.png)

Pada program ini terdapat 6 Class yang semua atributnya bersifat private yaitu:
1. Class Human, memiliki atribut nik, nama, dan gender.
2. Class SivitasAkademik, memiliki atribut asal_univ dan email. Class SivitasAkademik merupakan anak dari Class Human, karena SivitasAkademik adalah manusia. Oleh karena itu, SivitasAkademik dapat mengakses method dari Class Human.
3. Class Dosen, memiliki atribut nip, fakultas, pend_terakhir, dan keahlian. Class Dosen merupakan anak dari Class SivitasAkademik dan cucu dari Class Human karena Dosen merupakan bagian dari SivitasAkademik dan SivitasAkademik merupakan anak dari Human. Sehingga, Class SivitasAkademik dapat mengakses method yang ada pada Class SivitasAkademik maupun Class Human.
4. Class Mahasiswa, memiliki atribut nim dan fakultas. Class Mahasiswa juga merupakan anak dari Class SivitasAkademik dan cucu dari Class Human karena Mahasiswa merupakan bagian dari SivitasAkademik dan SivitasAkademik merupakan anak dari Human. Oleh karena itu, Class Mahasiswa ini dapat mengakses method yang ada pada Class SivitasAkademik maupun Class Human.
5. Class Course, memiliki atribut namaMatkul.
6. Class ProgramStudi, memiliki atribut namaProdi dan kode. Class ProgramStudi juga memiliki atribut list dari objek Course, karena ProgramStudi has a Course.

## Dokumentasi
![Screenshot (332)](https://user-images.githubusercontent.com/119839421/223438161-5c1b8ff8-af0c-4494-9966-58bd6107acfa.png)
