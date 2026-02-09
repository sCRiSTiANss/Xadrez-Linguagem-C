// Desafio de Xadrez - MateCheck

#include <stdio.h>

// Chamada recursiva: Bispo 
void bispo(int lado, int passos) {
    int i = 0;

    // Loops aninhados para o bispo
    while (i < passos) {
        // Para cada passo, o bispo anda 1 na vertical + 1 na horizontal
        for (int j = 0; j < 1; j++) {
            switch (lado) {
                case 1:
                    printf("Cima\n");
                    printf("Direita\n");
                    break;
                case 2:
                    printf("Cima\n");
                    printf("Esquerda\n");
                    break;
                case 3:
                    printf("Baixo\n");
                    printf("Direita\n");
                    break;
                case 4:
                    printf("Baixo\n");
                    printf("Esquerda\n");
                    break;
                default:
                    printf("Movimento inválido\n");
                    return;
            }
        }
        i++;
    }
}

// Chamada recursiva: Torre 
void torre(int lado, int passos, int repetirPassos) {
    if (repetirPassos > passos) return; 

    // Loop for para a movimentação da torre
    if (lado == 1) {
        for (; repetirPassos <= passos; repetirPassos++) {
            printf("Torre andou para cima\n");
        }
    }

    if (lado == 2) {
        for (; repetirPassos <= passos; repetirPassos++) {
            printf("Torre andou para direita\n");
        }
    }

    if (lado == 3) {
        for (; repetirPassos <= passos; repetirPassos++) {
            printf("Torre andou para esquerda\n");
        }
    }

    if (lado == 4) {
        for (; repetirPassos <= passos; repetirPassos++) {
            printf("Torre andou para baixo\n");
        }
    }

}

// Chamada recursiva: Rainha
void rainha(int lado, int passos) {
    int repetirPassos = 1;

    // Loop while para a movimentação da rainha
    if (lado == 1) {
        while (repetirPassos <= passos) {
            printf("Rainha andou para cima\n");
            repetirPassos++;
        }
    }

    if (lado == 2) {
        while (repetirPassos <= passos) {
            printf("Rainha andou para direita\n");
            repetirPassos++;
        }
    }

    if (lado == 3) {
        while (repetirPassos <= passos) {
            printf("Rainha andou para esquerda\n");
            repetirPassos++;
        }
    }

    if (lado == 4) {
        while (repetirPassos <= passos) {
            printf("Rainha andou para baixo\n");
            repetirPassos++;
        }
    }

    if (lado == 5) {
        while (repetirPassos <= passos) {
            printf("Rainha andou para cima direita\n");
            repetirPassos++;
        }
    }

    if (lado == 6) {
        while (repetirPassos <= passos) {
            printf("Rainha andou para cima esquerda\n");
            repetirPassos++;
        }
    }

    if (lado == 7) {
        while (repetirPassos <= passos) {
            printf("Rainha andou para baixo direita\n");
            repetirPassos++;
        }
    }

    if (lado == 8) {
        while (repetirPassos <= passos) {
            printf("Rainha andou para baixo esquerda\n");
            repetirPassos++;
        }
    }

}

// Chamada recursiva: Cavalo
void cavalo(int lado) {
    int movCavalo = 0;
    int movCavalo2 = 2;

    // Loops aninhados para a movimentação do cavalo
    while (movCavalo < 1) {
        switch (lado) {
            case 1:
                for (int i = 0; i < movCavalo2; i++) {
                    printf("Esquerda\n");
                }
                printf("Cima\n");
                break;
            case 2:
                for (int i = 0; i < movCavalo2; i++) {
                    printf("Esquerda\n");
                }
                printf("Baixo\n");
                break;
            case 3:
                for (int i = 0; i < movCavalo2; i++) {
                    printf("Direita\n");
                }
                printf("Cima\n");
                break;
            case 4:
                for (int i = 0; i < movCavalo2; i++) {
                    printf("Direita\n");
                }
                printf("Baixo\n");
                break;
            case 5:
                for (int i = 0; i < movCavalo2; i++) {
                    printf("Cima\n");
                }
                printf("Direita\n");
                break;
            case 6:
                for (int i = 0; i < movCavalo2; i++) {
                    printf("Cima\n");
                }
                printf("Esquerda\n");
                break;
            case 7:
                for (int i = 0; i < movCavalo2; i++) {
                    printf("Baixo\n");
                }
                printf("Direita\n");
                break;
            case 8:
                for (int i = 0; i < movCavalo2; i++) {
                    printf("Baixo\n");
                }
                printf("Esquerda\n");
                break;
            default:
                printf("Movimento inválido\n");
                return;
        }

        movCavalo++;
    }
}



