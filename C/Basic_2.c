#include <stdio.h>

int main (void){
	float strength, agility, mana_power, damage_persecond;
	
	printf( "Masukkan nilai Strenght: \t\t");
	scanf("%f", &strength);

	printf( "\nMasukkan nilai Agility: \t\t");
	scanf("%f", &agility);
	
	printf( "\nMasukkan nilai Mana Power: \t\t");
	scanf("%f", &mana_power);
	
	damage_persecond = 0.5*(strength + agility)*(mana_power * mana_power);
	printf("\nNilai damage per second:\t\t %.2f",damage_persecond);
	
	return 0;
}
