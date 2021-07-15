print("Hello World")

#versi 1
Lama_Kerja = 35
Upah = 2.75
Gaji = float(Lama_Kerja) * float(Upah)
print("Jam kerja:" + str(Lama_Kerja))
print("Rate:" + str(Upah))
print("Gaji:" + str(Gaji)+"\n")

nama = "Nidya"
tahun_lahir = "2000"
umur = 2020 - int(tahun_lahir)
print(nama +  " umurnya "  +  str(umur)  +  " tahun\n")

#versi 2
name = input('Nama kamu: ')
tahunnya_lahir = input('Tahun lahir: ')
usia = 2020 - int(tahunnya_lahir)
print(name, 'umurnya', usia, 'tahun\n')

Jam_Kerja = input('jam kerja Anda : ')
Rate = input('Banyak upah perjam : ')
Total_Gaji = float(Jam_Kerja) * float(Rate)
print ('Jam Kerja :',Jam_Kerja, '\nRate : ', Rate, '\nGaji : ', Total_Gaji, '\n')

#cobain function
def say_hi(name,usia):
    print('Hai', name, 'umur kamu', str(usia), "tahun\n")

say_hi(name,usia)