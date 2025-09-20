# Super Triunfo - Jogo de Cartas

## Descrição
O Super Triunfo é um jogo de cartas simples, feito em C. Nele, você compara duas "cartas" de cidades baseadas em diversos atributos, como população, área, e PIB. O jogo calcula qual carta vence em cada categoria e também no total, determinando um vencedor. É um projeto desenvolvido para praticar conceitos básicos de C, como entrada e saída de dados, condicionais (if-else) e cálculos.

## Funcionalidades
- **Entrada de Dados**: O usuário insere informações para duas cartas, incluindo estado, código, cidade, população, área, PIB e pontos turísticos.
- **Cálculos Automáticos**: O programa calcula a densidade populacional, PIB per capita, e um "Super Poder" para cada carta.
- **Escolha de Atributos**: O usuário escolhe quais dois atributos serão usados para a batalha, evitando que o mesmo atributo seja selecionado duas vezes.
- **Comparação Detalhada**: O programa mostra qual carta vence em cada um dos dois atributos escolhidos, além de calcular a soma total dos pontos e declarar um vencedor geral.

## Como Executar
### Pré-requisitos
Você precisa de um compilador C (como o GCC) instalado no seu sistema.

### Compilar
Abra seu terminal e compile o arquivo com o comando:

```bash
gcc main.c -o super_triunfo
```

### Executar
Execute o programa com o comando:

```bash
./super_triunfo
```

### Uso
Siga as instruções no terminal para inserir os dados de cada carta e veja a comparação.

## Limitações
- **Sem Validação de Entrada**: O programa não valida se o usuário insere dados de forma correta (por exemplo, se um número é digitado onde se esperava uma letra).
- **Uma Batalha por Execução**: Você precisa rodar o programa novamente para fazer uma nova comparação.
- **Código Simples**: O código é direto, sem o uso de funções ou estruturas de dados mais avançadas.

## Aprendizados
- **Sintaxe de C**: Uso de variáveis, funções de entrada (scanf, fgets) e saída (printf).
- **Manipulação de Strings**: Utilização de strcspn para remover caracteres de nova linha.
- **Condicionais (if-else)**: Aplicação de if-else para fazer comparações e determinar o vencedor.
- **Loops**: Uso de while para garantir que o usuário não escolha o mesmo atributo duas vezes.