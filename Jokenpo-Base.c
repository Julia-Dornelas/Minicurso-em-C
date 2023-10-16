#include<stdio.h>
#include<stdlib.h>

int main(void){
	//variaveis
	int opcUsuario, opcCPU;
	
	//titulo
	printf("   JOKENPO   \n\n");
	
	//Opcoes
	printf("1. Pedra\n");
	printf("2. Papel\n");
	printf("3. Tesouro\n\n");
	printf("Digite sua opcao: ");
	
	//guarda valor digitado pelo usuario na variavel
	scanf("%d", &opcUsuario);
	
	//Função para retornar sempre um numero diferente
	srand(time(NULL));
	
	//quarda valor fornecido pela função na variavel
	opcCPU = rand() % 4;
	
	//mostra valor escolhido pelo computador para o usuario
	switch(opcCPU){
		case 1:
			printf("\nCPU escolheu Pedra!");
			break;
		case 2:
			printf("\nCPU escolheu Papel!");
			break;
		case 3:
			printf("\nCPU escolheu Tesoura!");
			break;
	}
	
	//verifica quem ganhou
	if(opcCPU == opcUsuario){
		printf("\nEmpate!");
	}
	else if(opcCPU == 1 && opcUsuario == 3 || opcCPU == 2 && opcUsuario == 1 || opcCPU == 3 && opcUsuario == 2){ //CPU ganhou
		printf("\nComputador ganhou!");
	}
	else if(opcUsuario == 1 && opcCPU == 3 || opcUsuario == 2 && opcCPU == 1 || opcUsuario == 3 && opcCPU == 2){ //Jogador ganhou
		printf("\nVoce ganhou!");
	}
}
