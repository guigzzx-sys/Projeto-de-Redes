#include <stdio.h>

int main() {

    int quantidade;
    int protocolo;

    printf("Quantos pacotes deseja analisar? ");
    scanf("%d", &quantidade);

    if (quantidade <= 0) {

        printf("Quantidade invalida. Informe um numero maior que zero.\n");

    }
    else {

        for (int i = 1; i <= quantidade; i++) {

            printf("\nPacote %d\n", i);

            printf("Protocolo: ");
            scanf("%d", &protocolo);

            if (protocolo == 1) {

                printf("TCP\n");
                printf("Protocolo orientado a conexao, garante entrega e ordem dos dados.\n");
                printf("Usado em: navegacao web, e-mail, transferencia de arquivos.\n");

            }
            else if (protocolo == 2) {

                printf("UDP\n");
                printf("Protocolo sem conexao, mais rapido, mas nao garante entrega.\n");
                printf("Usado em: streaming, jogos online, chamadas de voz e video.\n");

            }
            else if (protocolo == 3) {

                printf("ICMP\n");
                printf("Protocolo usado para diagnostico e controle de rede.\n");
                printf("Usado em: comandos como ping e traceroute.\n");

            }
            else {

                printf("Protocolo desconhecido\n");
                printf("O numero informado nao corresponde a nenhum protocolo conhecido.\n");

            }
        }
    }

    return 0;
}
