#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<locale.h>

int verificaganhador(int jogador1escolha, int jogador2escolha){
	
		int resultado = 0;
	
			if(jogador1escolha == 1 && jogador2escolha == 1){
				
				resultado = 3;
				
			}else if(jogador1escolha == 2 && jogador2escolha == 2){
				
				resultado = 3;
					
			}else if(jogador1escolha == 3 && jogador2escolha == 3){
				
				resultado = 3;
				
			}else if(jogador1escolha == 1 && jogador2escolha == 3){
				
				resultado = 1;
				
			}else if(jogador1escolha == 2 && jogador2escolha == 1){
				
				resultado = 1;
				
			}else if(jogador1escolha == 3 && jogador2escolha == 2){
				
				resultado = 1;
				
			}else if(jogador2escolha == 1 && jogador1escolha == 3){
				
				resultado = 2;
				
			}else if(jogador2escolha == 2 && jogador1escolha == 1){
				
				resultado = 2;
				
			}else if(jogador2escolha == 3 && jogador1escolha == 2){
				
				resultado = 2;
				
			}
	
	return(resultado);
}

int main(void){
	
	setlocale(LC_ALL,"Portuguese");
	
	int e=4, mododejogo, jogador1escolha, jogador2escolha, maquina, resultado;
	
	do{
	
	printf("%c %c %c %c %c %c %c %c %c %c JOKEN-PÔ %c %c %c %c %c %c %c %c %c %c\n\n",e,e,e,e,e,e,e,e,e,e,e,e,e,e,e,e,e,e,e,e);
	
	printf("Escolha	o modo de jogo \n\n1-Jogador contra Jogador\n2-Jogador contra máquina\n3-Sair\n\n");
	scanf("%d",&mododejogo);

		if(mododejogo != 1 && mododejogo != 2 && mododejogo != 3){
		
			system("cls");
		
			printf("Opção inválida, por favor tente de novo");
		
			sleep(2);
		
		}
	
	system("cls");

	srand(time(NULL));

		switch(mododejogo){
		
			case 1:
	
				do{
					printf("%c %c %c %c %c %c %c %c %c %c Jogador 1 %c %c %c %c %c %c %c %c %c %c\n\n",e,e,e,e,e,e,e,e,e,e,e,e,e,e,e,e,e,e,e,e);
		
					printf("Escolha uma das opções\n\n1-Pedra\n2-Papel\n3-Tesoura\n\n");
					scanf("%d",&jogador1escolha);
					
						if(jogador1escolha != 1 && jogador1escolha != 2 && jogador1escolha != 3){
		
							system("cls");
		
							printf("Opção inválida, por favor tente de novo");
		
							sleep(2);
		
							system("cls");
					
						}
					
					system("cls");	
					
				}while(jogador1escolha != 1 && jogador1escolha != 2 && jogador1escolha != 3);
			
					sleep(1);
			
				do{
					printf("%c %c %c %c %c %c %c %c %c %c Jogador 2 %c %c %c %c %c %c %c %c %c %c\n\n",e,e,e,e,e,e,e,e,e,e,e,e,e,e,e,e,e,e,e,e);
		
					printf("Escolha uma das opções\n\n1-Pedra\n2-Papel\n3-Tesoura\n\n");
					scanf("%d",&jogador2escolha);
			
						if(jogador2escolha != 1 && jogador2escolha != 2 && jogador2escolha != 3){
		
							system("cls");
		
							printf("Opção inválida, por favor tente de novo");
		
							sleep(2);
		
							system("cls");
					
						}
					
					system("cls");
			
				}while(jogador2escolha != 1 && jogador2escolha != 2 && jogador2escolha != 3);
			
					sleep(1);
			
					resultado = verificaganhador(jogador1escolha, jogador2escolha);
				
				if(resultado == 1){
				
					printf("%c %c %c %c %c %c %c %c %c %c Jogador 1 Venceu %c %c %c %c %c %c %c %c %c %c\n\n",e,e,e,e,e,e,e,e,e,e,e,e,e,e,e,e,e,e,e,e);
				
				
				}else if(resultado == 2){
				
					printf("%c %c %c %c %c %c %c %c %c %c Jogador 2 Venceu %c %c %c %c %c %c %c %c %c %c\n\n",e,e,e,e,e,e,e,e,e,e,e,e,e,e,e,e,e,e,e,e);
				
				}else if(resultado == 3){
				
					printf("%c %c %c %c %c %c %c %c %c %c Empate %c %c %c %c %c %c %c %c %c %c\n\n",e,e,e,e,e,e,e,e,e,e,e,e,e,e,e,e,e,e,e,e);
				
				}
			
				printf("\n\n");

				system("pause");

				system("cls");
			
			break;
		
			case 2:
			
				do{
					printf("%c %c %c %c %c %c %c %c %c %c Jogador %c %c %c %c %c %c %c %c %c %c\n\n",e,e,e,e,e,e,e,e,e,e,e,e,e,e,e,e,e,e,e,e);
		
					printf("Escolha uma das opções\n\n1-Pedra\n2-Papel\n3-Tesoura\n\n");
					scanf("%d",&jogador1escolha);
			
					system("cls");
			
				}while(jogador1escolha != 1 && jogador1escolha != 2 && jogador1escolha != 3);;
			
				sleep(1);
			
				maquina = 1 + rand() % 3;
			
				resultado = verificaganhador(jogador1escolha, maquina);
			
				if(resultado == 1){
				
					printf("%c %c %c %c %c %c %c %c %c %c Jogador Venceu %c %c %c %c %c %c %c %c %c %c\n\n",e,e,e,e,e,e,e,e,e,e,e,e,e,e,e,e,e,e,e,e);
				
				}else if(resultado == 2){
				
					printf("%c %c %c %c %c %c %c %c %c %c Máquina Venceu %c %c %c %c %c %c %c %c %c %c\n\n",e,e,e,e,e,e,e,e,e,e,e,e,e,e,e,e,e,e,e,e);
				
				}else if(resultado == 3){
				
					printf("%c %c %c %c %c %c %c %c %c %c Empate %c %c %c %c %c %c %c %c %c %c\n\n",e,e,e,e,e,e,e,e,e,e,e,e,e,e,e,e,e,e,e,e);
					
				}
			
				if(maquina == 1){
				
					printf("A Máquina escolheu: Pedra\n\n");
				
				}else if(maquina == 2){
				
					printf("A Máquina escolheu: Papel\n\n");
				
				}else if(maquina == 3){
				
					printf("A Máquina escolheu: Tesoura\n\n");
				
				}
			
				printf("\n\n");

				system("pause");

				system("cls");
		
			break;	
			
		
			
			case 3:
			
				printf("Obrigado por jogar, volte sempre");
				return(0);
		
			break;
		
			printf("\n\n");

			system("pause");

			system("cls");
		}
	
}while(1);

}
