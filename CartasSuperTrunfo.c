// Inclui a biblioteca padrão de entrada e saída (Standard Input/Output), 
// que é necessária para usar funções como printf() para exibir texto na tela 
// e scanf() para ler dados inseridos pelo usuário.
#include <stdio.h>

// A função main() é o ponto de entrada obrigatório de todo programa em C.
// O 'int' antes de 'main' indica que a função retornará um número inteiro ao sistema operacional
// para informar se o programa executou com sucesso ou não.
int main() {
    // --- Declaração de Variáveis para a Carta 1 ---
    
    // Declara três arrays de caracteres (strings) para armazenar textos.
    // 'char[50]' reserva espaço na memória para 50 caracteres.
    // Em C, uma string é um array de caracteres terminado por um caractere especial nulo ('\0'),
    // então, na prática, pode-se armazenar um texto de até 49 caracteres.
    char Estado[50], CodigoDaCarta[50], NomeDaCidade[50];
    
    // Declara duas variáveis do tipo 'int' (inteiro) para armazenar números inteiros,
    // como a população e a quantidade de pontos turísticos.
    int Populacao, PontoTuristico;
    
    // Declara duas variáveis do tipo 'float' para armazenar números com casas decimais 
    // (ponto flutuante), como a área e o Produto Interno Bruto (PIB).
    float Area, Pib;

    // --- Declaração de Variáveis para a Carta 2 (a lógica é a mesma da Carta 1) ---
    // Declaração das mesmas variáveis, mas com o sufixo '2' para diferenciar
    // e armazenar os dados da segunda carta.
    char Estado2[50], CodigoDaCarta2[50], NomeDaCidade2[50];
    int Populacao2, PontoTuristico2;
    float Area2, Pib2;

    // A função printf() é usada para imprimir texto no console.
    // O '\n' é um caractere especial que significa "nova linha", movendo o cursor para a linha de baixo.
    printf("Olá, usuário! Neste programa, você deverá inserir alguns dados para o jogo de cartas Super Trufo. As informações referentes às suas Cartas 1 e 2 serão solicitadas a seguir: \n");
    printf("Carta 1: \n");

    // --- Leitura dos Dados da Carta 1 ---
    
    // Pede ao usuário para digitar o estado.
    printf("Digite seu Estado: \n");
    // A função scanf() lê a entrada do teclado.
    // O especificador de formato "%s" indica que scanf() deve ler uma string (texto).
    // Para arrays (como 'Estado'), não é necessário usar o '&' antes do nome da variável.
    scanf("%s", Estado);

    // Pede ao usuário para digitar o código da carta.
    printf("Digite o Codigo da sua Carta: \n");
    // Lê e armazena o código da carta.
    scanf("%s", CodigoDaCarta);

    // Pede ao usuário para digitar o nome da cidade.
    printf("Digite o Nome da sua Cidade: \n");
    // Lê e armazena o nome da cidade.
    scanf("%s", NomeDaCidade);

    // Pede ao usuário para digitar a população.
    printf("Digite o tamanho da sua população: \n");
    // O especificador de formato "%d" indica a leitura de um número inteiro (decimal).
    // O '&' é o operador "endereço de". Ele é necessário aqui para que scanf() saiba
    // em qual local da memória deve armazenar o número digitado pelo usuário.
    scanf("%d", &Populacao);

    // Pede ao usuário para digitar a área.
    printf("Digite o tamanho da sua Área: \n");
    // O especificador de formato "%f" indica a leitura de um número de ponto flutuante (float).
    // O '&' também é necessário para passar o endereço de memória da variável 'Area'.
    scanf("%f", &Area);

    // Pede ao usuário para digitar o PIB.
    printf("Digite o valor do seu PIB: \n");
    // Lê e armazena o valor do PIB na variável 'Pib'.
    scanf("%f", &Pib);
    
    // Pede ao usuário para digitar o número de pontos turísticos.
    printf("Digite o Número de Pontos Turísticos: \n");
    // Lê e armazena o número de pontos turísticos na variável 'PontoTuristico'.
    scanf("%d", &PontoTuristico);

    // Imprime um título para a segunda seção de entrada de dados, com uma linha em branco antes para separar.
    printf("\nCarta 2: \n");

    // --- Leitura dos Dados da Carta 2 (processo idêntico ao da Carta 1) ---
    printf("Digite seu Estado: \n");
    scanf("%s", Estado2);

    printf("Digite o Codigo da sua Carta: \n");
    scanf("%s", CodigoDaCarta2);

    printf("Digite o Nome da sua Cidade: \n");
    scanf("%s", NomeDaCidade2);

    printf("Digite o tamanho da sua população: \n");
    scanf("%d", &Populacao2);

    printf("Digite o tamanho da sua Área: \n");
    scanf("%f", &Area2);

    printf("Digite o valor do seu PIB: \n");
    scanf("%f", &Pib2);

    printf("Digite o Número de Pontos Turísticos: \n");
    scanf("%d", &PontoTuristico2);

    // Imprime um cabeçalho para a seção de exibição dos dados.
    printf("\n--- DADOS FINAIS ---\n"); 

    // --- Exibição dos Dados da Carta 1 ---
    
    // Imprime o título da carta.
    printf("\nCarta 1: \n");
    // Usa um único printf() para exibir múltiplos valores.
    // Os especificadores de formato (%s, %d) são substituídos, na ordem,
    // pelos valores das variáveis listadas após a string (Estado, CodigoDaCarta, etc.).
    printf(" Estado: %s\n Codigo: %s\n Cidade: %s\n População: %d\n", Estado, CodigoDaCarta, NomeDaCidade, Populacao);
    // Exibe os dados restantes da Carta 1.
    // O especificador %f é usado para os valores do tipo float.
    printf(" Área: %.2f km²\n PIB: %.2f bilhões\n Pontos Turísticos: %d\n", Area, Pib, PontoTuristico);

    // --- Exibição dos Dados da Carta 2 ---
    printf("\nCarta 2: \n");
    // Exibe todos os dados coletados para a Carta 2.
    printf(" Estado: %s\n Codigo: %s\n Cidade: %s\n População: %d\n", Estado2, CodigoDaCarta2, NomeDaCidade2, Populacao2);
    printf(" Área: %.2f km²\n PIB: %.2f bilhões\n Pontos Turísticos: %d\n", Area2, Pib2, PontoTuristico2);

    // O comando 'return 0;' finaliza a função main() e retorna o valor 0.
    // Para o sistema operacional, um retorno 0 significa que o programa foi executado
    // com sucesso e terminou sem erros.
    return 0;
}
