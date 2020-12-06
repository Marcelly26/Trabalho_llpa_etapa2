#include <stdio.h>
#include <stdlib.h>
#define MAX_CADASTROS_CLIENTES 100
#define MAX_HOTEIS_CADASTRADOS 50
#define MAX_VIAGENS 100
#define MAX_DIAS 31
int main()
{
//Variáveis  do cliente
 char cadastro_cliente[MAX_CADASTROS_CLIENTES][60], email[MAX_CADASTROS_CLIENTES][20], CPF[MAX_CADASTROS_CLIENTES][12], senha_cliente[MAX_CADASTROS_CLIENTES][10];
 int menu_entrada, quant_cadastro_cliente=0, j;
 //variaveis do hotel
 float diaria_hotel[MAX_HOTEIS_CADASTRADOS],valor_passagem[MAX_CADASTROS_CLIENTES];
 int codigo_hotel[MAX_HOTEIS_CADASTRADOS];
 int i;
 //variaveis da viagem
 int dia_saida[MAX_DIAS],dia_retorno[MAX_DIAS];
 char destino[MAX_VIAGENS][20], origem[MAX_VIAGENS][20], mes[12][10];

    do
    {
        printf("Menu:\n1 => cadastro do cliente\n2=> hoteis desponiveis\n3=> determinar destino\n4=>valor passagem\n5=> Agendar viagen\n6 => Sair\n");
          scanf("%d", &menu_entrada);
        switch(menu_entrada){

           case 1:

                 printf("\n Digite quantos cadastros de cliente deseja fazer : ");
                 scanf("%d", &j);

                 for(i=0;i<j;i++){

                       system("cls");
                    printf(" Realizando Cadastro do cliente %d :\n\n", i+1);
                    printf(" Digite o seu nome completo para darmos inicio ao cadastro:\n");
                    scanf(" %[^\n]s", &cadastro_cliente[i]);
                    printf(" Digite o seu CPF:\n");
                    scanf(" %[^\n]s", &CPF[i]);
                    printf(" Digite um email disponivel:\n");
                    scanf(" %[^\n]s", &email[i]);
                    printf(" Digite a sua senha para a conclusao do cadastro:\n");
                    scanf(" %[^\n]s", &senha_cliente[i]);
                    quant_cadastro_cliente++;
                 }
                 break;

           case 2 :


            printf(" Menu> Hoteis disponiveis\n\n");

            for(i=0;i<quant_cadastro_cliente;i++)
            {

                system("cls");
                printf(" Digite a diaria do hotel:\n");
                scanf("%f", &diaria_hotel[i]);
                printf(" Digite o codigo do hotel :\n");
                scanf("%d", &codigo_hotel[i]);
                printf(" hotel %d:\n\tCodigo do hotel:%d\n\tDiaria do Hotel: R$%.2f\n", i+1, codigo_hotel[i], diaria_hotel[i]);
                system("pause");

            }
               break;

           case 3:

            for(i=0;i<quant_cadastro_cliente;i++){

            printf("\n Digite o seu destino:");
            getchar();
            gets(destino[i]);
            printf("\n Digite a sua origem:");
            gets(origem[i]);
            }

           break;

           case 4:


            printf(" Menu> passagem\n\n");

            for(i=0;i<quant_cadastro_cliente;i++)
            {
                printf(" digite o valor da passagem:\n");
                scanf("%f", &valor_passagem[i]);
                printf("  Passagem %d\n\tvalor passagem: R$%.2f\n", i+1, valor_passagem[i]);
                system("pause");
            }

             break;

             case 5:
                for(i=0;i<quant_cadastro_cliente;i++){

                    printf(" Digite o dia que deseja viajar:\n");
                 scanf("%d", &dia_saida[i]);
                 printf("\n Digite o dia que deseja retornar:\n");
                 scanf("%d", &dia_retorno[i]);
                 printf(" Digite o mes que deseja viajar:");
                 getchar();
                 gets(mes[i]);
                 printf("\n Digite o mes que deseja retornar:");
                 gets(mes[i]);
                }
                 break;

                case 6:
             // sair do programa
             printf("\n saindo do programa ...\n");
             break;

            default:
                    printf("\n opcao invalida\n");



        }
        }while(1);

    return 0;
}
