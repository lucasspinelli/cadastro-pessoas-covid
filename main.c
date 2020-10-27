#include<stdio.h>
#include<stdlib.h>
#include<string.h> //Biblioteca para usar a funçao strcmp
#include<windows.h>
#include<conio.h>
#define SIZE 2000
/* Começo Matriz*/

char name[SIZE][50];
char email[SIZE][50];
int cpf[SIZE][11];
int birthDay[SIZE][2];
int birthMonth[SIZE][2];
int birthYear[SIZE][4];
int phoneNumber[SIZE][15];
char street[SIZE][50];
int streetNumber[SIZE][50];
char neighborhood[SIZE][50];
char city[SIZE][20];
char state[SIZE][5];
int cep[SIZE][10];
int diagnosisDay[SIZE][2];
int diagnosisMonth[SIZE][2];
int diagnosisYear[SIZE][4];
char comorbidity[SIZE][20];
char operation;

/*FIM MATRIZ*/

int main()
{
    /*VARIAVEIS*/
        char c;
        char login[20];
        char senha[20];
        int a=10;
        int i=0;
        int verifica_senha=0;
        int quantidade=0;
        int option = 1;
    /*FiM VARIAVEIS*/
       /*FUNÇÕES*/
       int read_option(){ // Ler opções do programa
            int x;
            printf("Menu Principal\n");
            printf("--------------\n");
            printf("1- Cadastrar Paciente\n");
            printf("2- Consultar Paciente\n");
            printf("3- Alterar Paciente\n");
            printf("4- Excluir Paciente\n");
            printf("5- Pesquisar Paciente (Nome/CPF)\n");
            printf("6- Ordenar Paciente - Alfabetica\n");
            printf("0- Sair do Programa\n");
            printf(">>> ");
            scanf("%d",&x);
            printf("\n");
            return x;
        }

        void pause(char mensagem[]){
            printf("%s",mensagem);
            getch();
        }

        void cadastro (){
            static int line;
            do {

                printf("Digite o Nome do Paciente\n: ");
                scanf (" %s", &name[line]);

                fflush(stdin);

                printf("Digite o Email do Paciente:\n ");
                scanf (" %s", &email[line]);

                fflush(stdin);

                printf("Digite o CPF do Paciente ( Somente Numeros )\n: ");
                scanf (" %d", &cpf[line]);

                fflush(stdin);

                printf("Qual Dia o Paciente nasceu?(DD):\n ");
                scanf (" %d", &birthDay[line]);

                fflush(stdin);

                printf("Qual Mes o Paciente nasceu?(MM):\n");
                scanf (" %d", &birthMonth[line]);

                fflush(stdin);

                printf("Qual Ano o Paciente nasceu?(AAAA):\n ");
                scanf (" %d", &birthYear[line]);

                fflush(stdin);

                printf("Digite o telefone do Paciente ( Somente Numeros ):\n");
                scanf (" %d", &phoneNumber[line]);

                fflush(stdin);

                printf("Digite a rua em que o Paciente mora:\n");
                scanf (" %s", &street[line]);

                fflush(stdin);

                printf("Qual o numero da rua?:\n");
                scanf (" %d", &streetNumber[line]);

                fflush(stdin);

                printf("Em qual bairro fica essa rua?:\n ");
                scanf (" %s", &neighborhood[line]);

                fflush(stdin);

                printf("Cidade do Paciente:\n");
                scanf (" %s", &city[line]);

                fflush(stdin);

                printf("Qual Estado o Paciente mora?:\n");
                scanf (" %s", &state[line]);

                fflush(stdin);

                printf("CEP do Paciente:\n ");
                scanf (" %d", &cep[line]);

                fflush(stdin);

                printf("Qual Dia do diagnostico?(DD):\n ");
                scanf (" %d", &diagnosisDay[line]);

                fflush(stdin);

                printf("Qual Mes do diagnostico?(MM):\n ");
                scanf (" %d", &diagnosisMonth[line]);

                fflush(stdin);

                printf("Qual Ano do diagnostico?(AAAA)\n: ");
                scanf (" %d", &diagnosisYear[line]);

                fflush(stdin);

                printf("O paciente tem alguma comorbidade? Se sim, qual?\n");
                scanf (" %s", &comorbidity[line]);
                printf("Digite 1 para cadastrar outro paciente, ou 0 para sair:\n  ");
                scanf (" %s", &operation);
                line++;

            } while(operation==1);
        }

        /*FIM FUNÇÕES*/
      while(verifica_senha==0){
       printf("\n\t\tCADASTRO DE PACIENTE\n\n login: ");
       //fflush(stdin);  //Limpando o buffer do teclado
       gets(login);
       printf("\n senha: ");
       while((c=getch())!=13){ //13 é o valor de ENTER na tabela ASCII
           senha[i]=c;
           i++;
           printf("*");      //imprime o * Anterisco
           }
          senha[i]='\0';
          i=0;
       system("cls");
       a= strcmp(senha,"chico"); //
       if(a==0){printf("SENHA CORRETA");system("color 0a");verifica_senha=1;Beep(1200,200);}
           else{printf("SENHA INCORRETA\n");system("color 0c");Beep(1500,2000);}
       printf("\n");

       }
       system("pause");
       system("color 0F");
       //read_option();

        while (option > 0 && option<=6)
    {
        system("CLS");
        puts("Trabalho PIM IV");
        puts("* Cadastro de Pacientes *\n");
        printf("%d Pacientes cadastrados\n\n",quantidade);

        option = read_option();


        if (option == 0){
            return 0;
        }
        system("CLS");
        switch (option)
        {
           case 1: // 1- Cadastrar Paciente
               cadastro();
             break;

           case 2: // 2- Consultar Paciente
             break;

           case 3:  // 3- Alterar Paciente
             break;

           case 4:  // 4- Excluir Paciente
             break;

           case 5:  // 5- Pesquisar Paciente
             break;

           case 6:  // 6- Ordernar Paciente Orderm Alfabética
             break;

           default:
                read_option();
            break;
        }
         pause("\nAperte Enter para voltar ao Menu Principal!");
    }
    return 0;
}
