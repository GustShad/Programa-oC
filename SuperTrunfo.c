// Verificação de idade para votação
if (idade >= 16) {
    printf("Você pode votar!");
} else {
    printf("Você ainda não pode votar.");
}

// Comparação de preços
if (preco1 < preco2) {
    printf("O produto 1 é mais barato.");
} else if (preco1 > preco2) {
    printf("O produto 2 é mais barato.");
} else {
    printf("Os produtos têm o mesmo preço.");
}
if (condicao) {
    // bloco executado se condição for verdadeira
}
// Comparação de valores
if (numero1 > numero2) {
    printf("numero1 é maior que numero2");
}

// Verificação de nota
if (nota >= 60) {
    printf("Você passou!");
}
if (condicao) {
    // bloco se verdadeiro
} else {
    // bloco se falso
}
// Verificação de número par/ímpar
if (numero % 2 == 0) {
    printf("O número é par");
} else {
    printf("O número é ímpar");
}
#include <stdio.h>

typedef struct {
    char estado[3];
    char cidade[50];
    int populacao;
    float area;
    float PIB;
    int pontos_turisticos;
} Carta;

int main() {
    Carta carta1 = {"SP", "São Paulo", 12300000, 1521.11, 450.5, 150};
    Carta carta2 = {"RJ", "Rio de Janeiro", 6776000, 1200.27, 280.3, 120};
    
    // Cálculos
    float densidade1 = carta1.populacao / carta1.area;
    float densidade2 = carta2.populacao / carta2.area;
    
    // Comparação por população (atributo escolhido)
    printf("Comparação de cartas (Atributo: População):\n");
    printf("Carta 1 - %s (%s): %d\n", carta1.cidade, carta1.estado, carta1.populacao);
    printf("Carta 2 - %s (%s): %d\n", carta2.cidade, carta2.estado, carta2.populacao);
    
    if (carta1.populacao > carta2.populacao) {
        printf("Resultado: Carta 1 (%s) venceu!\n", carta1.cidade);
    } else if (carta1.populacao < carta2.populacao) {
        printf("Resultado: Carta 2 (%s) venceu!\n", carta2.cidade);
    } else {
        printf("Resultado: Empate!\n");
    }
    
    return 0;
}
if (nota >= 90) {
    printf("A");
} else if (nota >= 80) {
    printf("B");
} else if (nota >= 70) {
    printf("C");
} else {
    printf("Reprovado");
}
if (idade >= 18) {
    if (renda < 2000.0) {
        printf("Qualificado para auxílio");
    }
}
switch (variavel) {
    case valor1:
        // código
        break;
    case valor2:
        // código
        break;
    default:
        // código
}
int opcao;
printf("1. Iniciar jogo\n2. Ver regras\n3. Sair\n");
scanf("%d", &opcao);

switch (opcao) {
    case 1:
        printf("Iniciando jogo...");
        break;
    case 2:
        printf("Regras do jogo...");
        break;
    case 3:
        printf("Saindo...");
        break;
    default:
        printf("Opção inválida!");
}
#include <stdio.h>

typedef struct {
    char pais[50];
    int populacao;
    float area;
    float PIB;
    int pontos_turisticos;
    float densidade;
} Carta;

void exibirMenu() {
    printf("\nEscolha o atributo para comparar:\n");
    printf("1. População\n");
    printf("2. Área\n");
    printf("3. PIB\n");
    printf("4. Pontos Turísticos\n");
    printf("5. Densidade Demográfica\n");
}

int main() {
    Carta carta1 = {"Brasil", 213000000, 8515767.049, 1840.0, 250};
    Carta carta2 = {"Argentina", 45380000, 2780400, 445.5, 120};
    
    // Calcular densidades
    carta1.densidade = carta1.populacao / carta1.area;
    carta2.densidade = carta2.populacao / carta2.area;
    
    int opcao;
    exibirMenu();
    scanf("%d", &opcao);
    
    switch (opcao) {
        case 1: // População
            if (carta1.populacao > carta2.populacao) {
                printf("%s vence com %d habitantes", carta1.pais, carta1.populacao);
            } else {
                printf("%s vence com %d habitantes", carta2.pais, carta2.populacao);
            }
            break;
        case 5: // Densidade (menor vence)
            if (carta1.densidade < carta2.densidade) {
                printf("%s vence com densidade %.2f", carta1.pais, carta1.densidade);
            } else {
                printf("%s vence com densidade %.2f", carta2.pais, carta2.densidade);
            }
            break;
        // outros cases...
        default:
            printf("Opção inválida!");
    }
    
    return 0;
}
// Determinar maior número
int maior = (a > b) ? a : b;

