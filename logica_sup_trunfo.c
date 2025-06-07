// desafio 2  logica cartas do supertrunfo

/** 2.1 Foi criado a logica com estrutura de if e else para comparar qual atributo venceu com incrementação++ 
 * para definir qual carta ganhou */
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

   //calculo densidade populacional e pib per capta
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

    //mesmo da linha 71
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

    // calculo para inverso da densidade populacional
    double inv_densp1 = 1.0 / densp1; 
    double inv_densp2 = 1.0 / densp2;
    // calculo para super poder com modificação na tipagem dos dados
    double superpodera = ((double)pop1 + area1 + (double)npt1 + pipc1) + inv_densp1;
    double superpoderb = ((double)pop2 + area2 + (double)npt2 + pipc2) + inv_densp2;

    printf("\nO Super poder da carta a é: %.4f\n", superpodera); 
    printf("O Super poder da carta B é: %.4f\n", superpoderb);

    // Comparação dos atributos
    printf("\n****Comparação das Cartas*****\n");
    printf("SE RESULTADO '1', 'CARTA 1' GANHA | SE RESULTADO '0', 'CARTA 2' GANHA\n");
    //variavel para incrementação++ a com unsigned int já que só vamos trabalhar com numeros positivos e inteiros
   unsigned int a =0 , b=0 ;
    //comparação e resultado das cartas usando if e else
    printf("\nAtributo População:\n");
    if (pop1 > pop2) {
        printf("Carta A Venceu!!!\n", a++) ;
    }
    else {
        if(pop1==pop2) {
            printf("EMPATE!!!\n");
        }
        else {
            printf("Carta B Venceu!!!\n", b++);
        }
    }
    
    printf("\nAtributo Área:\n");
    if(area1 > area2) {
        printf("Carta A Venceu!!!\n", a++);
    }
    else {
        if(area1 == area2)
        printf("EMPATE!!!\n");
        else {
            printf("Carta B venceu!!!\n", b++);
        }
    } 
     
    printf("\nAtributo PIB:\n");
    if (pib1>pib2) {
        printf("Carta A venceu!!!\n",a++);
    }
    else {
        if (pib1==pib2){
            printf("EMPATE!!!\n");

            }
            else{
                printf("Carta B venceu!!!\n", b++);
            }
        }
    

    printf("\nAtributo Pontos Turisticos:\n");
    if (npt1 > npt2){
        printf("Carta A Venceu!!!\n", a++);
    } 
    else{
        if(npt1 == npt2){
            printf("EMPATE!!!\n");
            }
            else{
                printf("Carta B Venceu!!!\n",b++);

            }
        }

    printf("\nAtributo Densidade Populacional:\n");
    if (densp1 > densp2){
        printf("A Carta A Venceu!!!\n", a++);
    }
    else{
        if(densp1 == densp2){
            printf("EMPATE!!!\n");
        }
        else{
            printf("A Carta B Venceu!!!\n", b++);
        }
    }
   
    printf("\nAtributo PIB p/ Capita:\n");
    if (pipc1>pipc2) {
        printf("A Carta A Venceu!!!\n",a++);
    } 
    else{
        if(pipc1==pipc2){
            printf("EMPATE!!!\n");
        }
        else{
            printf("Carta B Venceu!!!\n",b++);
        }
    }
    
     
    printf("\nAtributo Superpoder:\n");
    if(superpodera < superpoderb){
        printf("Carta A Venceu!!!", a++);
    }
    else{
        if(superpodera == superpoderb){
            printf("EMPATE!!!\n");
        }
        else{
            printf("Carta B Venceu!!!\n",b++);
        }
    }
    // resultado da carta ganhadora
    printf("A CARTA GANHADORA É...\n");
    if(a>b){
        printf("A carta A obteve %d pontos, ela é a vencedora!!!\n",a);
    }
    else{
        if(a==b) {
            printf("Houve um EMPATE!!!\n");
        }
        else{
            printf("A Carta B obteve %d pontos, ela é a vencedora!!!\n", b);
        }

    } 
    return 0;
}
