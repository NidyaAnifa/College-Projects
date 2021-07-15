#include <stdio.h>

	//Mendeklarasikan array, pointer, serta variable yang digunakan dalam program
	int test1[5]; int *test1Ptr;
	int test2[5]; int *test2Ptr;
	int total[5]; int *totalPtr;
	int i, j;

void Input() { //untuk membaca input yaitu 2 angka yang dimasukkan ke array test1 dan test2 sebanyak 5 kali
	for (i = 0; i < 5; i++) {
		printf("Masukkan Test 1 dan Test 2 : ");
		scanf("%d %d", test1+i, test2+i);
	}
}

void PrintInput() { //untuk memprint input yang telah dimasukkan ke dalam array test1 dan test2 dengan loop for untuk data pertama sampai kelima
	for (i = 0; i < 5; i++) {
		printf("\nTest1[%d] = %d Test2[%d] = %d", i, *(test1+i), i, *(test2+i));
	}
}

void PrintSum() { //untuk memprint total penjumlahan kedua angka dari masing-masing array
	for (j = 0; j < 5; j++) {
		printf("\nTotal[%d] = %d", j, *(total+j));
	}
}


int main() {
	
	test1Ptr = test1;
	test2Ptr = test2;
	totalPtr = total;

	Input();

	//Menjumlahkan elemen array test1 dan test2 lalu dimasukkan ke array total dengan loop for untuk tiap elemennya
	for (i = 0; i < 5; i++) {
		*totalPtr = *test1Ptr + *test2Ptr; 
		totalPtr++;
		test1Ptr++;
		test2Ptr++;
	}

	PrintInput();
	
	printf("\n");
	
	PrintSum();
	
	return 0;	
}


