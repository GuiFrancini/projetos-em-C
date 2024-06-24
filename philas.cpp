/*name pilha.cpp
author: guilherme francini de oliveira
date: 10/04/2024 9:54
description: programa par demonstrar o algoritmo da pilha LIFO
*/

#include <conio.h>
#include <stdio.h>
#include <windows.h>


//sessao de prototipação
void push(int);
int pop();
int isfull();
int isempty();
void listarpilha();
void top();
void conversorbinario();
void exibirbinario();
void top();

//variaveis globais
int pilha[10];
int topo = -1;

main()
{

	
	int menu;
	while (1)
	{
		system("cls");
		printf(" 1-inserir\n 2-retirar\n 3-exibir lista\n 4-conversor binario \n 5-sair");
		scanf("%d", &menu);
		
		switch(menu)
		{
		
		case 1:
			int espectro;
			espectro =0; //variavel que recebera o elemento a ser incluido na pilha
			printf("digite o elemento:");
			scanf("%d", &espectro);
			push(espectro);
			break;
			
			case 2:
				pop();
				break;
				
			case 3: 
				listarpilha();
				break;
				
			case 4:
				puts("\n conversoor de binario");
				conversorbinario();
				break;
					
			case 5:
				exit(0);
				default: puts ("opcaio invalidar");
		}
	}//fim dos switch...case
	
	puts("preessione qualquer tecla");
}//fim do main

//função que insere um elemento na pilha
void push(int elem)
{
	if(isfull()==1)
	puts("a pilha esta cheia - stack over flow");
	else
	{
		topo++;
		pilha[topo] = elem;
	}
	
}

//funçaõ que retira um elemento
int pop()
{
	if(isempty() ==1)
	puts("---> a pilha da vazia stack is empty!");
	else
	{
		int elemento;
		elemento=pilha[topo];
	    topo--;
	    return elemento;
	    //return pilha[topo--];
	}
}

//função que testa se a pilha esta cheia
int isfull()
{
 if (topo==10)
 return 1;
 else
 return 0;	
}

//função que testa se a pilha esta vazia
int isempty ()
{
	if(topo==-1)
	return 1;
	else 
	return 0;
}
//função que exibe todo o conteudo da pilha
void listarpilha()
{
	puts("contenido da pilha");
	
	if(isempty()==1)
	puts("pilha vazia");
	else
	for(int i =0; i<= topo;i++)
	printf("%d ",pilha[i]);
}

//função que retorna um elemento que esta no topo da pilha
/*int top()
{
	return pilha[topo];
}
*/
//função que converte um numero na base decima para base binaria
void coversorbinario(){
	int num, quoc, resto;
	num=quoc=resto=0;
	
	printf("digite um numero da base decimal");
	scanf("%d", &num);
	
	while (num>=2)
	{
		quoc=num/2;
		resto=num(quoc*2);
		push(resto);
		num =quoc;
	}
	
	exibirbinario();
}

	void exibirbinario()
	{
		puts("equivalente a binario:");
		if(isempty()==0)
		{
			printf("%d", push());
		}
		
	}
