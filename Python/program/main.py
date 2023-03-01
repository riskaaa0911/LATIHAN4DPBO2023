# Saya Riska Nurohmah [2109103] mengerjakan Latihan Praktikum 4 dalam mata kuliah Desain dan Pemrograman Berorientasi Objek
# untuk keberkahanNya maka saya tidak melakukan kecurangan seperti yang telah dispesifikasikan. Aamiin.

# import kelas
from Human import Human
from SivitasAkademik import SivitasAkademik
from Mahasiswa import Mahasiswa
from Dosen import Dosen
from Course import Course
from ProgramStudi import ProgramStudi

# instansiasi objek Mahasiswa pertama
mhs = Mahasiswa()
# deklarasi list mahasiswa
list_mhs = []
# set atribut
mhs.setNik("12345678")
mhs.setNama("Riska Nurohmah")
mhs.setGender("Famale")
mhs.setUniv("UPI")
mhs.setEmail("riskanur@upi.edu")
mhs.setNim("2109103")
mhs.setFakultas("FPMIPA")
# memasukan data ke list mahasiswa
list_mhs.append(mhs)

# instansiasi objek Mahasiswa kedua
mhs2 = Mahasiswa()
# set atribut
mhs2.setNik("65432789")
mhs2.setNama("Arfan Juliandri")
mhs2.setGender("Male")
mhs2.setUniv("UPI")
mhs2.setEmail("arfan01@upi.edu")
mhs2.setNim("2109102")
mhs2.setFakultas("FPMIPA")
# memasukan data ke list mahasiswa
list_mhs.append(mhs2)

i = 0

# menampilkan data list mahasiswa
print("\n==========Data Mahasiswa==========")
for i in range(len(list_mhs)):
    print('\n' + str(i+1) + "." + "NIK         : " + list_mhs[i].getNik())
    print("  Nama        : " + list_mhs[i].getNama())
    print("  Gender      : " + list_mhs[i].getGender())
    print("  Universitas : " + list_mhs[i].getUniv())
    print("  Email       : " + list_mhs[i].getEmail())
    print("  NIM         : " + list_mhs[i].getNim())
    print("  Fakultas    : " + list_mhs[i].getFakultas())

# instansiasi objek Dosen pertama
dosen1 = Dosen()
# deklarasi list dosen
list_dosen = []

# set atribut
dosen1.setNik("87654321")
dosen1.setNama("Yudi")
dosen1.setGender("Male")
dosen1.setUniv("UPI")
dosen1.setEmail("yudi@upi.edu")
dosen1.setNip("135790246")
dosen1.setFk("FPMIPA")
dosen1.setPendTerakhir("S2")
dosen1.setKeahlian("Data Mining")
# memasukan data ke list dosen
list_dosen.append(dosen1)
# instansiasi objek Dosen kedua
dosen2 = Dosen()
# set atribut
dosen2.setNik("87654320")
dosen2.setNama("Ani")
dosen2.setGender("Famale")
dosen2.setUniv("UPI")
dosen2.setEmail("ani@upi.edu")
dosen2.setNip("135790247")
dosen2.setFk("FPMIPA")
dosen2.setPendTerakhir("S2")
dosen2.setKeahlian("Pemrograman Web")
# memasukan data ke list dosen
list_dosen.append(dosen2)

# menampilkan data list dosen
print("\n==========Data Dosen==========")
for i in range(len(list_dosen)):
    print('\n' + str(i+1) + "." + "NIK         : " + list_dosen[i].getNik())
    print("  Nama        : " + list_dosen[i].getNama())
    print("  Gender      : " + list_dosen[i].getGender())
    print("  Universitas : " + list_dosen[i].getUniv())
    print("  Email       : " + list_dosen[i].getEmail())
    print("  NIP         : " + list_dosen[i].getNip())
    print("  Fakultas    : " + list_dosen[i].getFk())
    print("  PendAkhir   : " + list_dosen[i].getPendTerakhir())
    print("  Keahlian    : " + list_dosen[i].getKeahlian())

# deklarasi list matkul(mata kuliah)
list_matkul = []
# instansiasi objek Course dengan argumen dan memasukannya kedalam list matkul
matkul1 = Course("Data Maining")
list_matkul.append(matkul1)
matkul2 = Course("Sistem Basis Data")
list_matkul.append(matkul2)
matkul3 = Course("Sistem Kontrol")
list_matkul.append(matkul3)
matkul4 = Course("Kalkulus")
list_matkul.append(matkul4)
matkul5 = Course("Kecerdasan Buatan")
list_matkul.append(matkul5)
# instansiasi objek ProgramStudi dengan argumen
prodi1 = ProgramStudi("Ilkom", "204", list_matkul)

# menampilkan data pada atribut-atribut ProgramStudi
print("\n==========Data Prodi==========\n")
print("Nama Prodi   : " + prodi1.getNamaProdi())
print("Kode         : " + prodi1.getKode())
print("Daftar Matkul:")
for i in range(len(prodi1.getCourse())):
    print(str(i+1) + ". " + prodi1.getCourse()[i].getNamaMatkul())
