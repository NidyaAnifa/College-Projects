#include <stdio.h>
#include <string.h>

//program untuk menghitung pesanan pelanggan 

struct order {
	char pemesan[10];
	char versi[10];
	int jumlah;
	int poca;
	char tujuan[10];
	float harga;
	float pajak;
	float total;
};

int main() {
	int i;
	struct order order[3];
	
	printf("### PESANAN ALBUM NCT DREAM ###\n");
	
	for (i=0; i<3; i++) {
		printf("Nama pemesan %d: ", i+1);
		scanf("%s", order[i].pemesan);
		
		printf("Versi album (Crazy $23, Chilling $22, atau Boring $22): ");
		scanf("%s", order[i].versi);
		
		printf("Jumlah Album (Lebih dari 5 diskon 5 Persen): ");
		scanf("%d", &order[i].jumlah);
		
		printf("Jumlah Photocard Tambahan ($3 Tiap 1 buah): ");
		scanf("%d", &order[i].poca);
		
		printf("Negara tujuan pengiriman (Pajak : Indonesia $5, Korea $0, Lainnya $7): ");
		scanf("%s", order[i].tujuan);
		
		printf("\n");
	}
	
	for (i=0; i<3; i++) {
		order[i].harga = 0;
		
		if (strcmp("Crazy", order[i].versi) == 0)
			order[i].harga = order[i].harga + 23;
		else
			order[i].harga = order[i].harga + 22;
	
		order[i].harga = order[i].harga * order[i].jumlah;
		
		if (order[i].jumlah > 5)
			order[i].harga = order[i].harga - (0.05 * order[i].harga);
		else
			order[i].harga = order[i].harga;
		
		order[i].harga = order[i].harga + (order[i].poca * 3);
	
		if (strcmp("Korea", order[i].tujuan) == 0)
			order[i].pajak = 0;
		else if (strcmp("Indonesia", order[i].tujuan) == 0)
			order[i].pajak = 5;
		else 
			order[i].pajak = 7;
			
		order[i].total = order[i].harga + order[i].pajak;
	}
	
	printf("\n### PERHITUNGAN PESANAN ###");
	for (i=0; i<3; i++) {
		printf("\nPesanan %s :", order[i].pemesan);
		printf("\nBiaya Album : $ %.1f", order[i].harga);
		printf("\nBiaya Pajak : $ %.1f", order[i].pajak);
		printf("\nTotal Biaya : $ %.1f\n", order[i].total);
	}	
	return 0;
}
