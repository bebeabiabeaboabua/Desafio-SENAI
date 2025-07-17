# Desafio SENAI
**Desafio feito na aula de desenvolvimento de sistemas do curso técnico de IoT no SENAI**

**por Beatriz e Amábile**

## Processo
Esse programa foi desenvolvido em C usando o GDB online compiler.

- Para iniciar, separamos o codigo em funções, para facilitar a organização, entendimento e deixar flexível.
- Em seguida preenchemos a função pedirValores() com o "for" para repetir 10 vezes e armazenar os valores no vetor. Depois fizemos a função que pede os dois limites.
- A próxima etapa foi fazer a função verificaValores, que faria a comparação dos valores que estão dentro do limite, usando if, um contador, e um vetor pros valores. Nesse ponto tivemos uma dificuldade no uso dos parâmetros, não sabiamos exatamente como buscar e devolver os valores. Mas depois de algumas pesquisas nos fizemos entender e conseguimos implementar.
- E isso nos leva para última etapa, o Main! Aqui foi onde declaramos todas as variaveis e chamamos as funções. No final, através de um "for" mostramos todos os valores dentro do limite que foram armazenados no outro vetor, além da quantidade que foi armazenada no contador.
- Uma descoberta que fizemos foi o uso do "*" para uma variável receber o endereço de outra!
- **Atualizações**: Adicionamos o símbolo de celsius, e um while para caso a pessoa digite valoes inválidos para o pedirLimite então ele avisa e pede para digitar de novo.

