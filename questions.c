
#include "functions.c"

void questionOne()
{

    float altura = 2.0;
    float base = 3.5;
    float area = (base * altura);
    printf("Um retangulo de bse igual a %.2f", base);
    printf("\ne altura igual a %.2f", altura);
    printf("\ntem uma area igual a %.2f", area);
}
void questionTwo()
{
    float areaQuadrado = calculoDeArea('Q', (float)7.0, (float)0.0);
    float perimetroQuadrado = calculoDoPerimetro('Q', (float)5.0, (float)0.0);

    float perimetroRetangulo = calculoDoPerimetro('R', (float)3.5, (float)2.0);

    float areaCirculo = calculoDeArea('C', (float)1.0, (float)0.0);
    float perimetroCirculo = calculoDoPerimetro('C', (float)5.0, (float)0.0);

    printf("a) Perimetro correspondente para o retangulo do exercicio anterior. %.2f", perimetroRetangulo);
    printf("\nb) Perimetro de um quadrado de lado igual a cinco %.2f", perimetroQuadrado);
    printf("\nc) Area de um quadrado de lado igual a sete %.2f", areaQuadrado);
    printf("\nd) Area de um circulo de raio igual a um %.2f", areaCirculo);
    printf("\ne) Perimetro de um circulo de raio igual a cinco. %.2f", perimetroCirculo);
}
void questionFour()
{
    int number;
    printf("Digite um numero inteiro qualquer para saber seu sucessor\n");
    scanf("%i", &number);
    int sucessor = calculoDeSucessor(number);
    printf("O sucessor de %i e %i", number, sucessor);
}
void questionFive()
{
    int notas[2];
    for (int i = 0; i < 3; i++)
    {
        printf("Digite sua %i nota \n", i + 1);
        scanf("%i", &notas[i]);
    }
    int soma = calculoDaSoma(notas);
    float media = calculoDaMedia(notas);
    int produto = calculoDoProduto(notas);

    printf("A soma de todas as notas sao %i\n", soma);
    printf("A media de todas as notas sao %.2f\n", media);
    printf("O produto de todas as notas sao %i\n", produto);
}
void questionSix()
{
    float altura,peso;
    
    printf("Informe seu peso\n");
    scanf("%f", &peso);

    printf("Informe sua altura em metros\n");
    scanf("%f", &altura);

    float imc = calculoIMC(altura,peso);
    printf("Seu indice de IMC e %.2f\n", imc);
}
void questionSeven()
{
    float farenheit;
    
    printf("Informe a temperatuar em Farenheit\n");
    scanf("%f", &farenheit);

    float Celsius = conversorCelcius(farenheit);
    printf("Esta temperatura em Celsius e %.2f", Celsius);
}
