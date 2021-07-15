#include <stdio.h>

/* Nidya Anifa */

int fact_recursion(int number);

int main() {
	
	int number;
	
	printf("Enter a number : ");
	scanf("%d", &number);
	
	if (number >= 0)
		printf("\nFactorial of %d : %d", number, fact_recursion(number));
	else
		printf("\nFactorial of a negative number doesn't exist");
	
	return 0;
}

int fact_recursion(int number) {
	if (number <= 1) {
		return 1;
	}
	
	return number * fact_recursion(number - 1); 
	
	return 0;
}