// Classificação por idade
char* categoria = (idade >= 18) ? "Adulto" : "Criança/Adolescente";
#include <stdio.h>
#include <stdbool.h>

typedef struct {
    char pais[50];
    int populacao;
    float area;
    float PIB;
    int pontos_turisticos;
    float densidade;
} Carta;

void calcularDensidade(Carta *carta) {
    carta->densidade = carta->populacao / carta->area;
}

void exibirAtributosDisponiveis(bool disponiveis[]) {
    printf("\nAtributos disponíveis:\n");
    if (disponiveis[0]) printf("1. População\n");
    if (disponiveis[1]) printf("2. Área\n");
    if (disponiveis[2]) printf("3. PIB\n");
    if (disponiveis[3]) printf("4. Pontos Turísticos\n");
    if (disponiveis[4]) printf("5. Densidade Demográfica\n");
}

int main() {
    Carta carta1 = {"Brasil", 213000000, 8515767.049, 1840.0, 250};
    Carta carta2 = {"Argentina", 45380000, 2780400, 445.5, 120};
    
    calcularDensidade(&carta1);
    calcularDensidade(&carta2);
    
    bool atributosDisponiveis[5] = {true, true, true, true, true};
    int atributosEscolhidos[2] = {-1, -1};
    
    // Seleção do primeiro atributo
    printf("Escolha o primeiro atributo:\n");
    exibirAtributosDisponiveis(atributosDisponiveis);
    scanf("%d", &atributosEscolhidos[0]);
    atributosDisponiveis[atributosEscolhidos[0]-1] = false;
    
    // Seleção do segundo atributo
    printf("\nEscolha o segundo atributo (diferente do primeiro):\n");
    exibirAtributosDisponiveis(atributosDisponiveis);
    scanf("%d", &atributosEscolhidos[1]);
    
    // Comparação
    int pontosCarta1 = 0, pontosCarta2 = 0;
    float somaCarta1 = 0, somaCarta2 = 0;
    
    for (int i = 0; i < 2; i++) {
        switch (atributosEscolhidos[i]) {
            case 1: // População
                if (carta1.populacao > carta2.populacao) pontosCarta1++;
                else if (carta1.populacao < carta2.populacao) pontosCarta2++;
                somaCarta1 += carta1.populacao;
                somaCarta2 += carta2.populacao;
                break;
            case 5: // Densidade (menor vence)
                if (carta1.densidade < carta2.densidade) pontosCarta1++;
                else if (carta1.densidade > carta2.densidade) pontosCarta2++;
                somaCarta1 += carta1.densidade;
                somaCarta2 += carta2.densidade;
                break;
            // outros cases...
        }
    }
    
    // Resultado final
    printf("\nResultado:\n");
    if (pontosCarta1 > pontosCarta2) {
        printf("%s venceu com %d pontos e soma %.2f", carta1.pais, pontosCarta1, somaCarta1);
    } else if (pontosCarta1 < pontosCarta2) {
        printf("%s venceu com %d pontos e soma %.2f", carta2.pais, pontosCarta2, somaCarta2);
    } else {
        if (somaCarta1 > somaCarta2) {
            printf("Empate nos atributos, mas %s vence pela soma maior (%.2f vs %.2f)", 
                   carta1.pais, somaCarta1, somaCarta2);
        } else if (somaCarta1 < somaCarta2) {
            printf("Empate nos atributos, mas %s vence pela soma maior (%.2f vs %.2f)", 
                   carta2.pais, somaCarta2, somaCarta1);
        } else {
            printf("Empate total!");
        }
    }
    
    return 0;
}
