#include <stdio.h>

int main()
{
    int i, j, baris, pattern, next; 

    do {
    	printf("Masukkan banyak baris resolusi: ");
		scanf("%d", &baris);
		
		printf("Masukkan pilihan pattern: \n1. 0 dan / \n2. $ dan =");
		printf("\nPlihan anda: ");
		scanf("%d", &pattern);
    	
	    switch(pattern)
	    {
	    	case 1:
	    		for(i=1; i<=baris; i++)
	    		{
	        		for(j=1; j<=baris; j++)
	        	{
	            	if(i==1 || i==baris || j==1 || j==baris || j==i || (j==baris - i+1))
	            {
	                	printf("0");
	            } 	else
	            {
	                	printf("/");
	            }
	        	}
				printf("\n");
				}
			break;
	
	    	case 2:
	    		for(i=1; i<=baris; i++)
	    		{
	        		for(j=1; j<=baris; j++)
	        	{
	            	if(i==1 || i==baris || j==1 || j==baris || j==i || (j==baris - i+1))
	            {
	                	printf("$");
	            } 	else
	            {
	                	printf("=");
	            }
	        	}
				printf("\n");
	    		}
	    	break;
	    	
	    	default:
	    		printf("Error pilihan yang dimasukkan tidak tepat");
		}
		printf("\nMasukkan 0 untuk keluar ");
		scanf("%d", &next);
		
	} while (next!=0);
    
    return 0;
}
