
#include <stdio.h>
#include <string.h>

/*Escreva um programa que verifique, em uma string, a existência da letra ‘a’, seja maiúscula ou minúscula, além de informar a quantidade de vezes em que ela ocorre.

IMPORTANTE: Essa string pode ser informada através de qualquer entrada de sua preferência ou pode ser previamente definida no código;*/



int main() {
    char string[100]; // Define uma string com tamanho máximo de 100 caracteres
    int i, count = 0;

    // Solicita que o usuário informe uma string
    printf("Informe uma string: ");
    fgets(string, sizeof(string), stdin); // Usa fgets para obter a string

    // Remove o caractere de nova linha que o fgets pode adicionar
    string[strcspn(string, "\n")] = 0;

    // Percorre a string verificando a presença de 'a' ou 'A'
    for (i = 0; string[i] != '\0'; i++) {
        if (string[i] == 'a' || string[i] == 'A') {
            count++; // Incrementa o contador se encontrar 'a' ou 'A'
        }
    }

    // Exibe o resultado
    if (count > 0) {
        printf("A letra 'a' (maiúscula ou minúscula) ocorre %d vez(es) na string.\n", count);
    } else {
        printf("A letra 'a' (maiúscula ou minúscula) não está presente na string.\n");
    }

    return 0;
}
