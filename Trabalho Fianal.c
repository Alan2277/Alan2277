#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void menu(){
    printf("-----------IFFOOD-----------\n");
    printf("------------MENU------------\n");
    printf("1 - REGISTRAR PEDIDO\n");
    printf("2 - EXIBIR PEDIDO\n");
    printf("3 - ENTREGAR PEDIDO\n");
    printf("0 - SAIR\n");
}

struct Inf_registro{
    int codigo ;
    int contador;
    char obs[100];
    int item;
    int quantidade;
    int mesa;
    int qtd_registrar;
};


int main(){
    
    struct Inf_registro *pedido;
    pedido = (struct Inf_registro*) malloc(500*sizeof(struct Inf_registro));
    
    int parar = 0;
    
    int opcao = 0;
        
    int cont = 0;
	
    while(parar == 0){
        menu();
        
    	printf("Escolha uma opção = ");
        scanf("%d",&opcao);
        
        
        switch(opcao){
            case 1:
            	printf("Informe o item que deseja registrar:");
            	scanf("%d",&pedido[cont].item);
            	printf("Informe a quantidade de item que deseja:");
            	scanf("%d",&pedido[cont].quantidade);
            	printf("Digite o numero da mesa que esta registrando o pedido:");
            	scanf("%d",&pedido[cont].mesa);
            	printf("Deseja fazer alguma observação: ");
            	scanf("%s",pedido[cont].obs);
            	cont++;
                break;
                
            case 2:
			
            	pedido->codigo = 1;
            	pedido->contador =1;
			
            	for(int i = 0; i < cont ; i++){
            	   printf("\n------------------------------------------------\n");
            	   printf("-------------------%dº - Pedido------------------\n",pedido->contador);
            	   printf("------------------------------------------------\n");
            	   printf("Codigo = %d \n",pedido->codigo);
            	   printf("Item = %d\n",pedido[i].item);
            	   printf("Quantidade = %d\n", pedido[i].quantidade); 
            	   printf("Mesa = %d\n",pedido[i].mesa);
            	   printf("Observação = %s\n",pedido[i].obs);
            	   pedido->codigo++;
            	   pedido->contador++;
	           }
	           break;
            case 3:
            	int codigo = 0;
            	printf("Qual o pedido que deseja excluir:");
            	scanf("%d",&codigo);
            	int ind = 0;
            	for (int i = 0; i < cont;i++){
            	   if(pedido[i].codigo == codigo ){
            	   	ind = i;
            	   	}
            	}
				
            	for(int i = ind; i < cont - 1; i++){
            	   pedido[i] = pedido[i+1];
            	   }
            	cont--;
            	break;
            case 0:
            	printf("----------AGRADEÇO PELA PREFERÊNCIA----------\n");
                printf("-------------FIM DO PROGRAMA-----------------");
                parar =! 0;
                break;
	           	    
            default:
            	printf("Opção inválida.");
                menu();
            
        }
    }
    
}
