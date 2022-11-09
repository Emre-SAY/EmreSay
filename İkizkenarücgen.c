#include <stdio.h>
int main(){
	int a, b, sayi;
	int yz, sc;
	printf("(Ucgen Taban Boyutu)/2=");
	scanf("%d", &sayi);
	
	yz = 1;
	sc = sayi -1;
	
	for (b = 0; b < sayi; b++){
		for (a = 0; a < sc; a++){
			printf(" ");
		}
		for (a = 0; a < yz; a++){
			printf("*");
		}
		printf("\n");
		sc--;
		yz+=2;
	}
	return 0;

	
}