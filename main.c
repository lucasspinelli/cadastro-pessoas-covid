#include<stdio.h>
#include<stdlib.h>
#include<string.h> //Biblioteca para usar a fun�ao strcmp
#include<windows.h>
#include<conio.h> //biblioteca para fazer o Beep
#include <locale.h> // Biblioteca para salvar arquivos


int main(void){
    /*VARIAVEIS*/
        FILE *risco; //Var para arquivos Grupo de risco
        FILE *pacientesDB; // Var para arquivos DB

        int opcao,opcao1,opcao2,opcao3,opcao4, opcaom,i,qtd; // Vari�veis de controle


    struct paciente // Lista Paciente
    {
        char nome[100],cpf[30],telefone[15],rua[50],
        nrua[4],bairro[50],cidade[50],estado[50],cep[20],email[30], data[15];
    } // Fim lista Paciente
    //Inicio MAtriz
    CA[600];
    CA[600];
    CA[600];
    CA[600];
    CA[600];
    CA[600];
    CA[600];
    CA[600];
    CA[600];
    //Fim matriz
    //V�ri�veis Globais
        char usuario[100]; //Vari�vel que guarda o nome do usu�rio
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
    //Fim vari�veis globais
    // Come�o Login
        while(verifica_senha==0){
       printf("\n\t\tCADASTRO DE PACIENTE\n\n login: ");
       //fflush(stdin);  //Limpando o buffer do teclado
       gets(usuario);
       printf("\n senha: ");
       while((c=getch())!=13){ //13 � o valor de ENTER na tabela ASCII
           senha[p]=c;
           p++;
           printf("*");      //imprime o * Anterisco
           }
          senha[p]='\0';
          p=0;
       system("cls");
       a= strcmp(senha,"chico"); //
       if(a==0){
            printf("SENHA CORRETA");
            system("color 0a");
            verifica_senha=1;
            Beep(1200,200);
        }
           else {
                printf("SENHA INCORRETA\n");
                system("color 0c");Beep(1500,2000);
           }
       printf("\n");

       }
       system("pause");
       system("color 0F");
       //read_option();
       //Fim Login

                while(opcao != 6)
            {
                while(opcao2 != 1)
                {
                    system("color f9"); //mundando fundo e cor do sistema
                    system("cls");

                    //come�o menu
                    printf("---------------------------------------\n");
                    printf("\t Seja Bem Vindo(a) %s\n",usuario);
                    printf("---------------------------------------\n");
                    printf(" 1- CADASTRAR PACIENTE\n ");
                    printf("2- EXIBIR DADOS DO PACIENTE CADASTRADOS NESSA SESS�O\n ");
                    printf("3- INFORMA��ES DO SISTEMA\n ");
                    printf("4- SAIR\n ");
                    printf("---------------------------------------\n\n");
                    printf("\nESCOLHA UMA OP��O: ");
                    scanf("%d",&opcao);

                    switch(opcao)
                    //fim menu
                    {
                    case 1:
                        system("cls");
                        printf("\n\n QUANTOS CADASTROS DESEJA FAZER: "); // Controle de buffer
                        scanf("%d",&qtd);

                    for (i=1;i<=qtd;i++) //la�o de repeti��o do controle
                        {

                            int ano, idade;
                            char morbidade;
                            int anoatual = 2020;



                            risco = fopen("pacientes-risco.txt","a"); //Arquivo Paciente de Riisco
                            pacientesDB = fopen("pacientes-db.txt", "a"); // Arquivo Paciente Geral
                            system("cls");
                            printf("\n\n\t\t\t  INICIANDO CADASTRO %d\n",i);
                            printf("\t\t\t  ----------------\n\n");
                            //Come�o Valida��o idade
                            printf("\nDigite o ano de nascimento do paciente: ");
                            scanf("%d",&ano);
                            idade = anoatual - ano;
                            printf("O PACIENTE TEM %d ANOS \n",idade);
                            //Fim Valida��o de Idade

                            //Cpme�o Cadastro
                            printf("\n NOME DO PACIENTE: ");
                            fflush(stdin);
                            scanf("%[^\n]s",CA[i].nome);
                            printf("\n CPF DO PACIENTE: ");
                            fflush(stdin);
                            scanf("%[^\n]s",CA[i].cpf);
                            printf("\n TELEFONE DO PACIENTE: ");
                            fflush(stdin);
                            scanf("%[^\n]s",CA[i].telefone);
                            printf("\n EMAIL DO PACIENTE: ");
                            fflush(stdin);
                            scanf("%[^\n]s",CA[i].email);
                            printf("\n CEP: ");
                            fflush(stdin);
                            scanf("%[^\n]s",CA[i].cep);
                            printf("\n NOME DA RUA: ");
                            fflush(stdin);
                            scanf("%[^\n]s",CA[i].rua);
                            printf("\n N�MERO: ");
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
                            printf("\n DATA DO DIAGNOSTICO: ");
                            fflush(stdin);
                            scanf("%[^\n]s",CA[i].data);
                            //Fim cadastro

                            printf("\n O PACIENTE TEM ALGUMA COMORBIDADE?\n 1 - SIM \n 2 - N�O  \n");
                            scanf("%d",&opcaom);
                            if (opcaom == 1){
                                printf("\n Qual sua morbidade?  ");
                                scanf("%s",&morbidade);
                            }

                            if(idade >= 65  || opcaom == 1 ){ // Come�o Salvando Dados Grupo de risco
                                printf("O PACIENTE FAZ PARTE DO GRUPO DE RISCO.");
                                while(!feof(stdin) && i<=qtd){
                                    fprintf(risco, "\n NOME DO PACIENTE: %s\n CPF: %s\n TELEFONE: %s\n CEP: %s\n IDADE: %d\n", CA[i].nome, CA[i].cpf,CA[i].telefone,CA[i].cep, idade );
                                    fprintf(pacientesDB, "\n NOME DO PACIENTE: %s\n CPF: %s\n TELEFONE: %s\n CEP: \n EMAIL: %s\n DATA DO DIAGNOSTICO: %s\n IDADE: %d\n ", CA[i].nome, CA[i].cpf,CA[i].telefone,CA[i].cep, CA[i].email,CA[i].data, idade ); // Colocamos no arquivo normal tamb�m
                                    printf("PRESSIONE CTRL+Z PARA ENCERRAR ");
                                    scanf("%s%s%s",CA[i].estado,CA[i].cidade,&CA[i].bairro);
                            }

                            fclose(pacientesDB);
                            fclose(risco);
                            printf("\n\n");
                            system("pause");
                            system("cls");
                            }
                            //Fim salvando dados Grupo de risco
                            //Come�o salvando dados gerais
                            else {
                                printf("O PACIENTE N�O FAZ PARTE DO GRUPO DE RISCO.");
                                 while(!feof(stdin) && i<=qtd){
                                    fprintf(pacientesDB, "\n NOME DO PACIENTE: %s\n CPF: %s\n TELEFONE: %s\n CEP: \n EMAIL: %s\n DATA DO DIAGNOSTICO: %s\n IDADE: %d\n ", CA[i].nome, CA[i].cpf,CA[i].telefone,CA[i].cep, CA[i].email,CA[i].data, idade );
                                    printf("PRESSIONE CTRL+Z PARA ENCERRAR ");
                                    scanf("%s%s%s",CA[i].estado,CA[i].cidade,&CA[i].bairro);
                            }

                                fclose(pacientesDB);
                                system("pause");
                                system("cls");
                            }
                            //fim dados ferais

                        }
                        break;

                    case 2:
                    system("cls");
                    for (i=1;i<=qtd;i++)
                        {
                            system("cls");
                            printf("\n\n\t\t EXIBINDO CADASTRO DO PACIENTE\n\n");
                            printf("\n\n\t\t PARA EXIBIR O PR�XIMO TECLE ENTER\n\n");
                            printf("\n NOME DO PACIENTE: %s\n",CA[i].nome);
                            printf("\n CPF DO PACIENTE: %s\n",CA[i].cpf);
                            printf("\n TELEFONE DO PACI�NTE: %s\n",CA[i].telefone);
                            printf("\n EMAIL DO PACI�NTE: %s\n",CA[i].email);
                            printf("\n CEP: %s\n",CA[i].cep);
                            printf("\n NOME DA RUA: %s\n",CA[i].rua);
                            printf("\n N�MERO: %s\n",CA[i].nrua);
                            printf("\n BAIRRO: %s\n",CA[i].bairro);
                            printf("\n CIDADE: %s\n",CA[i].cidade);
                            printf("\n ESTADO: %s\n",CA[i].estado);
                            printf("\n DATA DO DIAGNOSTICO: %s\n",CA[i].data);
                            system("pause"); // N�o deixamos exibir todos os dados para o programa n�o bugar
                        }
                         break;

                    case 3: // Informa��es das pessoas do trabalho
                    system("cls");
                    printf("ESSE SISTEMA FOI FEITO POR: \n\n");
                    printf("Lucas Spinelli Levi \n");
                    system("pause");
                    break;

                    case 4:
                    system("cls");
                    printf("\n DESEJA SAIR? %s\n",usuario); //valida��o de seguran�a, caso tenha clicado em 4 sem querer
                    printf(" 1-SIM\n 2-N�O");
                    printf("\n\n");
                    scanf("%d",&opcao2);

                    switch(opcao2)
                        {
                        case 1:
                            system("cls");
                            printf("\n\n NOS VEMOS EM BREVE %s\n",usuario);
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
