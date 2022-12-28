//Atividade 14 de alocação dinâmica//

/////////////////////////////////////////////////////////////////////////////01////////////////////////////////////////////////////////////////////////////////////////
//01 //
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
/////////////////////////////////////////////////////////////////////////////01////////////////////////////////////////////////////////////////////////////////////////

/////////////////////////////////////////////////////////////////////////////02////////////////////////////////////////////////////////////////////////////////////////
#include <stdio.h>
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
/////////////////////////////////////////////////////////////////////////////02////////////////////////////////////////////////////////////////////////////////////////

/////////////////////////////////////////////////////////////////////////////03////////////////////////////////////////////////////////////////////////////////////////
//03//
#include <stdio.h>
#include <stdlib.h>

struct Calculo{
    float salario, vendas, salario_final;
};

int main(){
    struct Calculo *vendedor = (struct Calculo*) malloc(sizeof(struct Calculo));
	
	printf("Digite o seu salario:");
	scanf("%f",&vendedor->salario);
	
	printf("Informe o total de vendas no mes:");
	scanf("%f",&vendedor->vendas);
	
    	vendedor->salario_final = ((vendedor->vendas) * 0.15) + (vendedor->salario);
	
	printf("TOTAL = %.2f", vendedor->salario_final);
	
	return 0;
}
//Ou pode ser de outra forma//
//03//
#include <stdio.h>
#include <stdlib.h>

int main(){
    float *salario = (float*) malloc(sizeof(float));
    float *vendas = (float*) malloc(sizeof(float));
    float *salario_final = (float*) malloc(sizeof(float));
    
	printf("Digite o seu salario:");
	scanf("%f",salario);
	
	printf("Informe o total de vendas no mes:");
	scanf("%f",vendas);
	
    	*salario_final = ((*vendas) * 0.15) + (*salario);
	
	printf("TOTAL = %.2f", *salario_final);
	
	return 0;
}
/////////////////////////////////////////////////////////////////////////////03////////////////////////////////////////////////////////////////////////////////////////

/////////////////////////////////////////////////////////////////////////////04////////////////////////////////////////////////////////////////////////////////////////

#include <stdio.h>
#include <stdlib.h>

struct Receba{
    float nota[3];
};

int main(){
    struct Receba *notas = (struct Receba*) malloc(sizeof(struct Receba));
    float *media = (float*) malloc(sizeof(float));
    
    printf("Informe a suas tres notas (Ex: nota1 , nota2 , nota3):");
    scanf("%f , %f , %f", &notas->nota[0], &notas->nota[1], &notas->nota[2]);
    
    *media = ((notas->nota[0]) + (notas->nota[1]) + (notas->nota[2])) / 3 ; 
    
    printf("MEDIA = %.2f", *media);
    
    return 0;
}
// OUTRA FORMA DE RESPONDER É//
#include <stdio.h>
#include <stdlib.h>

int main(){
    float *nota = (float*) malloc(sizeof(float));
    float *media = (float*) malloc(sizeof(float));
    
    printf("Informe a suas tres notas (Ex: nota1 , nota2 , nota3):");
    scanf("%f , %f , %f", &nota[0], &nota[1], &nota[2]);
    
    *media = ((nota[0]) + (nota[1]) + (nota[2])) / 3 ; 
    
    printf("MEDIA = %.2f", *media);
    
    return 0;
}
/////////////////////////////////////////////////////////////////////////////04////////////////////////////////////////////////////////////////////////////////////////

/////////////////////////////////////////////////////////////////////////////05////////////////////////////////////////////////////////////////////////////////////////
//05//
#include <stdio.h>
#include <stdlib.h>

int main(){
    float *notas = (float*) malloc(sizeof(float));
    float *media = (float*) malloc(sizeof(float));
    float *contador = (float*) malloc(sizeof(float));
    int *quantidade = (int*) malloc(sizeof(int));
    int *opcao = (int*) malloc(sizeof(int));
    int num = 0;
    while(num == 0){
      
    printf("\n----------MENU----------\n");
    printf("1 - Adicionar nota\n");
    printf("2 - Calcular média\n");
    printf("0 - Sair\n");
    printf("------------------------\n");
    
    printf("Escolha uma das opções:");
    scanf("%d", opcao);
    
    switch(*opcao){
        case 1:
        printf("Digite a quantidade de notas que deseja adicionar:");
        scanf("%d",quantidade);
    
        for (int i = 0; i < *quantidade; i++){
            printf("Digite a sua nota:");
            scanf("%f", notas);
            *contador = *contador + (*notas);}
        break;
        
        case 2:
        *media = *contador / *quantidade;
        printf("MEDIA = %.2f\n", *media);
        break;
        
        case 0:
        printf("Fim do Programa");
        num = 1;
        break;
        
        default:
        printf("Opção inválida\n\n");
        printf("MENU\n");
        printf("1 - Adicionar nota\n");
        printf("2 - Calcular média\n");
        printf("0 - Sair\n");
}

}
}

//Outra forma de responder a 05//
#include <stdio.h>
#include <stdlib.h>

int main(){
    float *media = (float*) malloc(sizeof(float));
    float *contador = (float*) malloc(sizeof(float));
    int *quantidade = (int*) malloc(sizeof(int));
    int *opcao = (int*) malloc(sizeof(int));
    int num = 0;
    while(num == 0){
      
    printf("\n----------MENU----------\n");
    printf("1 - Adicionar nota\n");
    printf("2 - Calcular média\n");
    printf("0 - Sair\n");
    printf("------------------------\n");
    
    printf("Escolha uma das opções:");
    scanf("%d", opcao);
    
    switch(*opcao){
        case 1:
        printf("Digite a quantidade de notas que deseja adicionar:");
        scanf("%d",quantidade);
    
        for (int i = 0; i < *quantidade; i++){
            float *notas = (float*) malloc((*quantidade)*sizeof(float));
            printf("Digite a sua nota:");
            scanf("%f",&notas[i]);
            *contador = *contador + (notas[i]);
        }
        break;
        
        case 2:
        *media = *contador / *quantidade;
        printf("MEDIA = %.2f\n", *media);
        break;
        
        case 0:
        printf("Fim do Programa");
        num = 1;
        break;
        
        default:
        printf("Opção inválida\n\n");
        printf("MENU\n");
        printf("1 - Adicionar nota\n");
        printf("2 - Calcular média\n");
        printf("0 - Sair\n");
}

}
}
/////////////////////////////////////////////////////////////////////////////05////////////////////////////////////////////////////////////////////////////////////////
