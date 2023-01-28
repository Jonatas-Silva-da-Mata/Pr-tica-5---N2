#include <stdio.h>
#include <locale.h>

int main(){
	
	int PG[10];
	int r;
	
	printf("Valor incial: ");
	scanf("%d", &PG[0]);
	printf("Razão: ");
	scanf("%d", &r);
	
	for(int i=1; i<10; i++){
		PG[i] = PG[i-1] * r;
	}
	
	for(int i=0; i<10; i++){
		printf("%d", PG[i]);
	}
	
	return 0;
}
