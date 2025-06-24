#include <stdio.h>

float mediaetanol = 0, precoetanol = 0, mediagasolina = 0, precogasolina = 0, mediagnv = 0, precognv = 0;
float custoetanol = 0, custogas = 0, custognv = 0; 

void consumo(){
    printf("Qual a média de consumo do seu carro com etanol? ");
    scanf("%f", &mediaetanol);
    printf("Preço do etanol: ");
    scanf("%f", &precoetanol); 
    printf("Qual a média de consumo do seu carro com gasolina? ");
    scanf("%f", &mediagasolina);
    printf("Preço da gasolina: ");
    scanf("%f", &precogasolina); 
    printf("Qual a média de consumo do seu carro com GNV? ");
    scanf("%f", &mediagnv);
    printf("Preço do GNV: ");
    scanf("%f", &precognv);
}

void calculo (){
    custoetanol = precoetanol/mediaetanol; 
    custogas = precogasolina/mediagasolina; 
    custognv = precognv/mediagnv; 
}

void condicional(){
    if(custoetanol < custogas && custoetanol < custognv){
        printf("Escolha etanol!"); 
    } else if(custogas < custoetanol && custogas < custognv){
        printf("Escolha gasolina!");
    }else if (custognv < custogas && custognv < custoetanol){
        printf("Escolha GNV!"); 
    }
}
   
int main()
{
    consumo();
    calculo(); 
    condicional(); 
    
    return 0;
}
