#include <stdio.h>
#include <stdlib.h>

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
    int opcao;
    int qtd_registrar;
    int parar;  
    
};

int main(){
    
    struct Inf_registro *pedido;
    pedido = (struct Inf_registro*) malloc(500*sizeof(struct Inf_registro));
    
    pedido->parar = 0;
    while(pedido->parar == 0){
        menu();
        printf("Escolha uma opção = ");
        scanf("%d",&pedido->opcao);
        
        switch(pedido->opcao){
            case 1:
                printf("Informe quantos registros deseja fazer:");
                scanf("%d",&pedido->qtd_registrar);
	    
                for(int i = 0; i < pedido->qtd_registrar; i++){
            	    printf("Informe o item que deseja registrar:");
            	    scanf("%d",&pedido[i].item);
            	    printf("Informe a quantidade de item que deseja:");
            	    scanf("%d",&pedido[i].quantidade);
            	    printf("Digite o numero da mesa que esta registrando o pedido: ");
            	    scanf("%d",&pedido[i].mesa);
            	    printf("Deseja fazer alguma observação: ");
            	    scanf("%s",pedido[i].obs);
            	   
            	    
            	    
                }
                break;
                case 2:
                    pedido->codigo = 100;
                    pedido->contador =1;
                    for(int i = 0; i < pedido->qtd_registrar; i++){
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
	            case 0:
	           	    printf("----------AGRADEÇO PELA PREFERENCIA----------\n");
	           	    printf("-------------FIM DO PROGRAMA-----------------");
	           	    pedido->parar =! 0;
	           	    break;
	           default:
				menu();
            
        }
    }
    
}
