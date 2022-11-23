#include<stdio.h>
int main(){
	char tip;
	printf("Kiralanan Arac Turu");
	scanf("%c", &tip);
	int gun,km,ucret;
	printf("Gidilen Gun");
	scanf("%d",&gun);
	printf("Gidilen yol(km)");
	scanf("%d",&km);
	ucret=0;
	switch(tip){
		case'a': ucret=gun*20+km*18;
		case'A': ucret=gun*20+km*18; break;
		case'b': ucret=gun*32+km*22;
		case'B': ucret=gun*32+km*22; break;
		case's': ucret=gun*43+km*28;
		case'S': ucret=gun*43+km*28; break;
		case'p': ucret=gun*51+km*36; 
		case'P': ucret=gun*51+km*36; break;
		default: printf("Yanlış Arac Turu");
	}
    printf("Borcunuz: %d tl",ucret);
	return 0;

	
}