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
    int opcao;
    int qtd_registrar;
    int parar;    
};


int main(){
    
    struct Inf_registro *pedido;
    pedido = (struct Inf_registro*) malloc(500*sizeof(struct Inf_registro));
    
    pedido->parar = 0;
	int x = 0;
    while(pedido->parar == 0){
        menu();
        
    	printf("Escolha uma opção = ");
        scanf("%d",&pedido->opcao);
        
        
        switch(pedido->opcao){
            case 1:
            	   printf("Informe o item que deseja registrar:");
            	   scanf("%d",&pedido[x].item);
            	   printf("Informe a quantidade de item que deseja:");
            	   scanf("%d",&pedido[x].quantidade);
            	   printf("Digite o numero da mesa que esta registrando o pedido: ");
            	   scanf("%d",&pedido[x].mesa);
            	   printf("Deseja fazer alguma observação: ");
            	   scanf("%s",pedido[x].obs);
            	   x++;
                break;
                
            case 2:
			
               pedido->codigo = 0;
               pedido->contador =1;
			
               for(int i = 0; i < x ; i++){
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
	            printf("Cod = ");
	            scanf("%d",&codigo);
	        	int ind = 0;
	        	for (int i = 0; i < x;i++){
	        		if(pedido[i].codigo == codigo ){
	        			ind = i;
					}
				}
				
				for(int i = ind; i< x - 1; i++){
					pedido[i] = pedido[i+1];
				}
				x--;
				break;
            case 0:
               printf("----------AGRADEÇO PELA PREFERENCIA----------\n");
               printf("-------------FIM DO PROGRAMA-----------------");
               pedido->parar =! 0;
               break;
	           	    
            default:
               printf("Opção inválida.");
               menu();
            
        }
    }
    
}
