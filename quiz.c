#include <stdio.h>

int main () {
    char resposta;
    int pontuacao =0;

printf ("Quiz Ben 10\n\n");

printf ("1. Qual é o nome inteiro do Ben?\n");
printf ("A. Bênio Tennyson\nB. Benjamin Tennyson\nC.Benjamin Kirby Tennyson\n");
printf ("Sua Resposta: ");
scanf (" %c", &resposta);

if (resposta == 'c'|| resposta =='C') {
    printf("Você acertou!\n\n");
    pontuacao++;
} else {
    printf ("lamento, você errou! A resposta era Benjamin Kirby Tennyson");
}
    printf (" Sua pontuacao final (bate os tambores): %d pontos \n", pontuacao);
    return 0;
}