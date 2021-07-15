#include <stdio.h>

int main() {
	
	int input[10]; int *inputPtr;
	int i, jumlah;
	
	printf("Jumlah input: ");
    scanf("%d", &jumlah);

	printf("Input : ");
	for(i = 0; i < jumlah; ++i) {
		scanf("%d", &input[i]);
		if (i<jumlah-1)
			printf(",");
	}
	
	inputPtr = &input[jumlah-1];
	
	printf("Output : ");
	for (i = 0; i < jumlah; i++) {
		printf("%d", *inputPtr--);
		if (i<jumlah-1)
			printf(",");
	}
	
	return 0;
}
