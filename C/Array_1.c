#include <stdio.h>
#include <string.h>

void toString(int var3){
	
	/*3#__Print palindrom atau print Jumlah Vokal
	
	Penjelasan:
	Fungsi toString berguna untuk menentukan bagaimana output akan di print.
	Jika argumen var sebesar 0 maka akan diprint output Palindrom. Dan jika selain 0
	maka diprint vokal tersebut.	
	
	*/
	
	if (var3 == 0)
		printf("Palindrom");
	else
		printf("Jumlah Vokal : %d", var3);
		
}

int proses(char UserString1[20]) {
	
	/*2#__Proses hitung jumlah huruf Vokal
	
	Penjelasan :
	Fungsi ini berguna untuk melakukan perhitungan huruf vokal pada UserString1
	setiap huruf dalam array pada UserString1 dicek satu persatu dengan for dan jika merupakan
	huruf vokal maka akan menambah variabel vokal dengan 1. Lalu setelah selesai mengecek akan diretrun
	kembali variable vokal tadi.

	*/
	
	int vokal = 0, i;
    char hr;
    
    for (i = 0; UserString1[i] != '\0'; i++) {
        hr = UserString1[i];
  
        if (hr == 'a' || hr == 'e'
            || hr == 'i' || hr == 'o'
            || hr == 'u')
            vokal++;
    }
	
	return vokal;
	
	return 0;
}

int main(){
	char UserString1[20], UserString2[20];
	int var3;
	
	//1#__Input/Output
	
	printf("Input : ");
	scanf("%s", UserString1);
	
	strlwr(UserString1); // Fungsi strlwr berfungsi untuk mengubah karakter dalam UserString1 menjadi huruf kecil
	strcpy(UserString2, UserString1); // Fungsi strcpy berfungsi untuk mencopy UserString1 dan dimasukkan ke variable Userstring2
	
	/*
	Q : Apa fungsi code if(strcmp(strrev(#__Variable2), #__Variable1) == 0)?
	A : fungsi strrev berfungsi untuk membalik UserString2. Lalu kata yang sudah dibalik tadi dibandingkan dengan UserSting1
		dengan fungsi strcmp. Jika tidak ada perbedaan dari kedua kata yang ditunjukkan dengan hasil 0,
		maka kata adalah Palindrom dan perintah dalam if akan diproses, dimana var3 = 0. lalu fungsi toString dipanggil dengan
		argumen var3 = 0.
		Jika terdapat perbedaan dalam kata maka program dalam else akan dijalankan 
		dimana perhitungan kata vokal akan dilakukan dengan memanggil fungsi proses dengan
		argumen UserString1. lalu fungsi toString dipanggil dengan argumen var3.
	*/
	
	if(strcmp(strrev(UserString2), UserString1) == 0){
		var3 = 0;
		toString(var3);
	}else {
		var3 = proses(UserString1);
		toString(var3);
	}
	
	return 0;
}
