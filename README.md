# Jogo Super Trunfo de Estados Brasileiros

Este é um jogo de Super Trunfo simples implementado em C, onde você compara atributos de diferentes estados brasileiros para vencer rodadas. Este projeto foi desenvolvido como parte dos meus estudos na Universidade Estácio.

---

## 🎮 Como Jogar

Prepare-se para um duelo de conhecimento e estratégia com o Super Trunfo de Estados Brasileiros! Desenvolvido em C, este jogo desafia você a comparar atributos de diferentes estados para provar quem tem a carta mais poderosa.

**Bem-vindo ao Jogo!**
Ao iniciar o programa, você verá um menu principal.

**Sua Escolha:**

1 - JOGAR: Mergulhe direto na ação e comece uma partida!

2 - REGRAS: Precisa de um refresher? Todas as regras estão aqui.

3 - SAIR DO JOGO: Se precisar sair, é só escolher essa opção.

**Seu Estado, Sua Estratégia:**
Escolha entre Amazonas e Paraíba. A carta que você não escolher será automaticamente do computador.
Fique de olho! Todos os atributos da sua carta e da carta do computador serão exibidos para você planejar seus próximos movimentos.

**A Batalha dos Atributos:**
Essa é a hora de mostrar sua astúcia! Selecione três atributos diferentes (de 1 a 6) para as fases de Ataque, Defesa e Recuo.

*Atenção: Os atributos devem ser únicos! O jogo vai te avisar se você tentar repetir.*

**O Duelo Começa!**
O jogo prosseguirá pelas três fases, comparando os atributos que você escolheu.

**Regra de Ouro:** Geralmente, o MAIOR valor no atributo vence o ponto daquela fase.
**A Exceção:** Para a Densidade Populacional, o MENOR valor leva o ponto. Pense bem!
Se os valores forem iguais, a fase termina em empate – ninguém pontua.

**O Veredito Final:**
Após as três comparações, os pontos são somados.
Quem tiver o maior total de pontos vence a rodada!
Se a soma for um empate, a rodada termina em empate!

---

## 📊 Atributos das Cartas

Conheça os poderes dos estados que você pode usar:

* **População:** O número de habitantes.
* **Números de Pontos Turísticos:** Quantas atrações turísticas o estado possui.
* **Área:** O tamanho do estado em km².
* **PIB:** O Produto Interno Bruto, em bilhões.
* **Densidade Populacional:** Habitantes por km² (calculado).
* **PIB per capita:** A riqueza por habitante (calculado).

---

## 💻 Exemplos de Interação no Terminal

Quer ver como o jogo funciona na prática? Dê uma olhada nos exemplos abaixo:

### Exemplo 1: Uma Luta Acirrada (e uma derrota...)

```
***Escolha uma opção***
1       JOGAR       
2       REGRAS      
3       SAIR DO JOGON
1

***Iniciando o Jogo*** ***Escolha sua Carta***
1 - Amazonas
2 - Paraíba
2

--- Suas Cartas e Atributos Disponíveis ---
Sua Carta: Paraíba (Cód: P02)
  1. População: 4030961
  2. Números de Pontos Turísticos: 12
  3. Área: 56469.78 km²
  4. PIB: 78.20 bilhões
  5. Densidade Populacional: 71.38 hab/km²
  6. PIB per capita: 19399.84

--- Carta do Computador e Atributos Disponíveis ---
Carta do Computador: Amazonas (Cód: A01)
  1. População: 3952262
  2. Números de Pontos Turísticos: 15
  3. Área: 1559168.12 km²
  4. PIB: 135.50 bilhões
  5. Densidade Populacional: 2.53 hab/km²
  6. PIB per capita: 34284.16

--- Escolha seus atributos para a rodada ---

Escolha o atributo para a fase de ATAQUE (1-6): 5
Escolha o atributo para a fase de DEFESA (1-6, diferente do anterior): 4
Escolha o atributo para a fase de RECUO (1-6, diferente dos anteriores): 3

--- INICIANDO COMPARAÇÕES ---

--- FASE DE ATAQUE: Densidade Populacional ---
  Paraíba Valor: 71.38 | Amazonas Valor: 2.53
  Amazonas ganha o ponto de Ataque (menor ganha)!

--- FASE DE DEFESA: PIB ---
  Paraíba Valor: 78.20 | Amazonas Valor: 135.50
  Amazonas ganha o ponto de Defesa!

--- FASE DE RECUO: Área ---
  Paraíba Valor: 56469.78 | Amazonas Valor: 1559168.12
  Amazonas ganha o ponto de Recuo!

--- RESULTADO FINAL DA RODADA ---
Total de pontos de Paraíba: 0
Total de pontos de Amazonas: 3

>>> INFELIZMENTE, VOCÊ PERDEU A RODADA! <<<
```

