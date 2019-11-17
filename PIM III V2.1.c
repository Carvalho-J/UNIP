#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <locale.h>
#include <string.h>
#define MAXINGRE 50

int main ()
{
	int ingresso;
	int valorIngresso = 20;
	int menu;
	int confirma;
	int cancela;
	int idade;
	int caixa = 0;
	int vendidasMeia = 0;
	int vendidasInt = 0;
	int pwdtentativas = 0;
	char psswrd[] = "bolinho";
	char psswrd2[10];
	int psswrdteste;
	// int salaCinema [5][10]; isso aqui quero fazer funcionar mais pra frente,  pra printar a fileira e poltrona do ingresso.
	/*
	int checagem_idade (int dia > 0 && <= 31; int mes > 0 && <= 12; int ano)
	{
		int idade
		idade =
	}
	*/

	for (ingresso = MAXINGRE ; ingresso >= 1 ; ingresso = ingresso--) {

		setlocale(LC_ALL, "Portuguese");
		printf("\nOl�! Seja bem vindo ao Cine Unip! \n");


		printf("\nTemos %d ingressos disponíveis para a sessão de hoje.\n", ingresso);
		printf("Por favor selecione o tipo de ingresso que você deseja: \n 1. Meia entrada estudante e professor. \n 2. Meia entrada idoso. \n 3. Meia entrada para crian�as entre 2 e 12 anos. \n 4. Cortesia estudantes carentes escola p�blica. (Somente �s ter�as-ferias). \n 5. Inteira convencional. \n 6. Administrador.\n\n");
		scanf("%d", &menu);

		switch (menu) {

			case 1 : //Meia entrada estudante e professor
				printf("O total da sua compra � R$ %d,00.\n", valorIngresso/2);
				printf("Pressione 1 para confirmar ou qualquer outra tecla para voltar. \n\n");
				scanf("%d", &confirma);
					if (confirma == 1) {
						printf("Sua poltrona � a %d, aproveite o filme! \n", ingresso);
						(ingresso = --ingresso);
						vendidasMeia++;
						(caixa = caixa + valorIngresso/2);
				}
				break;

			case 2 : //Meia entrada idoso
				printf("Por favor, digite sua idade.  \n");
				scanf("%d", &idade);
				if (idade > 0 && idade >= 60) {
					printf("Usu�rio eleg�vel para meia entrada! Por favor tenha em m�os um documento com foto para comprovar a idade. \n");
					printf("O total da sua compra � R$ %d,00.\n", valorIngresso/2);
					printf("Pressione 1 para confirmar ou qualquer outra tecla para voltar. \n\n");
					scanf("%d", &confirma);
						if (confirma == 1) {
						printf("Sua poltrona � a %d, aproveite o filme! \n", ingresso);
						(ingresso = --ingresso);
						vendidasMeia++;
						(caixa = caixa + valorIngresso/2);
					}
				}
				else
					printf("Sentimos muito, mas a meia entrada idoso s� � v�lida para pessoas com mais de 60 anos. Agradecemos a compreens�o. \n");//scanf("%d.%d.%d", &dia; &mes; &ano);
					system ("pause");
				break;

			case 3 : //Meia entrada para crian�as entre 2 e 12 anos

				break;

			case 4 : //Cortesia estudantes carentes escola p�blica. (Somente �s ter�as-ferias).
				break;

			case 5 : //Inteira convencional.
				printf("O total da sua compra � R$ %d,00 \n", valorIngresso);
				printf("Sua poltrona � a %d, pressione 1 para confirmar, ou qualquer outra tecla para voltar. \n", ingresso);
				scanf("%d", &confirma);
				if (confirma == 1) {
					printf("Sua poltrona � a %d, aproveite o filme! \n", ingresso);
					(ingresso = --ingresso);
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
					printf("Caixa = R$ %d,00 \n\n", caixa);
					printf("Ingressos meia = %d \n", vendidasMeia);
					printf("Ingressos inteiros = %d \n", vendidasInt);
					printf("Lugares dispon�veis = %d\n", ingresso);

					}
					else  {
					printf("Senha inv�lida. Tente novamente. \n");
					(pwdtentativas = pwdtentativas++);
					system ("pause");
				}
			//} //while ((psswrdteste != 0) || (strcmp(psswrd2, "000") ==0 ));
				system ("pause");
				break;

			default :
				printf("Insira um comando v�lido. \n");
				system ("pause");
		}
	}
	printf("Sentimos muito, mas a sess�o de hoje j� est� esgotada.");
}
