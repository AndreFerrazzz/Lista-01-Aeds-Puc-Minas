#include <stdio.h>
#include <stdlib.h>
#define M_PI  3.141592653589793


/**
 * @author Andre Ferraz
 * @matricula 770830
 * */



int main() 
{

  float area;
  float raio;

    printf("\n Este programa irá calcular e mostrar o raio do triplo dessa área.");

  printf("\n Digite o valor da area da circunferencia ---> ");
  scanf("%f", &area);

  area = area * 3;
  raio = (float)sqrt(area/M_PI);
  

  printf("\n O raio sera igual a %.2f", raio);
  
printf("\n Fim do Programa!");
  
  return 0;
}