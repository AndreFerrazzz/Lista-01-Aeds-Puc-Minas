
#include <stdio.h>
#include <stdlib.h>

/**
 * @author Andre Ferraz
 * @matricula 770830
 * */



int main()
{
    int Numero;
    float area;
    float sextodaarea;
    
     printf("\n Este programa ira calcular o sexto de um quadrado.");
    
     printf("\n Digite um valor inteiro que corresponde ao lado --->");
     scanf("%d",&Numero);
     
     
    area = Numero * Numero;
    sextodaarea = area/6;
    
    printf("\n o sexto da area correspondente é %.2f", sextodaarea);
    
    printf("\n Fim do programa!");

    return 0;
}
