#include <stdio.h>

int main()
{
    int i; 
    
    printf("Sequencial entre 0 e 10000\n");
    for(i =0; i<10000; i++){
            printf("%d\n", i);
    }
    
    printf("Sequencial entre -10000 e 10000\n");
    for(int i = -10000; i <10000; i++){
        printf("%d\n", i);
    }
    
    printf("Sequencial entre 0 e 10000 de 2 em 2 de números pares\n");
     for(int i = 0; i <10000; i+=2){
        printf("%d\n", i);
    }
    
    printf("Sequencial entre 0 e 10000 de 2 em 2 de números ímpares\n");
    for(int i = 1; i <10000; i+=2){
        printf("%d\n", i);
    }
    
    printf("Sequencial entre 0 e 10000 de 3 em 3\n");
    for(int i = -10000; i <10000; i+=3){
        printf("%d\n", i);
    }
    
    return 0;
}