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
    //Densidade populacional
    float dens_pop_1, dens_pop_2;
    //PIB
    float pib_1, pib_2;
    //PIB per capita
    float pib_per_capita_1, pib_per_capita_2;
    //Número de pontos turísticos
    int num_pontos_turisticos_1, num_pontos_turisticos_2;
    double super_poder_1, super_poder_2;

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
    printf("Área: %.2f km²\n", area_1); //%.2f para limitar em 2 casas após a vírgula
    printf("PIB: R$ %.2f bilhões\n", pib_1);
    printf("Nº. de pontos turísticos: %d\n", num_pontos_turisticos_1);
    
    //Cálculo de densidade populacional e pib per capita. Casting em populacao_1 para conversão explícita de inteiro em float
    dens_pop_1 = (float) populacao_1 / area_1;
    pib_1 *= 1000000000; //Conversão para bilhões, para cálculo per capita
    pib_per_capita_1 = pib_1 / (float) populacao_1;

    printf("Densidade Populacional: %.2f hab/km²\n", dens_pop_1);
    printf("PIB per Capita: R$ %.2f\n", pib_per_capita_1);

    //Cálculo do Super Poder
    super_poder_1 = (float)populacao_1 + area_1 + (pib_1/1000000000) + num_pontos_turisticos_1 + pib_per_capita_1 + (1/dens_pop_1);
    printf("Super Poder: %.2f\n", super_poder_1); //divisão de pib por 1000000000 para retornar ao valor original de pib_1

    //Exibindo segunda carta
    printf("\n"); //Para pular uma linha entre primeira e segunda carta
    printf("SEGUNDA CARTA\n");
    printf("Estado: %c\n", estado_2);
    printf("Código da carta: %s\n", cod_carta_2);
    printf("Nome da cidade: %s\n", nome_cidade_2);
    printf("População: %d\n", populacao_2);
    printf("Área: %.2f km²\n", area_2); //%.2f para limitar em 2 casas após a vírgula
    printf("PIB: R$ %.2f bilhões\n", pib_2);
    printf("Nº. de pontos turísticos: %d\n", num_pontos_turisticos_2);
    
    //Cálculo de densidade populacional e pib per capita. Casting em populacao_2 para conversão explícita de inteiro em float
    dens_pop_2 = (float) populacao_2 / area_2;
    pib_2 *= 1000000000; //Conversão para bilhões, para cálculo per capita
    pib_per_capita_2 = pib_2 / (float) populacao_2;
    
    printf("Densidade Populacional: %.2f hab/km²\n", dens_pop_2);
    printf("PIB per Capita: R$ %.2f\n", pib_per_capita_2);

    //Cálculo do Super Poder
    super_poder_2 = (float)populacao_2 + area_2 + (pib_2/1000000000) + num_pontos_turisticos_2 + pib_per_capita_2 + (1/dens_pop_2);
    printf("Super Poder: %.2f\n", super_poder_2); //divisão de pib por 1000000000 para retornar ao valor original de pib_1

    printf("\n");//para dar um espaço entre as linhas
    printf("###QUEM VENCEU?###\n");
    printf("Para cada categoria abaixo, se o resultado foi 1, quem venceu foi a carta 1. Se o resultado for 0, quem venceu foi a carta 2.\n");
    printf("\n"); //para dar um espaço entre as regras e os resultados
    printf("População: %d\n", populacao_1 > populacao_2);
    printf("Área: %d\n", area_1 > area_2);
    printf("PIB: %d\n", pib_1 > pib_2);
    printf("Pontos turísticos: %d\n", num_pontos_turisticos_1 > num_pontos_turisticos_2);
    printf("Densidade populacional, %d\n", dens_pop_1 < dens_pop_2);
    printf("PIB per Capita: %d\n", pib_per_capita_1 > pib_per_capita_2);
    printf("Super Poder: %d\n", super_poder_1 > super_poder_2);
    printf("Bom jogo!");

    return 0;
}
