//Desafio1 -->usando estruturas basicas(printf e scanf) para armazenar duas cartas de super trunfo
//Desafio2 ~~> Adicionei calculos precisos usando os conceitos de conversão de tipagem de dados 
/*Desafio 3 ~~> Adicionei o novo atributo super poder que consiste na soma de todos os atributos numéricos
+ o inverso da densidade populacional*. o atributo superpoder a carta com o menor valor vence. 
Também fiz a comparação das duas cartas decidindo quem vence usando operadores relacionais*/

// desafio cartas do supertrunfo
#include <stdio.h>

int main() {

    // Primeira carta
    char est1;
    char codcar1[3]; // 2 caracteres + enter
    char cid1[21];   //  20 caracteres + enter
    int pop1;
    int npt1;
    double area1; 
    double pib1;  

    // Segunda carta
    char est2;
    char codcar2[3]; 
    char cid2[21];   
    int pop2;
    int npt2;
    double area2; 
    double pib2;  

    // Leitura da primeira carta
    printf("Digite a letra do 1º estado: ");
    scanf(" %c", &est1); 

    printf("Digite o codigo do 1º estado (2 caracteres): ");
    scanf("%2s", codcar1);

    printf("Digite a cidade do 1º estado (ate 20 caracteres): ");
    scanf("%20s", cid1); 

    printf("Digite a população do 1º estado: ");
    scanf("%d", &pop1);

    printf("Digite a Área do 1º estado: ");
    scanf("%lf", &area1); 

    printf("Digite o PIB do 1º estado: ");
    scanf("%lf", &pib1); 

    printf("Digite o número de pontos turisticos da 1º cidade: ");
    scanf("%d", &npt1);

    // Leitura 2 carta
    printf("\nDigite a letra do 2º estado: ");
    scanf(" %c", &est2);

    printf("Digite o codigo do 2º estado (2 caracteres): "); 
    scanf("%2s", codcar2); 

    printf("Digite a cidade do 2º estado (ate 20 caracteres): ");
    scanf("%20s", cid2);

    printf("Digite a população do 2º estado: ");
    scanf("%d", &pop2);

    printf("Digite a Área do 2º estado: ");
    scanf("%lf", &area2); 

    printf("Digite o PIB do 2º estado: ");
    scanf("%lf", &pib2); 

    printf("Digite o número de pontos turisticos da 2º cidade: ");
    scanf("%d", &npt2);

    //Calculo da densidade populacional e pib per capita usando o double para corrigir problemas de precisão númerica
    double densp1 = (double)pop1 / area1; 
    double pipc1 = pib1 / (double)pop1; 

    printf("\n\nCarta 1:\n");
    printf("Estado: %c\n", est1);
    printf("Codigo: %c%s\n", est1, codcar1);
    printf("Cidade: %s\n", cid1);
    printf("População: %d\n", pop1);
    printf("Área: %.4f km²\n", area1);     
    printf("PIB: %.2f\n", pib1);       
    printf("Pontos Turisticos: %d\n", npt1);
    printf("A Densidade Populacional é: %.4f\n", densp1);
    printf("O PIB p/ Capita é: %.4f\n", pipc1);

 
    double densp2 = (double)pop2 / area2;
    double pipc2 = pib2 / (double)pop2;

    printf("\nCarta 2:\n");
    printf("Estado: %c\n", est2);
    printf("Codigo: %c%s\n", est2, codcar2);
    printf("Cidade: %s\n", cid2);
    printf("População: %d\n", pop2);
    printf("Área: %.4fkm²\n", area2);
    printf("PIB: %.2f\n", pib2);
    printf("Pontos Turisticos: %d\n", npt2);
    printf("A Densidade Populacional é: %.4f\n", densp2);
    printf("O PIB p/ Capita é: %.4f\n", pipc2);

    //calculo para inverso da densidade populacional
    double inv_densp1 = 1.0 / densp1; 
    double inv_densp2 = 1.0 / densp2;
    // calculo do super poder da carta a e b
    double superpoder1 = ((double)pop1 + area1 + (double)npt1 + pipc1) + inv_densp1;
    double superpoder2 = ((double)pop2 + area2 + (double)npt2 + pipc2) + inv_densp2;

    printf("\nO Super poder da carta 1 é: %.4f\n", superpoder1); 
    printf("O Super poder da carta 2 é: %.4f\n", superpoder2);

    // Comparação dos atributos
    printf("\n****Comparação das Cartas*****\n");
    printf("SE RESULTADO '1', 'CARTA 1' GANHA | SE RESULTADO '0', 'CARTA 2' GANHA\n");

    int resul_pop = (pop1 > pop2);
    printf("\nAtributo População:\n");
    printf(" Vencedor (1=Carta 1, 0=Carta 2): %d\n", resul_pop);

    int resul_area = (area1 > area2);
    printf("\nAtributo Área:\n");
    printf(" Vencedor (1=Carta 1, 0=Carta 2): %d\n", resul_area);

    int resul_pib = (pib1 > pib2);
    printf("\nAtributo PIB:\n");
    printf(" Vencedor (1=Carta 1, 0=Carta 2): %d\n", resul_pib);

    int resul_npt = (npt1 > npt2);
    printf("\nAtributo Pontos Turisticos:\n");
    printf(" Vencedor (1=Carta 1, 0=Carta 2): %d\n", resul_npt);

    int result_dens = (densp1 > densp2);
    printf("\nAtributo Densidade Populacional:\n");
    printf(" Vencedor (1=Carta 1, 0=Carta 2): %d\n", result_dens);

    int result_pippc = (pipc1 > pipc2);
    printf("\nAtributo PIB p/ Capita:\n");
    printf(" Vencedor (1=Carta 1, 0=Carta 2): %d\n", result_pippc);

    int resul_super_p = (superpoder1 < superpoder2); 
    printf("\nAtributo Superpoder:\n");
    printf(" Vencedor (1=Carta 1, 0=Carta 2): %d\n", resul_super_p);

    return 0;
}
