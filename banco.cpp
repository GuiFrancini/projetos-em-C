






#include <stdio.h>
#include <ctype.h>
#include <Windows.h>
#include <stdlib.h>

//sessao de prototipacao
void verlogin();
void versenha();
void versaldo();

//variaveis globais todas as funções veem ela
char user ='A';
int senha =123;
int cont = 0;

main()
{
 
 puts("Bem vindo ao Euro Bank!!");
 verlogin();
  
 
}// fim do programa


void verlogin()
{
    int id = ' ';
    puts("insira seu cartao!");
	printf("ID:");
 	scanf("%c ", &id);
 	
	if(id== user)
    	versenha();
    else{
        puts("Cartao clonado! \n entre denovo!");
        exit(0);
    }
    
}

void versenha()
{
	
    int password = 0;
    printf("Digite a senha: ");
    scanf("%d", &password);

    if(senha == password){
    puts("Logado com sucesso");
    versaldo();
}
    else
    {
    	puts("senha invalida");
    	cont++;
        if(cont <10)
    	    versenha();
    	
    	else{
        Sleep(2000);
    	puts("usuario preso! aguarde a Policia Federal na sua casa");
        exit(0); 
		}
		
	
    }
}

void versaldo()
{
	puts("seu saldo é 1,00");
	exit(0);
}