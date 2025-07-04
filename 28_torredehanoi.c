#include <stdio.h>

int main()
{
   //Inicializa variáveis
    int pilhamovidainicialmente = 0; 
    
    //Explica o intuito do algoritmo
    printf("\tDescubra como resolver a Torre de Hanoi para 3 discos. Basta escolher seu primeiro movimento!\n\n");
    printf("Obs.: Todos os discos começam na pilha 1\n"); 
    
    //Pergunta ao usuário a primeira pilha para qual o primeiro disco será movido para a partir daí montar a sequência de movimentos
    printf("Escolha uma pilha para mover o primeiro disco (2 ou 3): "); 
    scanf("%d", &pilhamovidainicialmente); 
    
    //Caso a pilha escolhida seja 2
    if (pilhamovidainicialmente == 2) {
        printf("Mova o disco 1 para a pilha 2\n"); 
        printf("Mova o disco 2 para a pilha 3\n"); 
        printf("Mova o disco 1 para a pilha 3\n"); 
        printf("Mova o disco 3 para a pilha 2\n"); 
        printf("Mova o disco 1 para a pilha 1\n"); 
        printf("Mova o disco 2 para a pilha 2\n"); 
        printf("Mova o disco 1 para a pilha 2\n"); 
       
    } 
    /*Funcionamento semelhante ao pilhamovidainicialmente = 2. A única diferença é que onde um disco se movia para 
    pilha 2, agora se move para a pilha 3, e vice-versa.*/
    else if(pilhamovidainicialmente == 3){
        printf("Mova o disco 1 para a pilha 3\n"); 
        printf("Mova o disco 2 para a pilha 2\n"); 
        printf("Mova o disco 1 para a pilha 2\n"); 
        printf("Mova o disco 3 para a pilha 3\n"); 
        printf("Mova o disco 1 para a pilha 1\n"); 
        printf("Mova o disco 2 para a pilha 3\n"); 
        printf("Mova o disco 1 para a pilha 3\n"); 
    }
    
    else {
        printf("Pilha inválida! Escolha 2 ou 3.\n");
    }

    return 0;
                }
           
