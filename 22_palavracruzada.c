#include <stdio.h>
#include <string.h>

int main()
{
 
 char grades[7][6]; 
 char resp1[100], resp2[100], resp3[100], resp4[100], resp5[100]; 
 
 
 printf("\tPalavra Cruzada!"); 
 printf("\nDicas: "); 
 printf("\n 1 - É um brinquedo\n");
 printf(" 2 - É um animal marinho\n");
 printf(" 3 - É um astro no céu\n");
 printf(" 4 - Masculino de rainha\n");
 printf(" 5 - Usa-se no dedo\n\n");
    
 //Inicialização da matriz com ' '    
 for(int i=0; i<7; i++){
        for(int j=0; j<6; j++){
            grades[i][j] = ' ';
        }
    }
    
  //Espaços para a palavra BONECA
  grades[0][0] = '*'; 
  grades[1][0] = '*';
  grades[2][0] = '*'; 
  grades[3][0] = '*';
  grades[4][0] = '*'; 
  grades[5][0] = '*';
  
  //Espaços para a palavra BALEIA
  grades[0][1] = '*';
  grades[0][2] = '*';
  grades[0][3] = '*';
  grades[0][4] = '*';
  grades[0][5] = '*';
  
  //Espaços para a palavra ESTRELA
  grades[0][3] = '*';
  grades[1][3] = '*';
  grades[2][3] = '*';
  grades[3][3] = '*';
  grades[4][3] = '*';
  grades[5][3] = '*';
  grades[6][3] = '*';
  
  //Espaços para a palavra REI 
  grades[3][3] = '*';
  grades[3][4] = '*';
  grades[3][5] = '*';
  
  //Espaços para a palavra ANEL 
  grades[5][0] = '*';
  grades[5][1] = '*';
  grades[5][2] = '*';
  grades[5][3] = '*';
  
  //Cria o desenho 
  for(int i=0; i<7; i++){
      for(int j=0; j<6; j++){
          printf("| %c", grades[i][j]);
      }
      printf("\n");
  }
  
  printf("\nDigite suas respostas (tudo minúsculo): \n"); 
  printf(" 1 - "); 
  fgets(resp1, sizeof(resp1), stdin); 
  printf(" 2 - ");
  fgets(resp2, sizeof(resp2), stdin);
  printf(" 3 - "); 
  fgets(resp3, sizeof(resp3), stdin); 
  printf(" 4 - ");
  fgets(resp4, sizeof(resp4), stdin);
  printf(" 5 - ");
  fgets(resp5, sizeof(resp5), stdin);
  
  //Compara as respostas e, se correto, refaz o desenho
  
  if(resp1[0] == 'b' && resp1[1] == 'o' && resp1[2] == 'n' && resp1[3] == 'e' && resp1[4] == 'c'&& resp1[5] == 'a'){
      if(resp2[0] == 'b' && resp2[1] == 'a' && resp2[2] == 'l' && resp2[3] == 'e' && resp2[4] == 'i'&& resp2[5] == 'a'){
          if(resp3[0] == 'e' && resp3[1] == 's' && resp3[2] == 't' && resp3[3] == 'r' && resp3[4] == 'e' && resp3[5] == 'l' && resp3[6] == 'a'){
             if(resp4[0] == 'r' && resp4[1] == 'e' && resp4[2] == 'i'){
                 if(resp5[0] == 'a' && resp5[1] == 'n' && resp5[2] == 'e' && resp5[3] == 'l'){
                     printf("\nVocê acertou!\n"); 
                     grades[0][0] = 'B'; 
                     grades[1][0] = 'O';
                     grades[2][0] = 'N'; 
                     grades[3][0] = 'E';
                     grades[4][0] = 'C'; 
                     grades[5][0] = 'A';
  
                     grades[0][1] = 'A';
                     grades[0][2] = 'L';
                     grades[0][3] = 'E';
                     grades[0][4] = 'I';
                     grades[0][5] = 'A';
  
                     grades[1][3] = 'S';
                     grades[2][3] = 'T';
                     grades[3][3] = 'R';
                     grades[4][3] = 'E';
                     grades[5][3] = 'L';
                     grades[6][3] = 'A';
  
                     grades[3][4] = 'E';
                     grades[3][5] = 'I';
  
                     grades[5][0] = 'A';
                     grades[5][1] = 'N';
                     grades[5][2] = 'E';
                     
                     //Imprime o desenho pronto
                     for(int i=0; i<7; i++){ for(int j=0; j<6; j++){printf("| %c", grades[i][j]);}
                          printf("\n");}
                 }
             } 
          }
      }
  } 
  else{
      printf("\n Tente novamente!");
  }
  
   return 0;
}
