#include <stdio.h>

int main() {
	
	int jumlah, a, sumbu_x, sumbu_y;
	char perintah;
	
	a = 0;
	sumbu_x = 0;
	sumbu_y = 0;
	
	printf("Masukkan banyak perintah : ");
	scanf("%d", &jumlah);
	
	while (a < jumlah){
		
		printf("\nMasukkan perintah : ");
		scanf(" %c", &perintah);
		a = a + 1;
		
		if (perintah == 'U') {
			sumbu_y = sumbu_y + 1;
		} else if (perintah == 'S') {
			sumbu_y = sumbu_y - 1;
		} else if (perintah == 'T') {
			sumbu_x = sumbu_x + 1;
		} else if (perintah == 'B') {
			sumbu_x = sumbu_x - 1;
		} else if (perintah == 'H') {
			break;
		} else {
			sumbu_x = sumbu_x;
			sumbu_y = sumbu_y;
			printf("Posisi meong bross tetap");
			break;
		}
	}
	
	printf("\nKarakter Meong Bross berada di koordinat (x = %d, y = %d)", sumbu_x , sumbu_y);
	
	return 0;
}
