#01#
#include <stdio.h>
#include <stdlib.h>

int main(){
	printf("CHAR = %ld\n",sizeof(char));
	printf("INT = %ld\n",sizeof(int));
	printf("FLOAT = %ld\n",sizeof(float));
	printf("DOUBLE = %ld\n",sizeof(double));
	printf("Fim do Programa.");
	
	return 0 ;
}

#02##include <stdio.h>
#include <stdlib.h>

int main(){
	float *media = (float*) malloc(sizeof(float));
	printf("Digite a sua media:");
	scanf("%f",media);
	
	if (*media >= 7.0 && *media <= 10.0){
		printf("Aprovado");
	}
	else{
		printf("Reprovado");
	}
	
	return 0;
}
//Outra forma de responder a questão//
//02//
#include <stdio.h>
#include <stdlib.h>

struct Media_aluno{
	float media;
};

int main(){
	struct Media_aluno *med1 = (struct Media_aluno*) malloc(sizeof(struct Media_aluno));
	printf("Digite a sua media:");
	scanf("%f",&med1->media);
	
	if (med1->media >= 7.0 && med1->media <= 10.0){
		printf("Aprovado");
	}
	else{
		printf("Reprovado");
	}
	
	return 0;
}
