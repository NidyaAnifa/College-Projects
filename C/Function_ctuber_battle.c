#include <stdio.h>

int main() {
	
    char name_ctuber1, name_ctuber2;
    int next, f_power1, ro_fire1, accuracy1, evasion1;
    int f_power2, ro_fire2, accuracy2, evasion2;
    
    float damage(int f_power, int ro_fire);
	float combat(int f_power, int ro_fire, int accuracy, int evasion);
	void toString(char name_ctuber, float damage, float combat);
	
    
	do{
	    printf("### MY CTUBER ###");
	
	    printf("\nMasukkan Nama Ctuber :");
	    scanf("%c", &name_ctuber1);
	
	    printf("\nMasukkan Firepower : ");
	    scanf("%d", &f_power1);
	
	    printf("\nMasukkan Rate of Fire : ");
	    scanf("%d", &ro_fire1);
	
	    printf("\nMasukkan Accuracy : ");
	    scanf("%d", &accuracy1);
	
	    printf("\nMasukkan Evasion : ");
	    scanf("%d", &evasion1);
	
	    printf("\n### ENEMY CTUBER ### \nMasukkan Nama Ctuber :");
	    scanf(" %c", &name_ctuber2);
	
	    printf("\nMasukkan Firepower : ");
	    scanf("%d", &f_power2);
	
	    printf("\nMasukkan Rate of Fire : ");
	    scanf("%d", &ro_fire2);
	
	    printf("\nMasukkan Accuracy : ");
	    scanf("%d", &accuracy2);
	
	    printf("\nMasukkan Evasion : ");
	    scanf("%d", &evasion2);
	
	    float damage1 = damage(f_power1, ro_fire1);
	    float damage2 = damage(f_power2, ro_fire2);
	
	    float combat1 = combat(f_power1, ro_fire1, accuracy1, evasion1);
	    float combat2 = combat(f_power2, ro_fire2, accuracy2, evasion2);
	
	    printf("\n### RESULT ###\n");
	    toString(name_ctuber1, damage1, combat1);
	    toString(name_ctuber2, damage2, combat2);
	
	    if (damage2 >= damage1 && combat2 >= combat1)
	    {
	        printf("KABUR");
	    }
	    else
	    {
	        printf("SERANG");
	    }
	    
	    printf("\n Lanjut?");
		scanf("%d", &next);
		
	} while (next = 1);

    return 0;
}

float damage(int f_power, int ro_fire)
{
    float damage_res;

    damage_res = f_power * ro_fire / 60;
    return damage_res;
}

float combat(int f_power, int ro_fire, int accuracy, int evasion)
{
    float combat_res;

    combat_res = 30 * f_power + 40 * ro_fire * ro_fire / 120 + 15 * (accuracy + evasion);
    return combat_res;
}

void toString(char name_ctuber, float damage, float combat)
{
    printf("\n %c \n", name_ctuber);
    printf("Damage Per Second = %.2f \n", damage);
    printf("Combat Effectiveness = %.2f \n", combat);
}
