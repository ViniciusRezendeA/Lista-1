#include <stdio.h>
#include <stdlib.h>
#include <math.h>

//question 2
float calculoDoPerimetro(char forma, float alturaOuRaio, float base){
    float perimetro;
    float pi = 3.14;
    switch (forma)
    {
    case 'C':
        
        perimetro = 2*(pi * alturaOuRaio);
        return perimetro;
        break;
    case 'R':
        perimetro = 2*(alturaOuRaio+base);
        return perimetro;
        break;
    case 'Q':
        perimetro =  alturaOuRaio*4;
        return perimetro;
        break;
    default:
        return (float)0.0;

        break;
    }
}
float calculoDeArea(char forma, float alturaOuRaio, float base){
    
    float area;
    float pi = 3.14;
    switch (forma)
    {
    case 'C':
        
        area = pow((pi * alturaOuRaio), 2.0);
        return area;
        break;
    case 'R':
        area = alturaOuRaio * base;
        return area;
        break;
    case 'Q':
        area = pow(alturaOuRaio, 2.0);
        return area;
        break;
    default:
        return (float)0.0;

        break;
    }
}

//question 4
int calculoDeSucessor(int numero){
    return numero+1;
}

//question 5
float calculoDaMedia(int notas[]){
   float media = (float)calculoDaSoma(notas)/3.0;
   return media;

}
int calculoDaSoma(int notas[]){
    int soma = 0;
    for (int i = 0; i < 3; i++)
    {
       soma = soma+notas[i];
    }
    return soma;
}
int calculoDoProduto(int notas[]){
    int produto = 1;
    for (int i = 0; i < 3; i++)
    {
       produto = produto*notas[i];
    }
    return produto;
}

//question 6
float calculoIMC(float altura, float peso){
    float imc =  peso/pow(altura,2.0);
    return imc;
}

//question 7
float conversorCelcius(float farenheit){
    float celsius = 5.0 / 9.0 * (farenheit - 32.0);
    return celsius;
}
