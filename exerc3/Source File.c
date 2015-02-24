//==============================================================================
//
// Title:		Source File.c
// Purpose:		A short description of the implementation.
//
// Created on:	12/15/14 at 6:37:28 PM by Abílio Azevedo.
// Copyright:	. All Rights Reserved.
//
//==============================================================================

//==============================================================================
// Include files

//#include "Source File.h"

//==============================================================================
// Constants

//==============================================================================
// Types

//==============================================================================
// Static global variables

//==============================================================================
// Static functions

//==============================================================================
// Global variables

//==============================================================================
// Global functions

/// HIFN  What does your function do?
/// HIPAR x/What inputs does your function expect?
/// HIRET What does your function return?

#include <utility.h>
#include <ansi_c.h>
#include <cvirte.h>

int main ()
{
	int pretas, oldPretas;
	int brancas, oldBrancas;
	int check;
	int check1 = 2;
	while(check1 == 2){
		check = 1;
		while(check){
			Cls();
			printf("Vamos Jogar!\n"); 
			printf("Digite o número de bolas pretas: "); 
			if(scanf("%d", &pretas) && pretas>0)
				check=0;
			getchar();
		}
		check = 1;
		while(check){
			Cls();
			printf("Vamos Jogar!\n"); 
			printf("Digite o número de bolas pretas: %d\n", pretas); 
			printf("Digite o número de bolas brancas: "); 
			if(scanf("%d", &brancas) && brancas>0)
				check=0;
			getchar();
		}
		oldPretas=pretas;
		oldBrancas=brancas;
		int w=1;
		int melhor=0;
		do{	
			for(int z=0; z<w;z++){ 
				pretas=oldPretas;
				brancas=oldBrancas;
				while(brancas!=0&&pretas!=0){
					int a = rand() % 2;
					int b = rand() % 2;
					if(a==b){ //Cores iguais
						pretas--;		         //Retirar uma preta
						//printf("Tirar preta\n"); 
					}
					else{					 //Cores diferentes
						brancas--;     			 //Retirar uma branca
						//printf("Tirar branca\n"); 
					}
				}
				if(pretas==0){
					printf("\nA ultima bola é Branca\n");
					melhor++;
				}
				else{
					printf("\nA ultima bola é Preta\n");
					melhor--;
				}
			}
			if(melhor<0)
				printf("\nA bola que mais saiu foi a Preta\n");               
			else if(melhor>0)
				printf("\nA bola que mais saiu foi a Branca\n");    
			else
				printf("\nNão houve bola que mais saiu\n"); 
			
			printf("\nDeseja repetir com os mesmos valores? Digite 1\n");
			printf("Deseja repetir com novos valores? Digite 2\n");
			printf("Deseja repetir 1000 vezes com os mesmos valores? Digite 3\n"); 
			printf("Deseja sair? Digite qualquer tecla\n");  
			
			if(scanf("%d", &check1)&&(check1==1||check1==2||check1==3)){
				getchar();
				w=1;
			}else{
				check1=4;
			}
			if(check1==3){
				w=1000;
				check1=1;
			}
			
		} while (check1==1);            
	}
	return 0;
}
