#include <stdio.h>
#include <string.h>

struct roket {
	char nama[10];
	char ukuran[10];
	int mesin;
	int booster;
	char negara[10];
	int harga;
};

int main() {
	int i, j, total_cost;
	struct roket roket[3];
	
	for (i=0; i<3; i++) {
		printf("Nama roket %d: ", i+1);
		scanf("%s", roket[i].nama);
		
		printf("Ukuran roket: ");
		scanf("%s", roket[i].ukuran);
		
		printf("Jumlah mesin roket: ");
		scanf("%d", &roket[i].mesin);
		
		printf("Jumlah booster roket: ");
		scanf("%d", &roket[i].booster);
		
		printf("Negara pemilik roket: ");
		scanf("%s", roket[i].negara);
		
		printf("\n");
	}
	
	for (i=0; i<3; i++) {
		roket[i].harga = 0;
		
		if (strcmp("Large", roket[i].ukuran) == 0)
			roket[i].harga = roket[i].harga + 1000000;
		else if (strcmp("Medium", roket[i].ukuran) == 0)
			roket[i].harga  = roket[i].harga + 500000;
		else
			roket[i].harga = roket[i].harga + 300000;
	
		roket[i].harga = roket[i].harga + (500000* roket[i].mesin)  + (700000* roket[i].booster);
	
		if (strcmp("USA", roket[i].negara) == 0)
			roket[i].harga = roket[i].harga - (0.2*roket[i].harga);
		else
			roket[i].harga = roket[i].harga;		
	}
	
	total_cost = roket[0].harga + roket[1].harga + roket[2].harga;
	
	printf("\n=== HASIL HITUNGAN COST ===\n");
	printf("%s ($ %d)\n", roket[0].nama, roket[0].harga);
	printf("%s ($ %d)\n", roket[1].nama, roket[1].harga);
	printf("%s ($ %d)\n", roket[2].nama, roket[2].harga);
	printf("\nTotal cost: %d", total_cost);
	
	return 0;
}
