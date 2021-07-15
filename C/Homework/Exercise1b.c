#include <stdio.h>

//Nidya Anifa

int fact(int number);

int main() {
	
	int number;
	
	printf("Enter a number : ");
	scanf("%d", &number);
	
	if (number >= 0)
		printf("\nFactorial of %d : %d", number, fact(number));
	else
		printf("\nFactorial of a negative number doesn't exist");
		
	return 0;
}

int fact(int number) {
	int a;
	int output = 1;
	
	for (a = 1; a <= number; a++)
		output = output * a;
	
	return output;
	
	return 0;
}
