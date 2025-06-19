// desafio 2  logica cartas do supertrunfo

/** 2.1 nivel iniciante -->Foi criado a logica com estrutura de if e else para comparar qual atributo venceu com incrementação++ 
 * para definir qual carta ganhou */

/* 2.2 nivel aventureiro --> Adiconado menu interativo com switch, comparação dos atributos regtas de comparação onde a carta com o maior valor
no atributo escolhido vence,  com excesão da densidade demografica que vence o melhor valor, retirado o atributo super poder */

 /* 2.3 nivel mestre --> No projeto foi usado 2 novas bibliotecas, estruturas de controle de fluxo, aninhamento e comparação (if,else, else-if,switch) usado para validar entradas e
 comparar atributos a fim de descobrir qual a melhor carta, operador ternario (? :), conversores de tipo e logica de jogo especifica, operadores logicos (&& || !), incrementação++ */

 
#include <stdio.h> // biblioteca basica de entrarda e saida
#include <time.h> // biblioteca usada para inicializar o gerador de números em sincronia com a hora do computador para não ter problemas de repetição
#include <stdlib.h> // biblioteca necessarioa para usar a função rand()



int main() {

    int menu_opcao, escolhaj_carta;
    int pontos_jogador = 0;
    int pontos_computador = 0;

    int atributo_ataque, atributo_defesa, atributo_recuo;
    
    //atributos carta 1
    char lest1= 'A';
    char estado1[] = "Amazonas" ;
    char codcar1[] = "01"; 
    char cid1[] = "Manaus";
    unsigned int pop1 = 3952262;
    unsigned int npt1 = 15;
    double area1 = 1559168.117 ; 
    double pib1 = 135.5; 
    //artibutos carta 2
    char lest2 = 'P' ;
    char estado2[] = "Paraíba";
    char codcar2[] = "02"; 
    char cid2[] = "Joao Pessoa"; 
    unsigned int pop2 = 4030961 ;
    unsigned int npt2 = 12;
    double area2 = 56469.778; 
    double pib2 = 78.2; 

    //calculo densidade populacional e pib p/capita
    double densp1 = (double)pop1 / area1; 
    double pipc1 = (pib1 * 1000000000) / (double)pop1; // Ajuste para PIB em bilhões
    double densp2 = (double)pop2 / area2;
    double pipc2 = (pib2 * 1000000000) / (double)pop2; // Ajuste para PIB em bilhões

    // menu principal
    printf("\n***Escolha uma opção***\n");
    printf("1     JOGAR\n");
    printf("2     REGRAS\n");
    printf("3     SAIR DO JOGON\n");
    scanf("%d",&menu_opcao );
    
    switch (menu_opcao) {
        case 1:
            //inicio do menu jogar
            printf("\n***Iniciando o Jogo***\n");
            printf("\n***Escolha sua Carta***\n");
            printf("1 - Amazonas\n");
            printf("2 - Paraíba\n");
            scanf("%d", &escolhaj_carta);

            if (escolhaj_carta != 1 && escolhaj_carta != 2) {
                printf("Opção de carta inválida. Por favor, escolha 1 ou 2.\n");
                break;
            }

            int carta_comp_indice = (escolhaj_carta == 1) ? 2 : 1;
            //caso escolha a carta 1
            printf("\n--- Suas Cartas e Atributos Disponíveis ---\n");
            if (escolhaj_carta == 1) {
                printf("Sua Carta: %s (Cód: %c%s)\n", estado1, lest1, codcar1);
                printf("  1. População: %u\n", pop1);
                printf("  2. Números de Pontos Turísticos: %u\n", npt1);
                printf("  3. Área: %.2f km²\n", area1);
                printf("  4. PIB: %.2f bilhões\n", pib1);
                printf("  5. Densidade Populacional: %.2f hab/km²\n", densp1);
                printf("  6. PIB per capita: %.2f\n", pipc1);
                //caso escolha a carta 2
            } else {
                printf("Sua Carta: %s (Cód: %c%s)\n", estado2, lest2, codcar2);
                printf("  1. População: %u\n", pop2);
                printf("  2. Números de Pontos Turísticos: %u\n", npt2);
                printf("  3. Área: %.2f km²\n", area2);
                printf("  4. PIB: %.2f bilhões\n", pib2);
                printf("  5. Densidade Populacional: %.2f hab/km²\n", densp2);
                printf("  6. PIB per capita: %.2f\n", pipc2);
            }
                //carta do computador baseado na decisão acima
            printf("\n--- Carta do Computador e Atributos Disponíveis ---\n");
            if (carta_comp_indice == 1) {
                printf("Carta do Computador: %s (Cód: %c%s)\n", estado1, lest1, codcar1);
                printf("  1. População: %u\n", pop1);
                printf("  2. Números de Pontos Turísticos: %u\n", npt1);
                printf("  3. Área: %.2f km²\n", area1);
                printf("  4. PIB: %.2f bilhões\n", pib1);
                printf("  5. Densidade Populacional: %.2f hab/km²\n", densp1);
                printf("  6. PIB per capita: %.2f\n", pipc1);
            } else {
                printf("Carta do Computador: %s (Cód: %c%s)\n", estado2, lest2, codcar2);
                printf("  1. População: %u\n", pop2);
                printf("  2. Números de Pontos Turísticos: %u\n", npt2);
                printf("  3. Área: %.2f km²\n", area2);
                printf("  4. PIB: %.2f bilhões\n", pib2);
                printf("  5. Densidade Populacional: %.2f hab/km²\n", densp2);
                printf("  6. PIB per capita: %.2f\n", pipc2);
            }
                //inicio da fase de rodadas (ataque,defesa e recuo)
            printf("\n--- Escolha seus atributos para a rodada ---\n");

            printf("\nEscolha o atributo para a fase de ATAQUE (1-6): ");
            scanf("%d", &atributo_ataque);

            printf("Escolha o atributo para a fase de DEFESA (1-6, diferente do anterior): ");
            scanf("%d", &atributo_defesa);

            printf("Escolha o atributo para a fase de RECUO (1-6, diferente dos anteriores): ");
            scanf("%d", &atributo_recuo);
                // indice para checagem e conferencia dos atributos para garantir que o jogador escolha 3 atributos diferentes e validos
            if (atributo_ataque < 1 || atributo_ataque > 6 ||
                atributo_defesa < 1 || atributo_defesa > 6 ||
                atributo_recuo < 1 || atributo_recuo > 6 ||
                atributo_ataque == atributo_defesa ||
                atributo_ataque == atributo_recuo ||
                atributo_defesa == atributo_recuo) {
                printf("\nEscolha de atributo(s) inválida ou atributos duplicados! Por favor, siga as instruções.\n");
                break;
                //fim da checagem de atributos
            }

            printf("\n--- INICIANDO COMPARAÇÕES ---\n");
            // inicio fase de ataque optei por fazer as fases com o else if ao inves de switch para evitar problemas com identação e deixar o codigo mais legivel 
            printf("\n--- FASE DE ATAQUE: ");
            if (atributo_ataque == 1) printf("População ---\n");
            else if (atributo_ataque == 2) printf("Pontos Turísticos ---\n");
            else if (atributo_ataque == 3) printf("Área ---\n");
            else if (atributo_ataque == 4) printf("PIB ---\n");
            else if (atributo_ataque == 5) printf("Densidade Populacional ---\n");
            else if (atributo_ataque == 6) printf("PIB per capita ---\n");
            
            double val_ataque_j, val_ataque_c;
            //comparação da rodada de ataque
            if (atributo_ataque == 1) {
                val_ataque_j = (escolhaj_carta == 1) ? pop1 : pop2;
                val_ataque_c = (carta_comp_indice == 1) ? pop1 : pop2;
            } else if (atributo_ataque == 2) {
                val_ataque_j = (escolhaj_carta == 1) ? npt1 : npt2;
                val_ataque_c = (carta_comp_indice == 1) ? npt1 : npt2;
            } else if (atributo_ataque == 3) {
                val_ataque_j = (escolhaj_carta == 1) ? area1 : area2;
                val_ataque_c = (carta_comp_indice == 1) ? area1 : area2;
            } else if (atributo_ataque == 4) {
                val_ataque_j = (escolhaj_carta == 1) ? pib1 : pib2;
                val_ataque_c = (carta_comp_indice == 1) ? pib1 : pib2;
            } else if (atributo_ataque == 5) {
                val_ataque_j = (escolhaj_carta == 1) ? densp1 : densp2;
                val_ataque_c = (carta_comp_indice == 1) ? densp1 : densp2;
            } else {
                val_ataque_j = (escolhaj_carta == 1) ? pipc1 : pipc2;
                val_ataque_c = (carta_comp_indice == 1) ? pipc1 : pipc2;
            }
                
            printf("  %s Valor: %.2f | %s Valor: %.2f\n",
                   (escolhaj_carta == 1) ? estado1 : estado2, val_ataque_j,
                   (carta_comp_indice == 1) ? estado1 : estado2, val_ataque_c);
                //condição para definir a densidade populacional onde o menor ganha
            if (atributo_ataque == 5) {
                if (val_ataque_j < val_ataque_c) {
                    pontos_jogador++;
                    printf("  %s ganha o ponto de Ataque (menor ganha)!\n", (escolhaj_carta == 1) ? estado1 : estado2);
                } else if (val_ataque_j > val_ataque_c) {
                    pontos_computador++; // aplicação da pos incrementação onde será exibido no final do programa
                    printf("  %s ganha o ponto de Ataque (menor ganha)!\n", (carta_comp_indice == 1) ? estado1 : estado2);
                } else {
                    printf("  Empate no Ataque!\n");
                }
            } else {
                if (val_ataque_j > val_ataque_c) {
                    pontos_jogador++;
                    printf("  %s ganha o ponto de Ataque!\n", (escolhaj_carta == 1) ? estado1 : estado2);
                } else if (val_ataque_j < val_ataque_c) {
                    pontos_computador++;
                    printf("  %s ganha o ponto de Ataque!\n", (carta_comp_indice == 1) ? estado1 : estado2);
                } else {
                    printf("  Empate no Ataque!\n");
                }
            } //fim rodada de ataque

                //inicio defesa e mesmo que as linhas 132,142,166,172
            printf("\n--- FASE DE DEFESA: ");
            if (atributo_defesa == 1) printf("População ---\n");
            else if (atributo_defesa == 2) printf("Pontos Turísticos ---\n");
            else if (atributo_defesa == 3) printf("Área ---\n");
            else if (atributo_defesa == 4) printf("PIB ---\n");
            else if (atributo_defesa == 5) printf("Densidade Populacional ---\n");
            else if (atributo_defesa == 6) printf("PIB per capita ---\n");

            double val_defesa_j, val_defesa_c;

            if (atributo_defesa == 1) {
                val_defesa_j = (escolhaj_carta == 1) ? pop1 : pop2;
                val_defesa_c = (carta_comp_indice == 1) ? pop1 : pop2;
            } else if (atributo_defesa == 2) {
                val_defesa_j = (escolhaj_carta == 1) ? npt1 : npt2;
                val_defesa_c = (carta_comp_indice == 1) ? npt1 : npt2;
            } else if (atributo_defesa == 3) {
                val_defesa_j = (escolhaj_carta == 1) ? area1 : area2;
                val_defesa_c = (carta_comp_indice == 1) ? area1 : area2;
            } else if (atributo_defesa == 4) {
                val_defesa_j = (escolhaj_carta == 1) ? pib1 : pib2;
                val_defesa_c = (carta_comp_indice == 1) ? pib1 : pib2;
            } else if (atributo_defesa == 5) {
                val_defesa_j = (escolhaj_carta == 1) ? densp1 : densp2;
                val_defesa_c = (carta_comp_indice == 1) ? densp1 : densp2;
            } else {
                val_defesa_j = (escolhaj_carta == 1) ? pipc1 : pipc2;
                val_defesa_c = (carta_comp_indice == 1) ? pipc1 : pipc2;
            }

            printf("  %s Valor: %.2f | %s Valor: %.2f\n",
                   (escolhaj_carta == 1) ? estado1 : estado2, val_defesa_j,
                   (carta_comp_indice == 1) ? estado1 : estado2, val_defesa_c);

            if (atributo_defesa == 5) {
                if (val_defesa_j < val_defesa_c) {
                    pontos_jogador++;
                    printf("  %s ganha o ponto de Defesa (menor ganha)!\n", (escolhaj_carta == 1) ? estado1 : estado2);
                } else if (val_defesa_j > val_defesa_c) {
                    pontos_computador++;
                    printf("  %s ganha o ponto de Defesa (menor ganha)!\n", (carta_comp_indice  == 1) ? estado1 : estado2);
                } else {
                    printf("  Empate na Defesa!\n");
                }
            } else {
                if (val_defesa_j > val_defesa_c) {
                    pontos_jogador++;
                    printf("  %s ganha o ponto de Defesa!\n", (escolhaj_carta == 1) ? estado1 : estado2);
                } else if (val_defesa_j < val_defesa_c) {
                    pontos_computador++;
                    printf("  %s ganha o ponto de Defesa!\n", (carta_comp_indice == 1) ? estado1 : estado2);
                } else {
                    printf("  Empate na Defesa!\n");
                } //fim defesa
            }
                //inicio reodada de recuo
            printf("\n--- FASE DE RECUO: ");
            if (atributo_recuo == 1) printf("População ---\n");
            else if (atributo_recuo == 2) printf("Pontos Turísticos ---\n");
            else if (atributo_recuo == 3) printf("Área ---\n");
            else if (atributo_recuo == 4) printf("PIB ---\n");
            else if (atributo_recuo == 5) printf("Densidade Populacional ---\n");
            else if (atributo_recuo == 6) printf("PIB per capita ---\n");

            double val_recuo_j, val_recuo_c;

            if (atributo_recuo == 1) {
                val_recuo_j = (escolhaj_carta == 1) ? pop1 : pop2;
                val_recuo_c = (carta_comp_indice == 1) ? pop1 : pop2;
            } else if (atributo_recuo == 2) {
                val_recuo_j = (escolhaj_carta == 1) ? npt1 : npt2;
                val_recuo_c = (carta_comp_indice == 1) ? npt1 : npt2;
            } else if (atributo_recuo == 3) {
                val_recuo_j = (escolhaj_carta == 1) ? area1 : area2;
                val_recuo_c = (carta_comp_indice == 1) ? area1 : area2;
            } else if (atributo_recuo == 4) {
                val_recuo_j = (escolhaj_carta == 1) ? pib1 : pib2;
                val_recuo_c = (carta_comp_indice == 1) ? pib1 : pib2;
            } else if (atributo_recuo == 5) {
                val_recuo_j = (escolhaj_carta == 1) ? densp1 : densp2;
                val_recuo_c = (carta_comp_indice == 1) ? densp1 : densp2;
            } else {
                val_recuo_j = (escolhaj_carta == 1) ? pipc1 : pipc2;
                val_recuo_c = (carta_comp_indice == 1) ? pipc1 : pipc2;
            }

            printf("  %s Valor: %.2f | %s Valor: %.2f\n",
                   (escolhaj_carta == 1) ? estado1 : estado2, val_recuo_j,
                   (carta_comp_indice == 1) ? estado1 : estado2, val_recuo_c);

            if (atributo_recuo == 5) {
                if (val_recuo_j < val_recuo_c) {
                    pontos_jogador++;
                    printf("  %s ganha o ponto de Recuo (menor ganha)!\n", (escolhaj_carta == 1) ? estado1 : estado2);
                } else if (val_recuo_j > val_recuo_c) {
                    pontos_computador++;
                    printf("  %s ganha o ponto de Recuo (menor ganha)!\n", (carta_comp_indice == 1) ? estado1 : estado2);
                } else {
                    printf("  Empate no Recuo!\n");
                }
            } else {
                if (val_recuo_j > val_recuo_c) {
                    pontos_jogador++;
                    printf("  %s ganha o ponto de Recuo!\n", (escolhaj_carta == 1) ? estado1 : estado2);
                } else if (val_recuo_j < val_recuo_c) {
                    pontos_computador++;
                    printf("  %s ganha o ponto de Recuo!\n", (carta_comp_indice == 1) ? estado1 : estado2);
                } else {
                    printf("  Empate no Recuo!\n");
                }
            } //fim recuo
                //resultado de quem ganhou computador ou jogador
            printf("\n--- RESULTADO FINAL DA RODADA ---\n");
            printf("Total de pontos de %s: %d\n", (escolhaj_carta == 1) ? estado1 : estado2, pontos_jogador);
            printf("Total de pontos de %s: %d\n", (carta_comp_indice == 1) ? estado1 : estado2, pontos_computador);

            if (pontos_jogador > pontos_computador) {
                printf("\n>>> PARABÉNS! VOCÊ VENCEU A RODADA! <<<\n");
            } else if (pontos_jogador < pontos_computador) {
                printf("\n>>> INFELIZMENTE, VOCÊ PERDEU A RODADA! <<<\n");
            } else {
                printf("\n>>> A RODADA TERMINOU EM EMPATE! <<<\n");
            }
            break;
            //fim do case 1
            
        case 2: //case 2 regras
            printf("\n--- REGRAS DO JOGO SUPER TRUNFO ---\n");
            printf("1. Você escolhe uma das cartas disponíveis.\n");
            printf("2. Em seguida, você seleciona TRÊS atributos DIFERENTES para as fases de Ataque, Defesa e Recuo.\n");
            printf("3. Para Ataque, a carta com o MAIOR valor do atributo escolhido ganha um ponto.\n");
            printf("4. Para Defesa, a carta com o MAIOR valor do atributo escolhido ganha um ponto.\n");
            printf("5. Para Recuo, a carta com o MAIOR valor do atributo escolhido ganha um ponto.\n");
            printf("   **EXCEÇÃO: Se o atributo escolhido para qualquer fase for 'Densidade Populacional', o MENOR valor ganha o ponto.\n");
            printf("6. Se os valores forem iguais em um atributo, é um empate para aquele atributo e ninguém ganha ponto.\n");
            printf("7. A carta com o MAIOR NÚMERO TOTAL de pontos nas três comparações vence a rodada!\n");
            printf("8. Se a soma total dos pontos for igual, a rodada termina em EMPATE.\n");
            break;
            //fim case2

        case 3:
            printf("\n--- SAINDO DO JOGO ---\n");
            printf("Obrigado por jogar, até a próxima!\n");
            break;

        default:
            printf("\nOpção inválida! Por favor, escolha 1, 2 ou 3.\n");
            break;
    }

    return 0;
}
