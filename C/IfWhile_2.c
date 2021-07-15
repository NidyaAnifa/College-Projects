#include <stdio.h>

int main() {
	int n;
	int a = 1, output = 1;	
	
	printf("Masukkan input : ");
	scanf("%d", &n);
	
	while (a-1 <= n) {
		a = a + 1;
		
		if (a%2 == 0) {
			output = (output * a)/2;
		} else {
			output = output * a;
		}
	
	}
	
	printf("Output %d", output);
	
	return 0;
}
