#include <stdio.h>
#include <stdlib.h>
 
void ordem_decrescente(int valores[]);
void ordem_crescente(int valores[]);
void imprime_vetor(int valores[]);

int main() {
 
	int valores[5] = {9,1,5,6,2}, i=0, j=0, aux=0;
 
	printf("Bubble\n");
 
	printf("Original: \n");
    imprime_vetor(valores);
 
	printf("\nOrdem crescente: \n");
    ordem_crescente(valores);
    imprime_vetor(valores);

	printf("\nOrdem decrescente: \n");
    ordem_decrescente(valores);
    imprime_vetor(valores);

	return 0;
}

void ordem_decrescente(int valores[]){

    int i=0,j=0, aux=0;

        for(i=0;i<5;i++){
            for(j=i+1;j<5;j++){
                if(valores[i] < valores[j]){
                    aux = valores[i];
                    valores[i] = valores[j];
                    valores[j] = aux;	
                }
            }
        }
}

void ordem_crescente(int valores[]){

    int i=0,j=0, aux=0;

        for(i=0;i<5;i++){
            for(j=i+1;j<5;j++){
                if(valores[i] > valores[j]){
                    aux = valores[i];
                    valores[i] = valores[j];
                    valores[j] = aux;	
                }
            }
        }
}


void imprime_vetor(int valores[]){
    int i=0;

	for(i=0;i<5;i++){
		printf("%d\t",valores[i]);
	}	

}