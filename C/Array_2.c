#include <stdio.h>

int hasil = 0, userMat[5][5], baris, kolom; //mendeklarasi variable dan matriks 5x5

int theFunc() {
	
printf("Masukkan Data:\n"); //meminta user untuk memasukkan elemen matriks
	for(baris = 0; baris < 5; ++baris) //memberi syarat untuk baris matriks
		for(kolom = 0; kolom < 5; ++kolom) { //memberi syarat untuk kolom matriks
			scanf("%d", &userMat[baris][kolom]); //untuk assign input user ke tiap elemen matriks
				if(kolom > baris) // jika matriks tersebut memiliki indeks kolom yang lebih besar dari barisnya maka berada di atas batas diagonal
					hasil -= userMat[baris][kolom]; //mengurangi bilangan yang memenuhi syarat di atas
		}
		
	return hasil;
}


int main() {
	
	printf("Hasil pengurangan dari setiap element diagonal adalah: %d", theFunc()); //menghasilkan output dengan memanggil fungsi
	
	return 0;
}
  