int main() {
    
    // Variaveis para movimentação das peças
    int peca, lado, passos;

    // Variavel para escolha de continuar o jogo voltando do inicio com Do While
    char continuar;

    do{

        //Menu com caso de escolha switch
        printf("==>Escolha a peça<==\n");
        printf("1 - Bispo\n");
        printf("2 - Torre\n");
        printf("3 - Rainha\n");
        printf("4 - Cavalo\n");
        printf("Digite a opção\n");
        scanf("%d", &peca);

        //Dependendo da peça escolhida o switch oferece diferentes casos para cada uma
        switch (peca){
            case 1: 
            printf("Você escolheu o Bispo\n");

            printf("\n==>Escolha o lado<==\n");
            printf("1 - Cima para a direita\n");
            printf("2 - Cima para a esquerda\n");
            printf("3 - Baixo para a direita\n");
            printf("4 - Baixo para a esquerda\n");
            printf("Escolha uma opção:\n");
            scanf("%d", &lado);

            switch (lado){
            case 1: printf("Você escolheu: Cima para a direita\n");break;
            case 2: printf("Você escolheu: Cima para a esquerda\n");break;
            case 3: printf("Você escolheu: Baixo para a direita\n");break;
            case 4: printf("Você escolheu: Baixo para a esquerda\n");break;
            default: printf("Opção invalida!\n"); break;
            }

            printf("\nDigite a quantidade de passos, quantas casas deseja que sua peça prossiga(de 1 a 5):\n");
            scanf("%d", &passos);
            if(passos >= 1 && passos <=5){
                printf("Você escolheu andar %d passo(s) com  o Bispo.\n");
            }else {
                printf("Você escolheu um número invalido! Escolha de 1 a 5.\n");
                continue;
            }

            // Chamada do void
            bispo(lado, passos);
            
            break;
            
            case 2: printf("Você escolheu a Torre\n");

            printf("\n==>Escolha o lado<==\n");
            printf("1 - Para cima\n");
            printf("2 - Para direita\n");
            printf("3 - Para esquerda\n");
            printf("4 - Para baixo\n");
            printf("Escolha uma opção:\n");
            scanf("%d", &lado);

            switch (lado){
            case 1: printf("Você escolheu: Para cima\n");break;
            case 2: printf("Você escolheu: Para direita\n");break;
            case 3: printf("Você escolheu: Para esquerda\n");break;
            case 4: printf("Você escolheu:  Para baixo\n");break;
            default: printf("Opção invalida!\n"); break;
            }

            printf("\nDigite a quantidade de passos, quantas casas deseja que sua peça prossiga(de 1 a 5):\n");
            scanf("%d", &passos);
            if(passos >= 1 && passos <=5){
                printf("Você escolheu andar %d passo(s) com  a Torre.\n");
            }else {
                printf("Você escolheu um número invalido! Escolha de 1 a 5.\n");
                continue;
            }

            // Chamada do void
            torre(lado, passos, 1);

            break;
            
            case 3: printf("Você escolheu a Rainha\n");

            printf("\n==>Escolha o lado<==\n");
            printf("1 - Para cima\n");
            printf("2 - Para direita\n");
            printf("3 - Para esquerda\n");
            printf("4 - Para baixo\n");
            printf("5 - Cima direita\n");
            printf("6 - Cima esquerda\n");
            printf("7 - Baixo direita\n");
            printf("8 - Baixo esquerda\n");
            printf("Escolha uma opção:\n");
            scanf("%d", &lado);

            switch (lado){
            case 1: printf("Você escolheu: Para cima\n");break;
            case 2: printf("Você escolheu: Para direita\n");break;
            case 3: printf("Você escolheu: Para esquerda\n");break;
            case 4: printf("Você escolheu:  Para baixo\n");break;
            case 5: printf("Você escolheu:  Cima direita\n");break;
            case 6: printf("Você escolheu:  Cima esquerda\n");break;
            case 7: printf("Você escolheu:  Baixo direita\n");break;
            case 8: printf("Você escolheu:  Baixo esquerda\n");break;
            default: printf("Opção invalida!\n"); break;
            }

            printf("\nDigite a quantidade de passos, quantas casas deseja que sua peça prossiga(de 1 a 5):\n");
            scanf("%d", &passos);
            if(passos >= 1 && passos <=5){
                printf("Você escolheu andar %d passo(s) com  a Rainha.\n");
            }else {
                printf("Você escolheu um número invalido! Escolha de 1 a 5.\n");
                continue;
            }

            // Chamada do void
            rainha(lado, passos);

            break;

            case 4: printf("Você escolheu o Cavalo\n");
            
            printf("\n==>Escolha o lado<==\n");
            printf("1 - Da esquerda para cima\n");
            printf("2 - Da esquerda para baixo\n");
            printf("3 - Da direita para cima\n");
            printf("4 - Da direita para baixo\n");
            printf("5 - De cima para direita\n");
            printf("6 - De cima para esquerda\n");
            printf("7 - De baixo para direita\n");
            printf("8 - De baixo para esquerda\n");
            printf("Escolha uma opção:\n");
            scanf("%d", &lado);

            switch (lado){
            case 1: printf("Você escolheu: Da esquerda para cima\n");break;
            case 2: printf("Você escolheu: Da esquerda para baixo\n");break;
            case 3: printf("Você escolheu: Da direita para cima\n");break;
            case 4: printf("Você escolheu: Da direita para baixo\n");break;
            case 5: printf("Você escolheu: De cima para direita\n");break;
            case 6: printf("Você escolheu: De cima para esquerda\n");break;
            case 7: printf("Você escolheu: De baixo para direita\n");break;
            case 8: printf("Você escolheu: De baixo para esquerda\n");break;
            default: printf("Opção invalida!\n"); break;
            }

            // Chamada do void
            cavalo(lado);

            break;
            
            default: printf("Opção invalida\n"); continue;
            
        }

        // Opção de escolha para retornar valor booleano para retornar o Do While
        printf("\nDeseja fazer outra jogada?(s/n): ");
        scanf(" %c", &continuar);
        
    }while (continuar == 's' || continuar =='S');
    printf("\nEncerrando Xadrez...\n");

    return 0;
}




//"https://github.com/Cursos-TI/desafio-xadrez-sCRiSTiANss"