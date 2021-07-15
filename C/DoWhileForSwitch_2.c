#include <stdio.h>

int main() {
    int a, b, c;
    int total = 1000;
    
    for (a = 1; a <= total; a++){
    	
		for (b = a + 1; b <= total; b++){
			c = total - (a + b);
			
            if ( a*a + b*b == c*c){
				printf("a : %d, b : %d, c : %d", a , b, c);
        	}
        }
    }
    
    return 0;
}
