#include <stdio.h>

//Nidya Anifa 

int i, j, r, c;
int a[10][10], b[10][10], sum[10][10];

void enterData() {
		
	printf("Enter rows and columns of the square matrix (max. 10): ");
	scanf("%d %d", &r, &c);
	
	printf("Enter elements of the first matrix\n");
	for (i = 0; i < r; i++) {
		for (j = 0; j < c; j++) {
			printf("Enter A%d%d: ", i+1, j+1);
			scanf("%d", (*(a+i)+j));
		}
	}
	
	printf("Enter elements of the second matrix\n");
	for (i = 0; i < r; i++) {
		for (j = 0; j < c; j++) {
			printf("Enter B%d%d: ", i+1, j+1);
			scanf("%d", (*(b+i)+j));
		}
	}
}

void addMatrices() {
	
	for (i = 0; i < r; i++) {
		for (j = 0; j < c; j++) {
			*(*(sum + i) + j) = *(*(a + i) + j) + *(*(b + i) + j);
		}
	}
}

void display() {
	
	for (i = 0; i < r; i++) {
		for (j = 0; j < c; j++) {
			printf("%d ", *(*(sum + i) + j));
			
			if (j == c-1) {
				printf("\n");
			}
		}
	}
}

int main () {
	
	enterData();
	addMatrices();
	display();
	
	return 0;	
}
