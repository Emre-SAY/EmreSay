#include<stdio.h>
int main(){
	int m, n;
	int tb;
	printf("Ucgen Taban Boyutu:");
	scanf("%d", &tb);	
	
	 for(m=0; m<=tb; m++){
	 		for(n=0; n<m; n++){
	 			printf("#");
		}
		printf("\n");
	}
return 0;
	 	
}
