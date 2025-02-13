#include <stdio.h>

int main() {
    printf("Desafio Super Trunfo Novato - Países \n \n");//titulo
    printf("OBSERVAÇÕES: Caso seja necessário adicionar sinalização para casas decimais, utilize '.'; \n \n");
    //observação
    
    

    char nome_ci[5]; //declaração da variável para o nome da cidade
    int pop;  //declaração da variável para a população
    float area;//declaração da variável para a área
    float pib; //declaração da variável para o PIB
    int pontos_tu; //declaração da variável para os pontos turísticos
    float densidade_pop;//variável da densidade populacional
    float pib_per_capita;//variável do PIB per capita

    printf("Insira o nome da  cidade a ser adicionado:\n"); 
    scanf("%20s", nome_ci); //entrada do nome da cidade

    printf("Insira a população da cidade:\n"); 
    scanf("%d", &pop); //entrada da população 

    printf("Insira a área territorial (em km²) da cidade:\n");
    scanf("%f", &area); //entrada da área territorial da cidade

    printf("Insira o PIB (Em milhões) da cidade:\n"); 
    scanf("%f", &pib); //entrada dp PIB da cidade

    printf("Insira o números de pontos turísticos da cidade:\n");
    scanf("%d", &pontos_tu); //entrada do número de pontos turísticos da cidade

    pib = pib * 1000000; //conversão do dado inserido para o formato de bilhões

    densidade_pop = pop / area;
    pib_per_capita = pib / pop;

    
    printf("\n \nRESULTADOS \n \n Nome da cidade: %s  \n População: %.d  habitantes.\n", nome_ci, pop); 
    printf("Área territorial: %.2f km². \n", area);
    printf("PIB: R$%.3f.\n ", pib);
    printf("Pontos turísticos totais da cidade: %d \n", pontos_tu);
    printf("A densidade populacional da cidade é: %.2f habitantes/km²\n", densidade_pop);
    printf("O PIB per Capita da cidade é: R$%.2f \n \n", pib_per_capita);
            //saída impressa dos dados fornecidos pelo usuário
    return 0;
}

/*\\\\\\\\\\\\\\\\\\\\  EXEMPLO TESTADO  \\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\
Nome da cidade: Barretos
População: 122485
Área territorial: 1566.161
PIB: 4989.616 //importante ressltar que este valor está em milhôes, neste caso 4989 vale 4.989 bilhões.
Número de Pontos turísticos: 15
*/