#include <stdio.h>

int main() {
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    //Estado da Cidade, de A a H
    char estado_1, estado_2;
    //Código da carta, letra do estado + número entre 01 a 04
    char cod_carta_1[4], cod_carta_2[4]; //[4] porque são 3 caracteres mais o enter
    //Nome da Cidade
    char nome_cidade_1[50], nome_cidade_2[50];
    //População
    int populacao_1, populacao_2;
    //Área em km²
    float area_1, area_2;
    //PIB
    float pib_1, pib_2;
    //Número de pontos turísticos
    int num_pontos_turisticos_1, num_pontos_turisticos_2;

    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
   
    //Registrando primeira carta
    printf("REGISTRAR PRIMEIRA CARTA: \n");
    printf("Digite uma letra entre A e H, para representar o estado da cidade: ");
    scanf(" %c", &estado_1); //espaço para garantir que vai ler o caractere
    printf("Digite o código da carta. Ele deve começar com a letra registrada na etapa anterior, seguida de um número entre 01 e 04: ");
    scanf("%s", cod_carta_1);
    printf("Digite o nome da cidade. Use _ no lugar de espaços caso necessário (ex: \"São_Paulo\" em vez de \"São Paulo\"): ");
    scanf("%s", nome_cidade_1);
    printf("Digite a população da cidade. Não use pontos, vírgulas nem palavras (ex: \"1400000\" e não \"1.400.000\" ou \"1,4 milhão\"): )");
    scanf("%d", &populacao_1);
    printf("Digite a área em km². Indique apenas os números (ex: \"1200.25\" e não \"1200.25 km²\"): ");
    scanf("%f", &area_1);
    printf("Digite o PIB da cidade, em bilhões de reais. Indique apenas os números (ex: \"300.50\" e não \"R$300.50 bi\"): ");
    scanf("%f", &pib_1);
    printf("Digite o número de pontos turísticos da cidade: ");
    scanf("%d", &num_pontos_turisticos_1);

    //Registrando segunda carta
    printf("\n"); //para pular uma linha entre o registro da primeira e da segunda carta 
    printf("REGISTRAR SEGUNDA CARTA: \n");
    printf("Digite uma letra entre A e H, para representar o estado da cidade: ");
    scanf(" %c", &estado_2); //espaço para garantir que vai ler o caractere
    printf("Digite o código da carta. Ele deve começar com a letra registrada na etapa anterior, seguida de um número entre 01 e 04: ");
    scanf("%s", cod_carta_2);
    printf("Digite o nome da cidade. Use _ no lugar de espaços caso necessário (ex: \"São_Paulo\" em vez de \"São Paulo\"): ");
    scanf("%s", nome_cidade_2);
    printf("Digite a população da cidade. Não use pontos, vírgulas nem palavras (ex: \"1400000\" e não \"1.400.000\" ou \"1,4 milhão\"): )");
    scanf("%d", &populacao_2);
    printf("Digite a área em km². Indique apenas os números (ex: \"1200.25\" e não \"1200.25 km²\"): ");
    scanf("%f", &area_2);
    printf("Digite o PIB da cidade, em bilhões de reais. Indique apenas os números (ex: \"300.50\" e não \"R$300.50 bi\"): ");
    scanf("%f", &pib_2);
    printf("Digite o número de pontos turísticos da cidade: ");
    scanf("%d", &num_pontos_turisticos_2);
 
    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.

    //Exibindo primeira carta
    printf("\n"); //Para pular uma linha entre os registros de cartas e exibição das cartas
    printf("PRIMEIRA CARTA\n");
    printf("Estado: %c\n", estado_1);
    printf("Código da carta: %s\n", cod_carta_1);
    printf("Nome da cidade: %s\n", nome_cidade_1);
    printf("População: %d\n", populacao_1);
    printf("Área: %.2f\n", area_1); //%.2f para limitar em 2 casas após a vírgula
    printf("PIB: %.2f\n", pib_1);
    printf("Nº. de pontos turísticos: %d\n", num_pontos_turisticos_1);

    //Exibindo segunda carta
    printf("\n"); //Para pular uma linha entre primeira e segunda carta
    printf("SEGUNDA CARTA\n");
    printf("Estado: %c\n", estado_2);
    printf("Código da carta: %s\n", cod_carta_2);
    printf("Nome da cidade: %s\n", nome_cidade_2);
    printf("População: %d\n", populacao_2);
    printf("Área: %.2f\n", area_2); //%.2f para limitar em 2 casas após a vírgula
    printf("PIB: %.2f\n", pib_2);
    printf("Nº. de pontos turísticos: %d\n", num_pontos_turisticos_2);

    return 0;
}
