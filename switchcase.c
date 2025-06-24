#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv){
    int diaSemana = 0; 
    if(argc==2){
        diaSemana = atoi(argv[1]);
    } else if (argc > 2){
        printf("Muitos argumentos!\n");
        return 1; 
    } else {
        printf("Entre com o dia da semana (número)\n");
        return 1; 
    }
    
    switch(diaSemana){
        case 1: 
        printf("Domingo\n"); 
        
        case 2: 
        printf("Segunda\n"); 
        
        case 3: 
        printf("Terça\n"); 
        
        case 4: 
        printf("Quarta\n"); 
        
        case 5: 
        printf("Quinta\n"); 
        
        case 6: 
        printf("Sexta\n"); 
        
        case 7: 
        printf("Sábado\n"); 
        
        
    }

    return 0;
}
