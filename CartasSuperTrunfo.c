#include <stdio.h>

int main() {
    printf("Desafio Super Trunfo Novato - Países \n \n");//titulo
    printf("OBSERVAÇÕES: Caso seja necessário adicionar sinalização para casas decimais, utilize '.'; \n \n");
    //observação
    
    
    char code[5];
    char nome_ci[50]; //declaração da variável para o nome da cidade
    int pop;  //declaração da variável para a população
    float area;//declaração da variável para a área
    float pib; //declaração da variável para o PIB
    int pontos_tu; //declaração da variável para os pontos turísticos
    float densidade_pop;//variável da densidade populacional
    float pib_per_capita;//variável do PIB per capita
    float super_poder;


    printf("Insira o nome da  cidade a ser adicionada:\n"); 
    scanf("%[^\n]", nome_ci); //entrada do nome da cidade

    printf("Insira o código da cidade (Ex: A01, A02): \n");
    scanf("%20s", code);

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
    super_poder = pib + area + pop + pontos_tu;

    
    printf("\n \nCarta 1 \n \n Nome da cidade: %s  \n População: %.d  habitantes.\n", nome_ci, pop);
    printf("Código da cidade: %s \n", code);  
    printf("Área territorial: %.2f km². \n", area);
    printf("PIB: R$%.3f.\n ", pib);
    printf("Pontos turísticos totais da cidade: %d \n", pontos_tu);
    printf("A densidade populacional da cidade é: %.2f habitantes/km²\n", densidade_pop);
    printf("O PIB per Capita da cidade é: R$%.2f \n", pib_per_capita);
    printf("Super Poder da Carta (Soma de todas as propriedades):%.2f\n\n", super_poder);
            //saída impressa dos dados fornecidos pelo usuário


    float super_poder2;
    char code2[5];
    char nome_ci2[50]; //declaração da variável para o nome da cidade
    int pop2;  //declaração da variável para a população
    float area2;//declaração da variável para a área
    float pib2; //declaração da variável para o PIB
    int pontos_tu2; //declaração da variável para os pontos turísticos
    float densidade_pop2;//variável da densidade populacional
    float pib_per_capita2;//variável do PIB per capita

    printf("Insira o nome da  cidade a ser adicionada:\n"); 
    getchar();
    scanf("%[^\n]", nome_ci2); //entrada do nome da cidade

    printf("Insira o código da cidade (Ex: A01, A02): \n");
    scanf("%20s", code2);

    printf("Insira a população da cidade:\n"); 
    scanf("%d", &pop2); //entrada da população 

    printf("Insira a área territorial (em km²) da cidade:\n");
    scanf("%f", &area2); //entrada da área territorial da cidade

    printf("Insira o PIB (Em milhões) da cidade:\n"); 
    scanf("%f", &pib2); //entrada dp PIB da cidade

    printf("Insira o números de pontos turísticos da cidade:\n");
    scanf("%d", &pontos_tu2); //entrada do número de pontos turísticos da cidade

    pib2 = pib2 * 1000000; //conversão do dado inserido para o formato de bilhões

    densidade_pop2 = pop2 / area2;
    pib_per_capita2 = pib2 / pop2;
    super_poder2 = pib2 + area2 + pop2 + pontos_tu2;

    printf("\n \nCarta 2 \n \n Nome da cidade: %s  \n População: %d  habitantes.\n", nome_ci2, pop2);
    printf("Código da cidade: %s \n", code2);  
    printf("Área territorial: %.2f km². \n", area2);
    printf("PIB: R$%.3f.\n ", pib2);
    printf("Pontos turísticos totais da cidade: %d \n", pontos_tu2);
    printf("A densidade populacional da cidade é: %.2f habitantes/km²\n", densidade_pop2);
    printf("O PIB per Capita da cidade é: R$%.2f \n", pib_per_capita2);
    printf("Super Poder da Carta (Soma de todas as propriedades):%.2f\n\n", super_poder2);
   

    int resposta;

    printf("Comparar as cartas 1 e 2?\n Digite 1 para 'sim' e 0 para 'não'. \n");
    scanf("%d", &resposta);
    if (resposta == 1){
        if (pop > pop2)
        {
            printf("\n\nRESULTADOS\n\n");
            printf("A cidade de %s leva vantagem sobre a cidade de %s em população.\n ", nome_ci, nome_ci2);
            printf("Habitantes da cidade de %s:\n %d \n Habitantes da cidade de %s:\n %d\n\n", nome_ci, pop, nome_ci2, pop2);
        }
        if (pop < pop2)
        {
            printf("\n\nRESULTADOS\n\n");
            printf("A cidade  de %s leva vantagem sobre a cidade de %s em população. \n", nome_ci2, nome_ci);
            printf("Habitantes da cidade de %s: %d \n Habitantes da cidade de %s: %d\n\n", nome_ci2, pop2, nome_ci, pop);
        }
        if (pop == pop2)
        {
            printf("\n\nRESULTADOS\n\n");
            printf("Ambas as cidades tem o mesmo número de habitantes. \n Número de habitantes de %s e %s:\n %d.\n\n",nome_ci, nome_ci, pop);
        }
        //comparação População //////////////////////////////////////

        if (area > area2)
        {
            printf("A cidade  de %s leva vantagem sobre a cidade de %s em área territorial.\n", nome_ci, nome_ci2);
            printf("Área territorial da cidade de %s: \n %.2fkm²\n", nome_ci, area);
            printf("Área territorial da cidade de %s: \n %.2fkm²\n\n", nome_ci2, area2);
        }
        if (area < area2)
        {
            printf("A cidade  de %s leva vantagem sobre a cidade de %s em área territorial.\n", nome_ci2, nome_ci);
            printf("Área territorial da cidade de %s: \n %.2fkm²\n", nome_ci2, area2);
            printf("Área territorial da cidade de %s: \n %.2fkm²\n\n", nome_ci, area);
        }
        if (area == area2)
        {
            printf("Ambas as cidades possuem a mesma área territorial\n");
            printf("Área de ambas as cidades:\n %.2fkm²\n\n", area);
        }
        // comparação área //////////////////////////////////////

        if (pib > pib2)
        {
            printf("A cidade de %s leva vantagem sobre a cidade de %s em seu PIB.\n", nome_ci, nome_ci2);
            printf("PIB da cidade de %s: \n R$%.2f\n", nome_ci, pib);
            printf("PIB da cidade de %s: \n R$%.2f\n\n", nome_ci2, pib2);
        }
        if (pib < pib2)
        {
            printf("A cidade de %s leva vantagem sobre a cidade de %s em seu PIB.\n", nome_ci2, nome_ci);
            printf("PIB da cidade de %s: \n R$%.2f\n", nome_ci2, pib2);
            printf("PIB da cidade de %s: \n R$%.2f\n\n", nome_ci, pib);
        }
        if (pib == pib2)
        {
            printf("Ambas as cidades tem o mesmo valor de PIB\n");
            printf("PIB de ambas as cidades: R$%.2f\n\n", pib);
        }
        // comparação PIB ////////////////////////////////////////////////

        if (pib_per_capita > pib_per_capita2)
        {
            printf("A cidade de %s leva vantagem sobre a cidade de %s em PIB per Capita.\n", nome_ci, nome_ci2);
            printf("PIB per Capita da cidade de %s: \n R$%.2f\n", nome_ci, pib_per_capita);
            printf("PIB per Capita da cidade de %s: \n R$%.2f\n\n", nome_ci2, pib_per_capita2);
        }
        if (pib_per_capita < pib_per_capita2)
        {
            printf("A cidade de %s leva vantagem sobre a cidade de %s em seu PIB per Capita.\n", nome_ci2, nome_ci);
            printf("PIB per Capita da cidade de %s: \n R$%.2f\n", nome_ci2, pib_per_capita2);
            printf("PIB per Capita da cidade de %s: \n R$%.2f\n\n", nome_ci, pib_per_capita);
        }
        if (pib_per_capita == pib_per_capita2)
        {
            printf("Ambas as cidades possuem o mesmo valor de PIB per Capita");
            printf("PIB per Capita de ambas as cidades: \n R$%.2f\n\n", pib_per_capita);
        }
        // comparação PIB per Capita///////////////////////////////////////////////////

        if (pontos_tu > pontos_tu2)
        {
            printf("A cidade de %s leva vantagem sobre a cidade de %s em número de pontos turísticos.\n", nome_ci, nome_ci2);
            printf("Número de pontos turísticos da cidade de %s: \n %d\n", nome_ci, pontos_tu);
            printf("Número de pontos turísticos da cidade de %s: \n %d\n\n", nome_ci2, pontos_tu2);
        }
        if (pontos_tu < pontos_tu2)
        {
            printf("A cidade de %s leva vantagem sobre a cidade de %s em número de pontos turísticos.\n", nome_ci2, nome_ci);
            printf("Número de pontos turísticos da cidade de %s: \n %d\n", nome_ci2, pontos_tu2);
            printf("Número de pontos turísticos da cidade de %s: \n %d\n\n", nome_ci, pontos_tu);
        }
        if (pontos_tu == pontos_tu2)
        {
            printf("Ambas as cidades tem o mesmo número de pontos turísticos.\n");
            printf("Número de pontos turísticos em ambas as cidades:\n %d\n\n", pontos_tu);
        }
        //comparação Pontos turísticos///////////////////////////

        if (densidade_pop > densidade_pop2)
        {
            printf("OBSERVAÇÃO: Quanto menor a Densidade Populacional da cidade melhor, portanto a cidade com menor densidade leva vantagem.\n");
            printf("A cidade de %s leva vantagem sobre a cidadade de %s em densidade demográficaa.\n", nome_ci2, nome_ci);
            printf("Densidade Populacional da cidade de %s: \n %.2f habitantes/km²\n", nome_ci2, densidade_pop2);
            printf("Densidade Populacional da cidade de %s: \n %.2f habitantes/km²\n\n", nome_ci, densidade_pop);
        }
        if (densidade_pop < densidade_pop2)
        {
            printf("OBSERVAÇÃO: Quanto menor a Densidade Populacional da cidade melhor, portanto a cidade com menor densidade leva vantagem.\n");
            printf("A cidade de %s leva vantagem sobre a cidadade de %s em Densidade Populacional.\n", nome_ci, nome_ci2);
            printf("Densidade Populacional da cidade de %s: \n %.2f habitantes/km²\n", nome_ci, densidade_pop);
            printf("Densidade Populacional da cidade de %s: \n %.2f habitantes/km²\n\n", nome_ci2, densidade_pop2);
        }
        if (densidade_pop == densidade_pop2)
        {
            printf("OBSERVAÇÃO: Quanto menor a Densidade Populacional da cidade melhor, portanto a cidade com menor densidade leva vantagem.\n");
            printf("Ambas as cidades possuem o mesmo valor de Densidade Populacional");
            printf("Densidade Populacional de ambas as cidades: \n %.2f habitantes/km²\n\n",  densidade_pop);
            
        }
        //comparação densidade populacional ///////////////////////////////////////////////////

        if (super_poder > super_poder2)
        {
            printf("O Super Poder da cidade de %s leva vantagem sobre a cidade de %s.\n", nome_ci, nome_ci2);
            printf("Valor do Super Poder da cidade de %s: \n %.2f\n", nome_ci, super_poder);
            printf("Valor do Super Poder da cidade de %s: \n %.2f\n\n", nome_ci2, super_poder2);
        }
        if (super_poder < super_poder2)
        {
            printf("O Super Poder da cidade de %s leva vantagem sobre a cidade de %s.\n", nome_ci2, nome_ci);
            printf("Valor do Super Poder da cidade de %s: \n %.2f\n", nome_ci2, super_poder2);
            printf("Valor do Super Poder da cidade de %s: \n %.2f\n\n", nome_ci, super_poder);
        }
        if (super_poder == super_poder2)
        {
            printf("Ambas as cidades possuem o mesmo valor de Super Poder.");
            printf("Valor do Super Poder de ambas as cidades: \n %.2f\n\n", super_poder);
        }
        //comparação entre o super poder das cartas///////////////////////////////////////////////
        
        
        
        
        
        
        
        
        

        
        
        

    }
    if (resposta == 0)
    {
        printf("Programa encerrado");
    }else{
        printf("Programa encerrado");
    }
    
            return 0;

    
}