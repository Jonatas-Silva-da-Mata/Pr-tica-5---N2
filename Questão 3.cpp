#include <stdio.h>
#include <locale.h>

int main(){
	
	int PA[10];
	int r;
	
	printf("Valor incial: ");
	scanf("%d", &PA[0]);
	printf("Razão: ");
	scanf("%d", &r);
	
	for(int i=1; i<10; i++){
		PA[i] = PA[i-1] + r;
	}
	
	for(int i=0; i<10; i++){
		printf("%d", PA[i]);
	}
	
	return 0;
}
