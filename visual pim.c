#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <locale.h>
#include <string.h>
#define MAXINGRE 50


void cabecalho(){
        printf("****************************************************************************\n");
        printf("*********  BEM VINDO AO FESTIVAL DE TEATRO DE FINAL DE ANO - 2019  *********\n");
        printf("****************************************************************************\n");
        }

void diaApresentacao(){
               
        printf("\nESCOLHA O DIA DA APRESENTAÇÃO\n");
        printf("*Digite o dia e aperte a tecla Enter*\n\n");
        
        printf("---- DEZEMBRO 2019 ----\n");
        printf("SEG  TER  QAR  QUI  SEX\n");
        printf("--   --   --   --   1  \n");
        printf("4    5    6    7    8  \n");
        printf("11   12   13   14   15 \n");
        printf("18   19   20   21   22 \n");
        printf("--   26   27   28   29 \n");
        
            
}
int main ()
{
	int ingresso;
	int valorIngresso = 20;
	int menu;
	int confirma;
	int idade;
	int caixa = 0;
	int vendidasMeia = 0;
	int vendidasInt = 0;
	char psswrd[] = "bolinho";
	char psswrd2[10];
	int psswrdteste;
    int dia;
    int cortesia = 0;
	
	cabecalho();
	
		
	for (ingresso = MAXINGRE ; ingresso >= 1 ; ingresso = ingresso--) {
		
		setlocale(LC_ALL, "Portuguese");

		printf("\nTemos %d ingressos disponíveis para a apresentação de hoje.\n", ingresso);
		printf("Por favor selecione o tipo de ingresso que você deseja: \n 1. Meia entrada estudante e professor. \n");
		printf(" 2. Meia entrada idoso. \n 3. Meia entrada para crianças entre 2 e 12 anos. \n");
		printf(" 4. Cortesia estudantes carentes escola pública. (Somente às terças-feiras.)\n");
		printf(" 5. Inteira convencional. \n 6. Administrador.\n\n");
		scanf("%d", &menu);
		
		switch (menu) {
			
			case 1 : //Meia entrada estudante e professor
				diaApresentacao();
                scanf("%d", &dia);
				printf("Pressione 1 para confirmar ou qualquer outra tecla para voltar. \n\n");
				printf("O total da sua compra é R$ %d,00.\n", valorIngresso/2);
				scanf("%d", &confirma);
					if (confirma == 1) {
						
						printf("\n\n*********************\n");
						printf("****** VOUCHER ******\n");
						printf("Apresentação De Teatro\n");
						printf("Dia: %d \n", dia);
						printf("Poltrona: %d \n", ingresso);
						printf("Valor Total: R$ %d,00\n", valorIngresso/2);
						printf("*********************\n");
						system ("pause");
						
						ingresso--;
						vendidasMeia++;
						(caixa = caixa + valorIngresso/2);
						}
						else (confirma != 1);
						system ("pause");
						break;
			
			case 2 : //Meia entrada idoso
				printf("Por favor, digite sua idade.  \n");
				scanf("%d", &idade);
				if (idade > 0 && idade >= 60) {
					printf("Usuário elegível para meia entrada! Por favor tenha em mãos um documento com foto. \n");
					printf("O total da sua compra é R$ %d,00.\n", valorIngresso/2);
                    diaApresentacao();
                    scanf("%d", &dia);
					printf("Pressione 1 para confirmar ou qualquer outra tecla para voltar. \n\n");
					scanf("%d", &confirma);
						if (confirma == 1) {
							
							printf("\n\n*********************\n");
							printf("****** VOUCHER ******\n");
							printf("Apresentação De Teatro\n");
							printf("Dia: %d \n", dia);
							printf("Poltrona: %d \n", ingresso);
							printf("Valor Total: R$ %d,00\n", valorIngresso/2);
							printf("*********************\n");
							system ("pause");
							
						--ingresso;
						vendidasMeia++;
						(caixa = caixa + valorIngresso/2);
						}						
				}
				else {
					printf("Sentimos muito, mas a meia entrada idoso só é válida para pessoas com mais de 60 anos. Agradecemos a compreenssão. \n");
					system ("pause");
                }
				break;
				
			case 3 : //Meia entrada para crianças entre 2 e 12 anos
				printf("Por favor, digite a idade.  \n");
				scanf("%d", &idade);
				if (idade > 0 && idade <= 12) {
					printf("Você tem direito a meia entrada! Por favor tenha em mãos sua carteirinha de estudante. \n");
					diaApresentacao();
					scanf("%d", &dia);
					printf("O total da sua compra é R$ %d,00.\n", valorIngresso/2);
                    printf("Pressione 1 para confirmar ou qualquer outra tecla para voltar. \n\n");
					scanf("%d", &confirma);
						if (confirma == 1) {
							
							printf("\n\n*********************\n");
							printf("****** VOUCHER ******\n");
							printf("Apresentação De Teatro\n");
							printf("Dia: %d \n", dia);
							printf("Poltrona: %d \n", ingresso);
							printf("Valor Total: R$ %d,00\n", valorIngresso/2);
							printf("\n*********************\n");
							system ("pause");

						--ingresso;
						vendidasMeia++;
						(caixa = caixa + valorIngresso/2);
					}
				}
				else {
					printf("Sentimos muito, mas a meia entrada infantil só é válida para crianças entre 02 e 12 anos. Agradecemos a compreenssão. \n");
					system ("pause");
                }
				break;
				
				break;

			case 4 : //Cortesia estudantes carentes escola pública. (Somente às terças-ferias).
                        printf("O Festival de Teatro de final de ano é uma iniciativa que busca compartilhar cultura.");
                        printf("Sendo assim, estudantes da rede pública tem isenção na entrada às terças. Aproveite e chame os amigos!");
                        diaApresentacao();
                        scanf("%d", &dia);

                        if (dia == 5 || dia == 12 || dia == 19 || dia == 26);
                        {
                            valorIngresso = valorIngresso - valorIngresso;
                            
                            printf("\n\n*********************\n");
							printf("****** VOUCHER ******\n");
							printf("Apresentação De Teatro\n");
							printf("Dia: %d \n", dia);
							printf("Poltrona: %d \n", ingresso);
							printf("Valor Total: CORTESIA\n");
							printf("\n*********************\n");
							system ("pause");

							cortesia++; 
                        }
                break;
				
			case 5 : //Inteira convencional. 
				printf("O total da sua compra é R$ %d,00 \n", valorIngresso);
				printf("Sua poltrona é a %d, pressione 1 para confirmar, ou qualquer outra tecla para voltar. \n", ingresso);
				scanf("%d", &confirma);
						if (confirma == 1) {
					
							printf("\n\n*********************\n");
							printf("****** VOUCHER ******\n");
							printf("Apresentação De Teatro\n");
							printf("Dia: %d \n", dia);
							printf("Poltrona: %d \n", ingresso);
							printf("Valor Total: R$ %d,00\n", valorIngresso);
							printf("\n*********************\n");
							system ("pause");
							
						--ingresso;
						vendidasInt++;
						(caixa = caixa + valorIngresso);
				}
				system ("pause");	
				break;
			
			case 6 : //painel de controle.
			//do {
				printf("Por favor digite a senha de administrador: \n [______]\n");
				scanf("%s", &psswrd2);
				
					psswrdteste = strcmp(psswrd, psswrd2);
					if (psswrdteste == 0) {
					printf("Ingressos meia = %d. Parcial R$ %d,00 \n", vendidasMeia, vendidasMeia * (valorIngresso/2));
					printf("Ingressos inteiros = %d Parcial R$ %d,00 \n", vendidasInt, vendidasInt * valorIngresso);
					printf("Cortesias = %d \n" , cortesia);
                    printf("Caixa total = R$ %d,00 \n\n", caixa);
                    printf("Lugares ocupados = %d \n" , vendidasMeia + vendidasInt + cortesia);
                    printf("Lugares disponíveis = %d \n", ingresso);

					}
					else  {	
					printf("Senha inválida. Tente novamente. \n");
					system ("pause");
				}
				break;	
				
			default :
				printf("Insira um comando válido. \n");
				system ("pause");	
		}
	
	}printf("Sentimos muito, mas a apresentação de hoje já está esgotada.");
}
