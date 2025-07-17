/******************************************************************************

Atividade
Beatriz e Amábile

Orientações SA
Uma empresa de automação industrial contratou sua equipe para desenvolver um sistema simples
de monitoramento de temperatura. O sistema deve permitir que o operador insira um conjunto de medições
diárias (em graus Celsius) e, com base nesses dados, o sistema deve verificar quais medições estão dentro
de uma faixa ideal de operação, previamente definida.
Esse tipo de aplicação é comum em ambientes industriais, onde sensores capturam dados constantemente,
e a análise correta dessas informações garante o funcionamento eficiente e seguro de equipamentos.



Desafio
Você deverá desenvolver, em linguagem C, um programa que:
1. Solicite ao usuário a entrada de 10 valores inteiros representando medições de temperatura.
2. Solicite os limites inferior e superior da faixa ideal de operação.
3. Verifique quais valores estão dentro da faixa, ou seja, maiores ou iguais ao limite inferior e menores ou iguais ao limite superior.
4. Exiba na tela apenas os valores que atendem a esse critério.
5. Ao final, informe quantas medições ficaram dentro da faixa ideal.

*******************************************************************************/
#include <stdio.h>

void pedirValores(int valor[], int tamanho) {
    for (int i = 0; i < tamanho; i++) {
        printf("Digite a %dº temperatura: ", i + 1);
        scanf("%d", &valor[i]);
    }
}

void pedirLimite(int *limiteInferior, int *limiteSuperior) {
    printf("Digite o limite inferior: ");
    scanf("%d", limiteInferior);
    printf("Digite o limite superior: ");
    scanf("%d", limiteSuperior);
}

int verificarValores(int valores[], int tamanho, int limiteInferior, int limiteSuperior, int valoresIdeais[]) {
    int contador = 0;
    for (int i = 0; i < tamanho; i++) {
        if (valores[i] >= limiteInferior && valores[i] <= limiteSuperior) {
            valoresIdeais[contador] = valores[i];
            contador++;
        }
    }
    return contador;
}

int main() {
    int valores[10];
    int valoresIdeais[10]; 
    int limiteSuperior, limiteInferior;
    int dentroDaFaixa;

    pedirValores(valores, 10);
    pedirLimite(&limiteInferior, &limiteSuperior);

    dentroDaFaixa = verificarValores(valores, 10, limiteInferior, limiteSuperior, valoresIdeais);

    printf("\nTemperaturas dentro da faixa (%d a %d):\n", limiteInferior, limiteSuperior);
    for (int i = 0; i < dentroDaFaixa; i++) {
        printf("%d ", valoresIdeais[i]);
    }

    printf("\nTotal de temperaturas dentro da faixa ideal: %d\n", dentroDaFaixa);

    return 0;
}
