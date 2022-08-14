#include <stdio.h>
#include <stdlib.h>


/**
 * @author Andre Ferraz
 * @matricula 770830
 * */



int main() 
{

  float comprimento;
  float altura;
  float largura;
  float volume;
  
  
  printf("\n Este programa irá calcular e mostrar o volume do paralelepipedo com sete vezes os valores a seguir ");

    printf("\n Digite o valor do comprimento---> ");
    scanf("%d", &comprimento);

    printf("\n Digite o valor da largura ---> ");
    scanf("%f", &largura);

   printf("\n Digite o valor da altura ---> ");
    scanf("%f", &altura);
  
     
    comprimento = comprimento * 7;
    largura = largura * 7;
    altura = altura * 7;

      volume = comprimento * altura * largura;

  printf("\n o volume do paralelepipedo sera %.2f", volume);
     


  

return 0;
}