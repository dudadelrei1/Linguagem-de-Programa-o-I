#include <stdio.h>

    int main(){
    
    float etanol; 
    float gasolina; 
    
    printf("\tDecida qual combustível abastecer!");
    printf("\nValor do etanol: ");
    scanf("%f", &etanol);
    printf("Valor da gasolina: ");
    scanf("%f", &gasolina); 
    
    float razao = etanol/gasolina; 
    
    printf("A razão do valor etanol/gasolina = %f\n", razao); 
    
    if(etanol/gasolina > 0.7){
        printf("Escolha etanol!");
    } else if(etanol/gasolina == 0.7){
        printf("Escolha etanol. O meio ambiente agradece!"); 
    }else {
        printf("Escolha gasolina!");
    }

    return 0;
}
