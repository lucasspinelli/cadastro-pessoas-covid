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

                printf("\nDigite o Nome do Paciente: ");
                scanf ("%s", &name[line]);
                printf("\nDigite o Email do Paciente: ");
                scanf ("%s", &email[line]);
                printf("\nDigite o CPF do Paciente ( Somente Numeros ): ");
                scanf ("%d", &cpf[line]);
                printf("\nQual Dia o Paciente nasceu?(DD): ");
                scanf ("%d", &birthDay[line]);
                printf("\nQual Mes o Paciente nasceu?(MM): ");
                scanf ("%d", &birthMonth[line]);
                printf("\nQual Ano o Paciente nasceu?(AAAA): ");
                scanf ("%d", &birthYear[line]);
                printf("\nDigite o telefone do Paciente ( Somente Numeros ):");
                scanf ("%d", &phoneNumber[line]);
                printf("\nDigite a rua em que o Paciente mora: ");
                scanf ("%s", &street[line]);
                system("pause");
                printf("\nQual o numero da rua?: ");
                scanf ("%d", &streetNumber[line]);
                printf("\nEm qual bairro fica essa rua?: ");
                scanf ("%s", &neighborhood[line]);
                printf("\nCidade do Paciente: ");
                scanf ("%s", &city[line]);
                printf("\nQual Estado o Paciente mora? : ");
                scanf ("%s", &state[line]);
                system("pause");
                printf("\nCEP do Paciente: ");
                scanf ("%d", &cep[line]);
                system("pause");
                printf("\nQual Dia do diagnostico?(DD): ");
                scanf ("%d", &diagnosisDay[line]);
                system("pause");
                printf("\nQual Mes do diagnostico?(MM): ");
                scanf ("%d", &diagnosisMonth[line]);
                printf("\nQual Ano do diagnostico?(AAAA): ");
                scanf ("%d", &diagnosisYear[line]);
                system("pause");
                printf("\n O paciente tem alguma comorbidade?");
                scanf ("%s", &comorbidity[line]);
                system("pause");
                printf("\n Digite 1 para cadastrar outro paciente, ou 0 para sair:  ");
                scanf ("%s", &operation);
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
       if(a==0){printf("SENHA CORRETA");system("color 0a");verifica_senha=1;Beep(1500,2000);}
           else{printf("SENHA INCORRETA\n");system("color 0c");Beep(1200,200);}
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
