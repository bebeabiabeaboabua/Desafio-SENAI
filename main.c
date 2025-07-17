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
        int valido;
        do{
        printf("Digite a %dª temperatura (°C): ", i + 1);
        valido = scanf("%d", &valor[i]);
        if(valido != 1){
            printf("Entrada inválida! Digite um número inteiro.");
        }
            while (getchar() != '\n'){
        }
        }while(valido != 1);
    }
}

void pedirLimite(int *limiteInferior, int *limiteSuperior) {
    do {
        printf("Digite o limite inferior da faixa ideal (°C): ");
        scanf("%d", limiteInferior);

        printf("Digite o limite superior da faixa ideal (°C): ");
        scanf("%d", limiteSuperior);

        if (*limiteSuperior < *limiteInferior) {
            printf("\n⚠️  O limite superior não pode ser menor que o limite inferior!\nTente novamente.\n\n");
        }

    } while (*limiteSuperior < *limiteInferior);
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

    printf("\nTemperaturas dentro da faixa ideal (%d°C a %d°C):\n", limiteInferior, limiteSuperior);
    for (int i = 0; i < dentroDaFaixa; i++) {
        printf("%d°C ", valoresIdeais[i]);
    }

    printf("\n\nTotal de temperaturas dentro da faixa ideal: %d\n", dentroDaFaixa);

    return 0;
}
