#include <stdio.h>


// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

  int main() {
  // Área para definição das variáveis para armazenar as propriedades das cidades

  // Área para entrada de dados

  // Área para exibição dos dados da cidade
   
    char estado[20], codigo[20], cidade[20];//o valor entre chaves especificaa quantidade máxima  de caracteres da variável
    int pt, carta;
    float pib, area, populacao;

    printf("Desafio Cartas\n");

    printf("Escreva o numero da carta:\n");
    scanf("%i", &carta); //sintaxe "i" serve para especificar valores inteiros

    printf("Escreva o estado com uma letra(de A - H):\n");
    scanf("%s", estado); 

    printf("Escreva o codigo da carta(de 01 - 04):\n");
    scanf("%s", codigo); 

    printf("Escreva o nome da cidade:\n");
    scanf("%s", cidade); //sintaxe "s" serve para especificar strings com mais letras

    printf("Escreva a população em milhares(ex:10.000):\n");
    scanf("%f", &populacao);

    printf("Escreva a area em milhares(ex:10.000):\n");
    scanf("%f", &area);

    printf("Escreva o PIB em milhares(ex:10.000):\n");
    scanf("%f", &pib); //variáveis tipo float, necessitam do operador &

    printf("Escreva o N de pontos turisticos:\n");
    scanf("%i", &pt); //variáveis tipo int, necessitam do operador &

    

    printf("Carta: %i \n", carta); 
    printf("Estado: %s \n", estado);
    printf("Código: %s",estado); //concatenando sem usar funções, aqui não foi feita a quebra de linha para juntar as variáveis
    printf("%s \n",codigo);//concatenando sem usar funções
    printf("Nome da Cidade: %s \n", cidade);
    printf("População: %f \n", populacao);
    printf("Área: %f km²\n", area);//coloca-se  continuação do texto após a sintaxe e antes da quebra de linha
    printf("PIB: %f R$\n ", pib);//pib não é uma variável tipo int, portanto não precisa do &
    printf("Número de pontos turísticos: %i \n", pt);

    return 0; 
}
