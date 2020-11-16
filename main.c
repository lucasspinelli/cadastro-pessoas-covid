#include<stdio.h>
#include<stdlib.h>
#include<string.h> //Biblioteca para usar a funçao strcmp
#include<windows.h>
#include<conio.h>
#include <locale.h>


int main(void){
    /*VARIAVEIS*/
        FILE *cfPtr;

        int opcao,opcao1,opcao2,opcao3,opcao4,i,qtd;


    struct paciente
    {
        char nome[100],cpf[30],telefone[15],rua[50],
        nrua[4],bairro[50],cidade[50],estado[50],cep[20];
    }
    CA[600];
    CA[600];
    CA[600];
    CA[600];
    CA[600];
    CA[600];
    CA[600];
        char usuario[100]; //Variável que guarda o nome do usuário
        setlocale(LC_ALL,"");
        system("cls");
        char c;
        char login[20];
        char senha[20];
        int a=10;
        int p=0;
        int verifica_senha=0;
        int quantidade=0;
        int option = 1;

        while(verifica_senha==0){
       printf("\n\t\tCADASTRO DE PACIENTE\n\n login: ");
       //fflush(stdin);  //Limpando o buffer do teclado
       gets(usuario);
       printf("\n senha: ");
       while((c=getch())!=13){ //13 é o valor de ENTER na tabela ASCII
           senha[p]=c;
           p++;
           printf("*");      //imprime o * Anterisco
           }
          senha[p]='\0';
          p=0;
       system("cls");
       a= strcmp(senha,"chico"); //
       if(a==0){printf("SENHA CORRETA");system("color 0a");verifica_senha=1;Beep(1200,200);}
           else{printf("SENHA INCORRETA\n");system("color 0c");Beep(1500,2000);}
       printf("\n");

       }
       system("pause");
       system("color 0F");
       //read_option();

                while(opcao != 6)
            {
                while(opcao2 != 1)
                {
                    system("color f9");
                    system("cls");

                    printf("---------------------------------------\n");
                    printf("\t Seja Bem Vindo(a) Atendente %s\n",usuario);
                    printf("---------------------------------------\n");
                    printf(" 1- CADASTRAR PACIÊNTE\n ");
                    printf("2- EXIBIR DADOS DO PACIÊNTE\n ");
                    printf("3- INFORMAÇÕES DO SISTEMA\n ");
                    printf("4- SAIR\n ");
                    printf("---------------------------------------\n\n");
                    printf("\nESCOLHA UMA OPÇÃO: ");
                    scanf("%d",&opcao);

                    switch(opcao)
                    {
                    case 1:
                        system("cls");
                        printf("\n\n QUANTOS CADASTROS DESEJA FAZER: ");
                        scanf("%d",&qtd);

                    for (i=1;i<=qtd;i++)
                        {

                            int ano, idade;
                            char morbidade;
                            int anoatual = 2020;



                            cfPtr = fopen("pacientes.txt","w");
                            system("cls");
                            printf("\n\n\t\t\t  INICIANDO CADASTRO %d\n",i);
                            printf("\t\t\t  ----------------\n\n");
                            printf("\nDigite o ano de nascimento do paciente: ");
                            scanf("%d",&ano);
                            idade = anoatual - ano;
                            printf("O PACIENTE TEM %d ANOS \n",idade);

                            if(idade >= 65 && morbidade != ""){
                             printf("O PACIENTE FAZ PARTE DO GRUPO DE RISCO.");
                            printf("\n NOME DO PACIENTE: ");
                            fflush(stdin);
                            scanf("%[^\n]s",CA[i].nome);
                            printf("\n CPF DO PACIENTE: ");
                            fflush(stdin);
                            scanf("%[^\n]s",CA[i].cpf);
                            printf("\n TELEFONE DO PACIENTE: ");
                            fflush(stdin);
                            scanf("%[^\n]s",CA[i].telefone);
                            printf("\n CEP: ");
                            fflush(stdin);
                            scanf("%[^\n]s",CA[i].cep);
                            printf("\n NOME DA RUA: ");
                            fflush(stdin);
                            scanf("%[^\n]s",CA[i].rua);
                            printf("\n NÚMERO: ");
                            fflush(stdin);
                            scanf("%[^\n]s",CA[i].nrua);
                            printf("\n BAIRRO: ");
                            fflush(stdin);
                            scanf("%[^\n]s",CA[i].bairro);
                            printf("\n CIDADE: ");
                            fflush(stdin);
                            scanf("%[^\n]s",CA[i].cidade);
                            printf("\n ESTADO: ");
                            fflush(stdin);
                            scanf("%[^\n]s",CA[i].estado);

                            while(!feof(stdin) && i<=qtd){
                            fprintf(cfPtr, "\n NOME DO PACIENTE: %s\n CPF: %s\n TELEFONE: %s\n CEP: %s\n ", CA[i].nome, CA[i].cpf,CA[i].telefone,CA[i].cep );
                            printf("PRESSIONE CTRL+Z PARA ENCERRAR ");
                            scanf("%s%s%s",CA[i].estado,CA[i].cidade,&CA[i].bairro);
                            }


                            fclose(cfPtr);
                            printf("\n\n\t\t");
                            system("pause");
                            system("cls");
                            }
                            else{
                                printf("O PACIENTE NÃO FAZ PARTE DO GRUPO DE RISCO.");

                                printf("\n NOME DO PACIENTE: ");
                                fflush(stdin);
                                scanf("%[^\n]s",CA[i].nome);
                                printf("\n CPF DO PACIENTE: ");
                                fflush(stdin);
                                scanf("%[^\n]s",CA[i].cpf);
                                printf("\n TELEFONE DO PACIENTE: ");
                                fflush(stdin);
                                scanf("%[^\n]s",CA[i].telefone);
                                printf("\n CEP: ");
                                fflush(stdin);
                                scanf("%[^\n]s",CA[i].cep);
                                printf("\n NOME DA RUA: ");
                                fflush(stdin);
                                scanf("%[^\n]s",CA[i].rua);
                                printf("\n NÚMERO: ");
                                fflush(stdin);
                                scanf("%[^\n]s",CA[i].nrua);
                                printf("\n BAIRRO: ");
                                fflush(stdin);
                                scanf("%[^\n]s",CA[i].bairro);
                                printf("\n CIDADE: ");
                                fflush(stdin);
                                scanf("%[^\n]s",CA[i].cidade);
                                printf("\n ESTADO: ");
                                fflush(stdin);
                                scanf("%[^\n]s",CA[i].estado);

                                system("pause");
                                system("cls");
                            }

                        }
                        break;

                    case 2:
                    system("cls");
                    for (i=1;i<=qtd;i++)
                        {
                            system("cls");
                            printf("\n\n\t\t EXIBINDO CADASTRO DO PACIÊNTE\n\n");
                            printf("\n NOME DO PACIÊNTE: %s\n",CA[i].nome);
                            printf("\n CPF DO PACIÊNTE: %s\n",CA[i].cpf);
                            printf("\n TELEFONE DO PACIÊNTE: %s\n",CA[i].telefone);
                            printf("\n CEP: %s\n",CA[i].cep);
                            printf("\n NOME DA RUA: %s\n",CA[i].rua);
                            printf("\n NÚMERO: %s\n",CA[i].nrua);
                            printf("\n BAIRRO: %s\n",CA[i].bairro);
                            printf("\n CIDADE: %s\n",CA[i].cidade);
                            printf("\n ESTADO: %s\n",CA[i].estado);
                            system("pause");
                        }
                         break;

                    case 3:
                    system("cls");
                    printf("TRABALHO REALIZADO POR: \n\n");
                    printf("Lucas Spinelli Levi RA: \n");
                    system("pause");
                    break;

                    case 4:
                    system("cls");
                    printf("\n DESEJA SAIR DO SISTEMA? %s\n",usuario);
                    printf(" 1-SIM\n 2-NÃO");
                    printf("\n\n");
                    scanf("%d",&opcao2);

                    switch(opcao2)
                        {
                        case 1:
                            system("cls");
                            printf("\n\n ATÉ MAIS %s\n",usuario);
                            system("pause");
                            return(0);
                            break;
                        }
                    }
                }
                break;
            }

    return 0;
}
