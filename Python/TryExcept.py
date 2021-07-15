jam = input('Masukkan jumlah jam : ')
rate = input('Masukkan jumlah rate : ')
try:
    jj = float(jam)
    rt = float(rate)
except:
    print('Error, masukkan angka')
    quit()

def computepay(jj, rt):
    if jj <= 40:
        gaji = jj * rt
    else:
        selisih = jj - 40
        slsh = float(selisih)
        gaji = (40*rt)+(slsh*rt*1.5)
    print('Jumlah gaji karyawan ($):', gaji,'\n')


computepay(jj,rt)