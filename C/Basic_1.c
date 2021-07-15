#include <stdio.h>

int main (void){
	 
	int age;
	
	printf("Masukkan umurmu = ");
	scanf("%d", &age); 
	
	age+=3;
	
	printf("\n\nNama saya : \t\t Nidya Anifa");
	printf("\n\nNama panggilan saya : \t Nidya");
	printf("\n\nUmur : \t\t\t %d", age);
	
	if (age > 20) {
	printf("\n\nBayar : \t\t 5000 mora");
	}
	
	return 0;
}
