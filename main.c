#include <stdio.h>
#include <stdlib.h>

int main()
{   char login[15]; //Tem que ter mais espaço que a string. Pelo menos 1 a mais que a palavra.
    char login1[15]; //Pode ser do mesmo tamanho que o login
    char senha[15];
    char senha1[15];

    printf("Bem vindo ao sistema de Cadastro de Pacientes\n");
    printf("Por favor defina seu User para Login: \n");
    scanf("%s", login);
    printf("Por favor defina uma Senha: \n");
    scanf("%s", senha);
    system("cls");
    printf("Para logar, por favor, entre com as credenciais cadastradas\n");
    printf("------------------------------------------------------------\n");
    printf("LOGIN: ");
    scanf("%s",login1); //String se lê com %s
    printf("SENHA: ");
    scanf("%s", senha1);
    if (strcmp(login, login1) == 0 && strcmp(senha, senha1) == 0) //strcmp() é uma função da biblioteca string.h que compara 2 strings. Se for igual a 0 é porque as duas são iguais.
    {
    	printf("Logado\n");
    }
    else
    {
    	printf("error\n");
    }
}
