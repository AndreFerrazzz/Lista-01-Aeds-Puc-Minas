#include <stdio.h>
#include <stdlib.h>


/**
 * @author Andre Ferraz
 * @matricula 770830
 * */



int main() 
{
   int lado1;
   int lado2;
  float area;
  float quartodaarea;
  
  printf("\n Este programa irá calcular um quarto da area de um retangulo. ");

    printf("\n Digite o valor do primeiro lado---> ");
    scanf("%d", &lado1);

    printf("\n Digite o valor do segundo lado---> ");
    scanf("%d", &lado2);

    area = lado1 * lado2;
    quartodaarea = area/4;

  printf("\n O quarto da area eh %.2f", quartodaarea);

return 0;
}