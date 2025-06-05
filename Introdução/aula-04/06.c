// Programação estruturada com linguagem C
// 1.0 Variáveis em C

/*
    int: Representa números inteiros
    float: Representa números de ponto flutuante (números reais)
    char: Representa caracteres individuais
    double: Representa números de ponto flutuante de precisão dupla
*/

#include <stdio.h> // Inclui a biblioteca padrão de entrada e saída.

int main() { // Todo programa em C começa com a função 'main'.
    // Declaração e inicialização das variáveis
    int idade = 25;
    float altura = 1.75;  // ERRO 1: Faltava o ponto e vírgula no final da linha.
                          // ERRO 2: Em C, o separador decimal é ponto ('.'), não vírgula.
    char genero = 'M';    // ERRO 3: A sintaxe 'char:genero' está incorreta. O correto é 'char nome_da_variavel'.
                          // ERRO 4: Para um único caractere, usamos **as pas simples (' ')**, não aspas duplas (" ").
    double peso = 78.50;  // ERRO 5: O separador decimal em C é ponto ('.'), não vírgula.

    // A declaração de '_Bool ativo' duas vezes causaria um erro.
    // Você não pode declarar a mesma variável com o mesmo nome no mesmo escopo.
    // Em C, '0' é considerado falso e qualquer valor diferente de zero é considerado verdadeiro.
    _Bool ativo_verdadeiro = 1; // Exemplo de variável booleana verdadeira
    _Bool ativo_falso = 0;      // Exemplo de variável booleana falsa

    // Instruções de saída de dados (usando printf)
    printf("Idade: %d anos\n", idade);
    printf("Altura: %.2f metros\n", altura); // O '%.2f' formata para 2 casas decimais.
    printf("Gênero: %c\n", genero);
    printf("Peso: %.2lf kg\n", peso); // O '%.2lf' formata um double para 2 casas decimais.
    printf("Status Ativo (Verdadeiro): %d\n", ativo_verdadeiro);
    printf("Status Ativo (Falso): %d\n", ativo_falso);

    return 0; // Indica que o programa foi executado com sucesso.
}