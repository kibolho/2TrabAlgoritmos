//==============================================================================
//
// Title:		Source File.c
// Purpose:		A short description of the implementation.
//
// Created on:	12/15/14 at 6:06:15 PM by Abílio Azevedo.
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

double soma(int numero); 

int main ()
{
	int check=1, n;
	int coelhos =1;
	int a=0;  //numero predecessor
	int b=1;  //numero antecessor
	while(check){
		Cls();
		printf("Série de Fibonacci\n");
		printf("Um par de coelho gera outro par no segundo mes de vida\n");
		printf("Vamos calcular o número de pares de coelhos!\n");
		printf("Digite o número de meses: \n");  
		if(scanf("%d", &n)&&n>0)
			check=0;
		getchar(); 
	}

	for(int i = 0; i < n; i++)
  	{
    	coelhos = a + b;	//Fx=Fx-1+Fx-2
    	a = b;		  //Guarda o predecessor (Fx-2)
    	b = coelhos;  //Guarda o antecessor  (Fx-1)
	}
	
	printf("Número de Par de Coelhos após %d meses é %d\n", n, coelhos);
	GetKey();
	return 0;
}
