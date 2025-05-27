#include <stdio.h> 
#include <stdlib.h> 
#include <time.h> 
#include <math.h> 

    double x, y, pi; 
	int numero_pontos = 100000; 
	int certos = 0; 
	int b = 1, a = -1; 
	
void probabilidade(){
//Gera os pontos cartesianos
    for (int i = 0; i<numero_pontos; i++){
	    x = ((double)rand()/RAND_MAX)*2.0 - 1.0; 
	    y = ((double)rand()/RAND_MAX)*2.0 - 1.0; 
//Equação da circunferência	    
	    if((pow(x,2) + pow(y,2)) <= 1.0){
	        certos++; 
	    }
	}
}
	
int main(){
	
	srand(time(NULL)); 
	
	probabilidade(); 
	
	 pi = 4*(double)certos/numero_pontos; 
	    printf("Numero estimado de pi será: %.6lf", pi); 
	
	return 0;
}
