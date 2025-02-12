#include <stdio.h>

int main() {
    printf("Desafio Super Trunfo Novato - Países \n");//titulo
    

    char nome_ci[5]; //declaração da variável para o nome da cidade
    float pop;  //declaração da variável para a população
    float area;//declaração da variável para a área
    float pib; //declaração da variável para o PIB
    int pontos_tu; //declaração da variável para os pontos turísticos

    printf("Insira o nome da  cidade a ser adicionado:\n"); 
    scanf("%20s", nome_ci); //entrada do nome da cidade

    printf("Insira a população (em milhões) da cidade:\n"); 
    scanf("%f", &pop); //entrada da população 

    printf("Insira a área territorial (em quilometros quadrados; km²) da cidade:\n");
    scanf("%f", &area); //entrada da área territorial da cidade

    printf("Insira o PIB (em milhões) da cidade:\n"); 
    scanf("%f", &pib); //entrada dp PIB da cidade

    printf("Insira o números de pontos turísticos da cidade:\n");
    scanf("%d", &pontos_tu); //entrada do número de pontos turísticos da cidade

    printf("\n \n \n Nome da cidade: %s  \n População: %f  \n", nome_ci, pop); 
    printf("Área territorial: %f  \n", area);
    printf("PIB: %f  \n ", pib);
    printf("Pontos turísticos totais da cidade: %d \n \n", pontos_tu);
            //saída impressa dos dados fornecidos pelo usuário
    return 0;
}
