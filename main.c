#include<stdio.h>
#include<stdlib.h>
#include<string.h> //Biblioteca para usar a funçao strcmp
#include<windows.h>
#include<conio.h>

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
    /*FUM VARIAVEIS*/
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
               printf("o Chico e gay 1\n");
             break;

           case 2: // 2- Consultar Paciente
                 printf("o Chico e gay 2\n");
             break;

           case 3:  // 3- Alterar Paciente
                 printf("o Chico e gay 3\n");
             break;

           case 4:  // 4- Excluir Paciente
                 printf("o Chico e gay 4\n");
             break;

           case 5:  // 5- Pesquisar Paciente
                  printf("o Chico e gay 5\n");
             break;

           case 6:  // 6- Ordernar Paciente Orderm Alfabética
                  printf("o Chico e gay 6\n");
             break;

           default:
                read_option();
            break;
        }
         pause("\nAperte Enter para voltar ao Menu Principal!");
    }
    return 0;
}
