#include <stdio.h>

int start[3], stop[3];
int a, b;

void Input() {
	
	int i;
	
	printf("Enter start time.");
	printf("\nEnter hours, minutes and seconds: ");
	for (i = 0;i < 3; ++i){
		scanf("%d", &start[i]);
	}
	
	printf("\nEnter the stop time.");
	printf("\nEnter hours, minutes and seconds: ");
	for (i = 0;i < 3; ++i){
		scanf("%d", &stop[i]);
	}
}

int Hitung(int a, int b) {
	int biaya;
	
	if (a >= 30) {
		biaya = 75000*(b+1);
	}
	else
		biaya = 75000*b;
		
	return biaya;
	

}


int main() {
	struct selisih{
		int jam;
		int menit;
		int detik;
	};
	
	struct selisih selisih;
	
	printf("-------------------------------------\n");
	printf("Thank you for playing in the Junglebook Land\n");
	printf("-------------------------------------\n");

	Input();
	
	selisih.jam = stop[0] - start[0];
	selisih.menit = stop[1] - start[1];
	selisih.detik = stop[2] - start[2];
	

	printf("\nPlaying Time: %d;%d;%d - %d;%d;%d = %d:%d:%d", start[0], start[1], start[2], stop[0], stop[1], stop[2], selisih.jam, selisih.menit, selisih.detik);
	printf("\nPlaying stime charge: Rp. %d,-", Hitung(selisih.menit, selisih.jam));
	
	return 0;
}
