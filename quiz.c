#include <stdio.h>

int main () {
    char resposta;
    int pontuacao = 0;

    printf("===================================\n");
    printf("       QUIZ BEN 10\n");
    printf("===================================\n\n");

    // Pergunta 1
    printf("1. Qual é o nome inteiro do Ben?\n");
    printf("A. Bênio Tennyson\nB. Benjamin Tennyson\nC. Benjamin Kirby Tennyson\n");
    printf("Sua Resposta: ");
    scanf(" %c", &resposta);

    if (resposta == 'c' || resposta == 'C') {
        printf("Você acertou!\n\n");
        pontuacao++;
    } else {
        printf("Lamento, você errou! A resposta correta era C: Benjamin Kirby Tennyson\n\n");
    }

    // Pergunta 2
    printf("2. Qual é o Omnitrix?\n");
    printf("A. Uma arma intergaláctica\nB. Um relógio que permite transformação\nC. Um computador alien\n");
    printf("Sua Resposta: ");
    scanf(" %c", &resposta);

    if (resposta == 'b' || resposta == 'B') {
        printf("Você acertou!\n\n");
        pontuacao++;
    } else {
        printf("Lamento, você errou! A resposta correta era B: Um relógio que permite transformação\n\n");
    }

    // Pergunta 3
    printf("3. Qual é o nome da avó do Ben?\n");
    printf("A. Sandra Tennyson\nB. Gwen Tennyson\nC. Vera Tennyson\n");
    printf("Sua Resposta: ");
    scanf(" %c", &resposta);

    if (resposta == 'a' || resposta == 'A') {
        printf("Você acertou!\n\n");
        pontuacao++;
    } else {
        printf("Lamento, você errou! A resposta correta era A: Sandra Tennyson\n\n");
    }

    // Pergunta 4
    printf("4. Qual é a forma alien mais poderosa nos primeiros 10 anos?\n");
    printf("A. Four Arms\nB. Heatblast\nC. Alien X\n");
    printf("Sua Resposta: ");
    scanf(" %c", &resposta);

    if (resposta == 'c' || resposta == 'C') {
        printf("Você acertou!\n\n");
        pontuacao++;
    } else {
        printf("Lamento, você errou! A resposta correta era C: Alien X\n\n");
    }

    // Pergunta 5
    printf("5. Qual é o melhor amigo do Ben?\n");
    printf("A. Kevin 11\nB. Gwen Tennyson\nC. Woodrow Tennison\n");
    printf("Sua Resposta: ");
    scanf(" %c", &resposta);

    if (resposta == 'a' || resposta == 'A') {
        printf("Você acertou!\n\n");
        pontuacao++;
    } else {
        printf("Lamento, você errou! A resposta correta era A: Kevin 11\n\n");
    }

    // Resultado Final
    printf("===================================\n");
    printf("   RESULTADO FINAL (bate os tambores):\n");
    printf("   %d de 5 pontos\n", pontuacao);
    printf("===================================\n");

    if (pontuacao == 5) {
        printf("Parabéns! Você é um verdadeiro fã de Ben 10!\n");
    } else if (pontuacao >= 3) {
        printf("Muito bom! Você conhece bastante sobre Ben 10!\n");
    } else if (pontuacao >= 1) {
        printf("Não foi ruim, mas tente estudar mais sobre Ben 10!\n");
    } else {
        printf("Que pena! Recomendamos assistir Ben 10 novamente!\n");
    }

    return 0;
}