### Exemplo 2: Ops, Escolha Inválida!

```
***Escolha sua Carta***
1 - Amazonas
2 - Paraíba
1

--- Suas Cartas e Atributos Disponíveis ---
Sua Carta: Amazonas (Cód: A01)
...
Escolha o atributo para a fase de ATAQUE (1-6): 4
Escolha o atributo para a fase de DEFESA (1-6, diferente do anterior): 5
Escolha o atributo para a fase de RECUO (1-6, diferente dos anteriores): 4

Escolha de atributo(s) inválida ou atributos duplicados! Por favor, siga as instruções.
```

### Exemplo 3: As Regras do Jogo

```
***Escolha uma opção***
1       JOGAR
2       REGRAS
3       SAIR DO JOGON
2

--- REGRAS DO JOGO SUPER TRUNFO ---
1. Você escolhe uma das cartas disponíveis.
2. Em seguida, você seleciona TRÊS atributos DIFERENTES para as fases de Ataque, Defesa e Recuo.
3. Para Ataque, a carta com o MAIOR valor do atributo escolhido ganha um ponto.
4. Para Defesa, a carta com o MAIOR valor do atributo escolhido ganha um ponto.
5. Para Recuo, a carta com o MAIOR valor do atributo escolhido ganha um ponto.
    **EXCEÇÃO: Se o atributo escolhido para qualquer fase for 'Densidade Populacional', o MENOR valor ganha o ponto.
6. Se os valores forem iguais em um atributo, é um empate para aquele atributo e ninguém ganha ponto.
7. A carta com o MAIOR NÚMERO TOTAL de pontos nas três comparações vence a rodada!
8. Se a soma total dos pontos for igual, a rodada termina em EMPATE.
```

### Exemplo 4: Até a Próxima!

```
***Escolha uma opção***
1       JOGAR
2       REGRAS
3       SAIR DO JOGON
3

--- SAINDO DO JOGO ---
```

---

## 🛠️ Requisitos e Tecnologias

* **Linguagem:** C
* **Ambiente de Desenvolvimento:** Windows 10
* **Bibliotecas Essenciais:**

  * `stdio.h`: A base para interagir com você, nosso jogador!
  * `time.h` e `stdlib.h`: Embora o `rand()` não defina a carta do computador diretamente (ela é sempre a oposta à sua), essas bibliotecas foram incluídas para possíveis expansões futuras com aleatoriedade.

---

## 🚀 Compilando e Rodando em Outros Sistemas Operacionais

**Compilação em Linux/macOS (GCC)**

1. **Abra o Terminal:** Navegue até a pasta onde salvou o arquivo `.c` do jogo.
2. **Compile o Código:**

   ```bash
   gcc -o supertrunfo supertrunfo.c
   ```

   * `gcc`: O comando do compilador.
   * `-o supertrunfo`: Define o nome do seu executável.
   * `supertrunfo.c`: Nome do arquivo fonte.
3. **Execute o Jogo:**

   ```bash
   ./supertrunfo
   ```

**Compilação em Windows (MinGW/GCC)**

1. **Instale o MinGW** (ou TDM-GCC).
2. **Adicione o diretório `bin` do MinGW ao PATH do sistema.**
3. **Abra o CMD ou PowerShell** e compile com:

   ```bash
   gcc -o supertrunfo supertrunfo.c
   ./supertrunfo
   ```

   ou:

   ```bash
   supertrunfo.exe
   ```

---

## 🧠 Lógica por Trás da Ação

* **Fluxo Inteligente:** Utilizamos `if`, `else`, `else-if` e `switch` para guiar o jogo, validar suas escolhas e decidir quem vence cada fase.
* **Decisões Rápidas:** O operador ternário (`? :`) ajuda a exibir informações e atribuir valores de forma concisa.
* **Dados Dinâmicos:** A Densidade Populacional e o PIB per capita são calculados em tempo real, garantindo precisão.
* **Regras Claras:** A lógica de pontuação está bem definida, especialmente a exceção para a "Densidade Populacional" onde o menor valor prevalece.

> Observação: O conteúdo deste README foi parcialmente gerado com o auxílio de inteligência artificial para otimizar a clareza e organização.

---

## 👥 Conecte-se comigo e vamos falar sobre código e tecnologia!

* **Meu GitHub:** [https://github.com/Bobpunk](https://github.com/Bobpunk)
* **Meu LinkedIn:** [https://www.linkedin.com/in/jcfonsecajunior/](https://www.linkedin.com/in/jcfonsecajunior/)
