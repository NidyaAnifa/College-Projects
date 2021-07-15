#include <stdio.h>

/* Nidya Anifa
*/

int checkPrimeNumber(int n);
int prime_interval(int number1, int number2);

int main() {
	int n, a, b, number1, number2, flag;
	
	printf("Enter the first interval : ");
	scanf("%d",&number1);
	
	printf("Enter the second interval : ");
	scanf("%d",&number2);
	
	if (number1 < number2){
		a = number1;
		b = number2;
	} else {
		a = number2;
		b = number1;
	}
	
	printf("\n Prime numbers between %d and %d are : ", a, b);
		
	for (a = a + 1 ; a < b;  ++a) {
		flag = checkPrimeNumber(a);
		
		if (flag != 1)
			printf("\n %d", a);
	}
	
	return 0;
}

int checkPrimeNumber(int n) {
	int i;
	for(i=2; i <= n/2; ++i) {
		if(n%i == 0)
			return 1;
	}	
	
	return 0;
}
