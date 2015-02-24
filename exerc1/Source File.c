//==============================================================================
//
// Title:		Source File.c
// Purpose:		A short description of the implementation.
//
// Created on:	12/15/14 at 4:46:48 PM by Abílio Azevedo.
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

double fatorial(int numero);

int main ()
{
	int check=1, n;
	double e=0;
	while(check){
		Cls();
		printf("Vamos calcular o número de Euler\n");
		printf("usando série 1/n!\n");
		printf("Digite o número n (precisão da série)\n");  
		if(scanf("%d", &n)&&n>0)
			check=0;
		getchar(); 
	}
	for(int x=0;x<n; x++){
			
		e=e+(1/fatorial(x));
	}
	printf("Número de Euler: e=%lf\n", e);
	GetKey();
	
	return 0;
}   
double fatorial(int numero){

	double resultado;

	if(numero !=0)
		resultado = numero;
	else
		resultado = 1;

	while(numero>1){
		resultado = resultado*(numero-1);
		numero--;
	}

	return resultado;
}
