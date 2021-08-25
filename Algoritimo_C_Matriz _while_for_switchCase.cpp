//Algoritimo_C_Matriz _while_for_switchCase
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>
#define LINHA 4//semana
#define COLUNA 6//dia
//**********************************************************************************
//prototipação de funções
int preenche(int matrizA[LINHA][COLUNA]);
float somaMedia(int matrizA[LINHA][COLUNA]);
float exibir(int matrizA[LINHA][COLUNA]);
int k = -1;
//corpo principal*******************************************************************
int main (){
	int i, opcao;
	setlocale(LC_ALL, "portuguese");
	system("cls");
	int matrizA[LINHA][COLUNA];
	//float somaMedia(int matrizA[LINHA][COLUNA]) = 0;
	do{
		//Menu***********************************************************************
		system("cls");	
			for (i=0;i<40;i++)printf("-_");
		printf("\n           ==== Alexandre veiculos_ Loja 01_ BH ==== \n");
		printf("                      CONTROLE DE VENDA_ JULHO 2019\n");
		printf("\n\t\t******************************");
		printf("\n\t\t1 - Preencher Vendas do mês");
		printf("\n\t\t2 - Exibir vendas");
		printf("\n\t\t3 - Media de vendas");
		printf("\n\t\t4 - Sair");
		printf("\n\t\t******************************\n");
		printf("\n\t\tEscolha uma opção: ");
		scanf("%d", &opcao);
		//***************************************************************************
			switch(opcao){
				case 1:
					preenche(matrizA);
					break;
				case 2:
					exibir(matrizA);
					break;
				case 3:
					system("cls");
						for (i=0;i<40;i++)printf("-_");
					printf("\n\nMedia das vendas = R$ %.2f\n\n", somaMedia(matrizA));
						for (i=0;i<40;i++)printf("-_");
						printf("\n");
							system("Pause");
					break;
				case 4:
					break;
				default:
			printf("\n\nSAINDO");}	
			}while(opcao!=4);
			system("cls");
			printf("\n           ==== Alexandre veiculos_ Loja 01_ BH ==== \n");
			printf("                      CONTROLE DE VENDA_ JULHO 2019\n");
			printf("\n\n");
			printf("              __/_,___              __/_,___      __/_,___ \n");
		    printf("              `-O---O´              `-O---O´      `-O---O´   \n");	
			
			for (i=0;i<40;i++)printf("-_");
			printf("\nSaindo......\n");
			
		system("Pause");
	return 0;
}
//Função preencher*****************************************************************
int preenche(int matrizA[LINHA][COLUNA]){
	int i,j;
	system("cls");
	for(i=0; i<LINHA; i++){
		for(j=0; j<COLUNA; j++){
			printf("\n\n\tInforme o valor das vendas do %d° dia da Semana %d, de Julho, :R$ ", j+1, i+1);
			scanf("%d", &matrizA[i][j]);
			system("cls");
		}	
	}
}
//Função exibir**********************************************************************
float exibir(int matrizA[LINHA][COLUNA]){
		int i,j;
	system("cls");
	if(k == 0) {
		printf("Lista Vazia!!!");
	
	}else{
		printf(" \n\n");
		for(i=0; i<LINHA; i++){
			for(j=0; j<COLUNA; j++)
			printf("\n\n\t%d° Dia da Semana %d, o valor das vendas foi de:R$%d,00",j+1, i+1, matrizA[i][j]);
		}	
		printf("\n");
	
	}
		system("Pause");
}
//Função media************************************************************************
float somaMedia(int matrizA[LINHA][COLUNA]){
	int i,j,k;
	k=0;
	float soma = 0;
	for(i=0; i<LINHA; i++){
		for(j=0; j<COLUNA; j++){
			soma = soma + matrizA[i][j];
			k++;
		}	
	}
	float media = soma/k;
	return media;
}
//**********************************************************************************
