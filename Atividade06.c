#include <stdio.h>
#include <stdlib.h>
#include <math.h>


/**
 * @author Andre Ferraz
 * @matricula 770830
 * */



int main() 
{
  float lado;
  float area;
  float perimetro;
  float altura;
  
  printf("\n Este programa irá calcular e mostrar a altura, área e o perímetro do triângulo com o dobro do lado.");

    printf("\n Digite o valor do lado do triangulo equilatero --->");
    scanf("%f", &lado);

  lado = lado * 2;
   perimetro = lado*3;
  //Raiz de 3 sendo usado 1.7//
   area = (1.7 * (lado*lado))/4;
   altura = (lado*1.7)/2;
   

  
  printf("\n A altura sera %f, a area %f, e o perimetro %f", altura,area,perimetro);

return 0;
}