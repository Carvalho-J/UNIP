#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <locale.h>
#include <string.h>
#define MAXINGRE 50


void cabecalho(){ //cabe�alho mostrado na tela inicial do programa. Chamado atrav�s de fun��o, n�o retorna nada, por isso sua atribui��o "void".
        printf("****************************************************************************\n");
        printf("*********  BEM VINDO AO FESTIVAL DE TEATRO DE FINAL DE ANO - 2019  *********\n");
        printf("****************************************************************************\n");
        }

void diaApresentacao(){ /*Fun��o relacionada ao dia da programa. O plano inicial era ter, cada dia do m�s, 
						como um array de 50 posi��es que seriam gradativamente ocupadas. N�o foi executado devido ao prazo,. */
               
        printf("\nESCOLHA O DIA DA APRESENTA��O\n");
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
	int ingresso; //contador do looping. 50 posi��es definidas pelo #define visando escalabilidade.
	int valorIngresso = 20; //valor do total do ingresso, optamos por dividi-lo em caso de meia ao inv�s de criar outra vari�vel.
	int menu; //vari�vel de controle do switch case.
	int confirma; //vari�vel que recebe a op��o de confirma��o do usu�rio.
	int idade; //Usada para verificar tanto a meia idoso quanto infantil.
	int caixa = 0; // valor do caixa, inialmente zerado.
	int vendidasMeia = 0; //contador de meio ingressos vendidos, para fins de contabilizar fluxo de caixa.
	int vendidasInt = 0; //contador de ingressos vendidos, para fins de contabilizar fluxo de caixa.
	char psswrd[] = "bolinho"; //string de verifica��o de acesso ao painel de controle.
	char psswrd2[10]; //recebe o valor digitado pelo usu�rio e o compara com a senha.
	int psswrdteste; //recebe a integral resultado da checagem feita pela fun��o strcmp, caso resulte em 0, ou seja, identicas, printa o fluxo de caixa.
    int dia; //recebe a vari�vel usada para verifica��o da cortesia �s ter�as, dias 5, 12, 19, 26.
    int cortesia = 0; //contador de cortesias. Para fins de fluxo de caixa.
	
	cabecalho(); //chama a fun��o e imprime o calend�rio
	
		
	for (ingresso = MAXINGRE ; ingresso >= 1 ; ingresso = ingresso--) { // la�o de controle para a repeti��o do c�digo
		
		setlocale(LC_ALL, "Portuguese"); //usado para adequar strings aos caracteres acentuados

		printf("\nTemos %d ingressos dispon�veis para a apresenta��o de hoje.\n", ingresso);
		printf("Por favor selecione o tipo de ingresso que voc� deseja: \n 1. Meia entrada estudante e professor. \n");
		printf(" 2. Meia entrada idoso. \n 3. Meia entrada para crian�as entre 2 e 12 anos. \n");
		printf(" 4. Cortesia estudantes carentes escola p�blica. (Somente �s ter�as-feiras.)\n");
		printf(" 5. Inteira convencional. \n 6. Administrador.\n\n");
		scanf("%d", &menu);
		
		switch (menu) {
			
			case 1 : //Meia entrada estudante e professor.
				printf("Meia entrada destinada a estudantes e professores, tenha em m�os um comprovante! \n");
				diaApresentacao();
                scanf("%d", &dia);
				printf("Pressione 1 para confirmar ou qualquer outra tecla para voltar. \n\n");
				printf("O total da sua compra � R$ %d,00.\n", valorIngresso/2);
				scanf("%d", &confirma);
					if (confirma == 1) {
						
						printf("\n\n*********************\n");
						printf("****** VOUCHER ******\n");
						printf("Apresenta��o De Teatro\n");
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
						break;
			
			case 2 : //Meia entrada idoso
				printf("Por favor, digite sua idade.  \n");
				scanf("%d", &idade);
				if (idade > 0 && idade >= 60) {
					printf("Usu�rio eleg�vel para meia entrada! Por favor tenha em m�os um documento com foto. \n");
					printf("O total da sua compra � R$ %d,00.\n", valorIngresso/2);
                    diaApresentacao();
                    scanf("%d", &dia);
					printf("Pressione 1 para confirmar ou qualquer outra tecla para voltar. \n\n");
					scanf("%d", &confirma);
						if (confirma == 1) {
							
							printf("\n\n*********************\n");
							printf("****** VOUCHER ******\n");
							printf("Apresenta��o De Teatro\n");
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
					printf("Sentimos muito, mas a meia entrada idoso s� � v�lida para pessoas com mais de 60 anos. Agradecemos a compreenss�o. \n");
					system ("pause");
                }
				break;
				
			case 3 : //Meia entrada para crian�as entre 2 e 12 anos
				printf("Por favor, digite a idade.  \n");
				scanf("%d", &idade);
					if (idade > 2 && idade <= 12) {
						printf("Voc� tem direito a meia entrada! Por favor tenha em m�os sua carteirinha de estudante. \n");
						diaApresentacao();
						scanf("%d", &dia);
						printf("O total da sua compra � R$ %d,00.\n", valorIngresso/2);
	                    printf("Pressione 1 para confirmar ou qualquer outra tecla para voltar. \n\n");
						scanf("%d", &confirma);
							if (confirma == 1) {
								
								printf("\n\n*********************\n");
								printf("****** VOUCHER ******\n");
								printf("Apresenta��o De Teatro\n");
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
					printf("Sentimos muito, mas a meia entrada infantil s� � v�lida para crian�as entre 02 e 12 anos. Agradecemos a compreenss�o. \n");
					system ("pause");
                }
				break;
				
				break;

			case 4 : //Cortesia estudantes carentes escola p�blica. (Somente �s ter�as-ferias).
                        printf("O Festival de Teatro de final de ano � uma iniciativa que busca compartilhar cultura.");
                        printf("Sendo assim, estudantes da rede p�blica tem isen��o na entrada �s ter�as. Aproveite e chame os amigos! \n");
                        diaApresentacao();
                        scanf("%d", &dia);

                        if (dia == 5 || dia == 12 || dia == 19 || dia == 26);
                        {
                            
                            printf("\n\n*********************\n");
							printf("****** VOUCHER ******\n");
							printf("Apresenta��o De Teatro\n");
							printf("Dia: %d \n", dia);
							printf("Poltrona: %d \n", ingresso);
							printf("Valor Total: CORTESIA\n");
							printf("\n*********************\n");
							system ("pause");

							cortesia++; 
                        }
                break;
				
			case 5 : //Inteira convencional. 
				printf("O total da sua compra � R$ %d,00 \n", valorIngresso);
				printf("Sua poltrona � a %d, pressione 1 para confirmar, ou qualquer outra tecla para voltar. \n", ingresso);
				scanf("%d", &confirma);
						if (confirma == 1) 
						{
							printf("\n\n*********************\n");
							printf("****** VOUCHER ******\n");
							printf("Apresenta��o De Teatro\n");
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
		                    printf("Lugares dispon�veis = %d \n", ingresso);
							system ("pause");
					}
					else  {	
						printf("Senha inv�lida. Tente novamente. \n");
						system ("pause");
				}
				break;	
					
			default :
				printf("Insira um comando v�lido. \n");
				system ("pause");	
		}
	
	}printf("Sentimos muito, mas a apresenta��o de hoje j� est� esgotada.");
}
