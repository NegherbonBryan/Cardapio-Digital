#include <stdio.h>
#include <windows.h>
#include <string.h>

int main(void) {
    SetConsoleOutputCP(CP_UTF8);
    int opcao;
    int opcaoPrato;
    float Total = 0.0;
    char pedido[1000] = "";
    int quantidaedePratos = 0;

    // Menu Principal //
    printf("Olá seja bem vindo ao Negherbons, seu restaurante italiano favorito!\n");

    do {
     printf("Digite a opção desejada:\n");
     printf("1 - Entrada\n");
     printf("2 - Prato Principal\n");
     printf("3 - Sobremesa\n");
     printf("4 - Encerrar pedido\n");
     scanf("%d", &opcao);

    // Opções escolhidas //
    switch (opcao) {
        case 1:
         printf("Entradas disponíveis:\n");
         printf("1 - Bruschetta\n");
         printf("2 - Ravióli\n");
         printf("3 - Salada Caprese\n");
         scanf("%d", &opcaoPrato);
            switch (opcaoPrato) {
                case 1:
                Total += 10.00;
                strcat(pedido, "Bruschetta - R$ 10.00\n");
                quantidaedePratos++;
                break;
                case 2:
                Total += 15.00;
                strcat(pedido, "Ravióli - R$ 15.00\n");
                quantidaedePratos++;
                break;
                case 3:
                Total += 08.00;
                strcat(pedido, "Salada Caprese - R$ 08.00\n");
                quantidaedePratos++;
                break;
                default:
                printf("Opção inválida. Por favor, tente novamente.\n");
            }
        break;
        case 2:
         printf("Pratos principais disponíveis:\n");
         printf("1 - Macarrão Carbonara\n");
         printf("2 - Lasanha\n");
         printf("3 - Risoto de Cogumelos\n");
         scanf("%d", &opcaoPrato);
            switch (opcaoPrato) {
                case 1:
                Total += 20.00;
                strcat(pedido, "Macarrão Carbonara - R$ 20.00\n");
                quantidaedePratos++;
                break;
                case 2:
                Total += 25.00;
                strcat(pedido, "Lasanha - R$ 25.00\n");
                quantidaedePratos++;
                break;
                case 3:
                Total += 18.00;
                strcat(pedido, "Risoto de Cogumelos - R$ 18.00\n");
                quantidaedePratos++;
                break;
                default:
                printf("Opção inválida. Por favor, tente novamente.\n");
            }
        break;
        case 3:
         printf("Sobremesas disponíveis:\n");
         printf("1 - Brownie com sorvete\n");
         printf("2 - Tiramisu\n");
         printf("3 - Panna Cotta\n");
         scanf("%d", &opcaoPrato);
            switch (opcaoPrato) {
                case 1:
                Total += 15.00;
                strcat(pedido, "Brownie com sorvete - R$ 15.00\n");
                quantidaedePratos++;
                break;
                case 2:
                Total += 20.00;
                strcat(pedido, "Tiramisu - R$ 20.00\n");
                quantidaedePratos++;
                break;
                case 3:
                Total += 12.00;
                strcat(pedido, "Panna Cotta - R$ 12.00\n");
                quantidaedePratos++;
                break;
                default:
                printf("Opção inválida. Por favor, tente novamente.\n");
            }
        break;
        case 4:
            if (quantidaedePratos == 0) {
            printf("Escolha pelo menos um prato antes de encerrar!\n");
            opcao = 0;
            } 
        break;
        default:
        printf("Opção inválida. Por favor, tente novamente.\n");
    }

    // Resumo do pedido //
    } while (opcao != 4);
    printf("\n======== RESUMO DO PEDIDO ========\n");
    printf("\nItens do pedido:\n%s", pedido);
    printf("\n-------------------------------------\n");
    printf("\nTotal do pedido: R$ %.2f\n", Total);
    printf("Obrigado por comprar conosco!\n");
    return 0 ;
}