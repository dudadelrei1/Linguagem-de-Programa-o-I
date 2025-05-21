#include <stdio.h>
#include <stdlib.h> 
#include <time.h> 
#include <math.h>

    clock_t start, end;
    double tempogasto;
    int resp;
    
void repeticao(){
    start = clock(); 
    for(int i = 0; i<pow(10,6); i++){
        resp=+i;
        printf("%d\n", i);
    }
    end = clock(); 
}


int main()
{
    repeticao(); 
    
    tempogasto = ((double)(end-start)/CLOCKS_PER_SEC);
    
    printf("Tempo de execucação: %f", tempogasto); 

    return 0;
}