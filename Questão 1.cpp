#include <stdio.h>
#include <locale.h>
# define TMAX 10

int main(){
	setlocale(LC_ALL, "Portuguese_Brazil");
	int maior, menor, v[TMAX], maior_indice, menor_indice;
	
	for(int indice=0; indice<TMAX; indice++){
		printf("Digite o %dª número: ", indice+1);
		scanf("%d", &v[indice]);
	}
	
	maior = v[0];
	menor = v[0];
	
	for(int indice=0; indice<TMAX; indice++){
		if(maior < v[indice]){
			maior = v[indice];
			maior_indice = indice;
		} 
		if(menor > v[indice]){
			menor = v[indice];
			menor_indice = indice;
		}
	}
	2
	printf("Maior: %d - indice: %d\n", maior, maior_indice);
	printf("Menor: %d - indice: %d", menor, menor_indice);
	
	return 0;
}
