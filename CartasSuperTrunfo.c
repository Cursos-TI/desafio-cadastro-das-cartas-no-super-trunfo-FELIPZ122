// Inclui a biblioteca padrão de entrada e saída (Standard Input/Output)
#include <stdio.h>

// A função main() é o ponto de entrada obrigatório de todo programa em C.
int main() {
    // --- Declaração de Variáveis para a Carta 1 ---
    char Estado[50], CodigoDaCarta[50], NomeDaCidade[50];
    
    unsigned long int Populacao;
    int PontoTuristico; 
    float Area, Pib;

    // --- Declaração de Variáveis para a Carta 2 ---
    char Estado2[50], CodigoDaCarta2[50], NomeDaCidade2[50];
    unsigned long int Populacao2;
    int PontoTuristico2;
    float Area2, Pib2;

    // Declaração das variáveis que irão guardar os resultados dos cálculos.
    float DensidadePopulacional, DensidadePopulacional2;
    float PIBperCapita, PIBperCapita2; 
    
    float DensidadeInvertida, DensidadeInvertida2;
    float Scarta1, Scarta2;

    printf("Olá, usuário! Neste programa, você deverá inserir alguns dados para o jogo de cartas Super Trufo. As informações referentes às suas Cartas 1 e 2 serão solicitadas a seguir: \n");
    printf("\nCarta 1: \n");

    // --- Leitura dos Dados da Carta 1 ---
    printf("Digite seu Estado: \n");
    scanf("%s", Estado);

    printf("Digite o Codigo da sua Carta: \n");
    scanf("%s", CodigoDaCarta);

    printf("Digite o Nome da sua Cidade: \n");
    scanf("%s", NomeDaCidade);

    printf("Digite o tamanho da sua população: \n");
    // O especificador %lu é para 'unsigned long int'.
    scanf("%lu", &Populacao);

    printf("Digite o tamanho da sua Área: \n");
    scanf("%f", &Area);

    printf("Digite o valor do seu PIB (em bilhões): \n");
    scanf("%f", &Pib);
    
    printf("Digite o Número de Pontos Turísticos: \n");
    // O especificador %d é para 'int'.
    scanf("%d", &PontoTuristico);

    // --- Cálculos para a Carta 1 ---
    DensidadePopulacional = (float)Populacao / Area; 
    PIBperCapita = (float)Pib / Populacao;
    
    DensidadeInvertida = 1.0f / DensidadePopulacional;

    printf("\nCarta 2: \n");

    // --- Leitura dos Dados da Carta 2 ---
    printf("Digite seu Estado: \n");
    scanf("%s", Estado2);

    printf("Digite o Codigo da sua Carta: \n");
    scanf("%s", CodigoDaCarta2);

    printf("Digite o Nome da sua Cidade: \n");
    scanf("%s", NomeDaCidade2);

    printf("Digite o tamanho da sua população: \n");
    scanf("%lu", &Populacao2);

    printf("Digite o tamanho da sua Área: \n");
    scanf("%f", &Area2);

    printf("Digite o valor do seu PIB (em bilhões): \n");
    scanf("%f", &Pib2);

    printf("Digite o Número de Pontos Turísticos: \n");
    scanf("%d", &PontoTuristico2);

    // --- Cálculos para a Carta 2 ---
    DensidadePopulacional2 = (float)Populacao2 / Area2; 
    PIBperCapita2 = (float)Pib2 / Populacao2;
    

    DensidadeInvertida2 = 1.0f / DensidadePopulacional2;

    // --- Exibição dos Dados Finais ---
    printf("\n--- DADOS FINAIS ---\n"); 

    printf("\nCarta 1: \n");
    printf(" Estado: %s\n Codigo: %s\n Cidade: %s\n População: %lu\n", Estado, CodigoDaCarta, NomeDaCidade, Populacao);
    printf(" Área: %.2f km²\n PIB: %.2f bilhões\n Pontos Turísticos: %d\n", Area, Pib, PontoTuristico);
    printf(" Densidade Populacional: %.2f hab/km²\n", DensidadePopulacional);
    printf(" PIB per Capita: %.2f\n", PIBperCapita);

    printf("\nCarta 2: \n");
    printf(" Estado: %s\n Codigo: %s\n Cidade: %s\n População: %lu\n", Estado2, CodigoDaCarta2, NomeDaCidade2, Populacao2);
    printf(" Área: %.2f km²\n PIB: %.2f bilhões\n Pontos Turísticos: %d\n", Area2, Pib2, PontoTuristico2);
    printf(" Densidade Populacional: %.2f hab/km²\n", DensidadePopulacional2);
    printf(" PIB per Capita: %.2f\n", PIBperCapita2);

    // --- Cálculo do Super Poder ---
    // O Super Poder é a soma de todos os atributos, usando a densidade INVERTIDA.
    Scarta1 = (float)Populacao + Area + Pib + (float)PontoTuristico + DensidadeInvertida + PIBperCapita;
    Scarta2 = (float)Populacao2 + Area2 + Pib2 + (float)PontoTuristico2 + DensidadeInvertida2 + PIBperCapita2;

    // --- Comparação Atributo a Atributo ---
    printf("\n--- RESULTADOS DAS COMPARAÇÕES ---\n");

    // Para estes atributos, MAIOR vence.
    printf("População: Vencedora: %s\n", Populacao > Populacao2 ? "Carta 1" : "Carta 2");
    printf("Área: Vencedora: %s\n", Area > Area2 ? "Carta 1" : "Carta 2");
    printf("PIB: Vencedora: %s\n", Pib > Pib2 ? "Carta 1" : "Carta 2");
    printf("Pontos Turísticos: Vencedora: %s\n", PontoTuristico > PontoTuristico2 ? "Carta 1" : "Carta 2");
    printf("PIB per Capita: Vencedora: %s\n", PIBperCapita > PIBperCapita2 ? "Carta 1" : "Carta 2");
    
    // CORREÇÃO: Para Densidade Populacional, MENOR vence.
    printf("Densidade Populacional: Vencedora: %s\n", DensidadePopulacional < DensidadePopulacional2 ? "Carta 1" : "Carta 2");

    // --- Resultados do Super Poder ---
    printf("\nSuper Poder da Carta 1: %.2f\n", Scarta1);
    printf("Super Poder da Carta 2: %.2f\n", Scarta2);
    
    // CORREÇÃO: Para o Super Poder, MAIOR vence.
    printf("Super Poder (Geral): Vencedora: %s\n", Scarta1 > Scarta2 ? "Carta 1" : "Carta 2");

    return 0;
}
