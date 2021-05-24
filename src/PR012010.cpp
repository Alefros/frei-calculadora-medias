#include <stdio.h>
main()
{
	float P1, P2, B1, B2, B3, B4, MF;
A:
	printf("Digite aqui a primeira nota do primeiro bimestre "), scanf("%f", &P1);
	if (P1 < 0) {
		printf("\nAtencao! Nao existe nota inferior a zero\n\n");
		goto A;
	}
	if (P1 > 10) {
		printf("\nAtencao! Nao existe nota superior a dez\n\n");
		goto A;
	}

B:
	printf("Digite aqui a segunda nota do primeiro bimestre  "), scanf("%f", &P2);
	if (P2 < 0) {
		printf("\nAtencao! Nao existe nota inferior a zero\n\n");
		goto B;
	}
	if (P2 > 10) {
		printf("\nAtencao! Nao existe nota superior a dez\n\n");
		goto B;
	}
		
	B1 = (P1 + P2)/2;

C:
	printf("Digite aqui a primeira nota do segundo bimestre "), scanf("%f", &P1);
	if (P1 < 0) {
		printf("\nAtencao! Nao existe nota inferior a zero\n\n");
		goto C;
	}
	if (P1 > 10) {
		printf("\nAtencao! Nao existe nota superior a dez\n\n");
		goto C;
	}

D:
	printf("Digite aqui a segunda nota do segundo bimestre  "), scanf("%f", &P2);
	if (P2 < 0) {
		printf("\nAtencao! Nao existe nota inferior a zero\n\n");
		goto D;
	}
	if (P2 > 10) {
		printf("\nAtencao! Nao existe nota superior a dez\n\n");
		goto D;
	}
		
	B2 = (P1 + P2)/2;

E:
	printf("Digite aqui a primeira nota do terceiro bimestre "), scanf("%f", &P1);
	if (P1 < 0) {
		printf("\nAtencao! Nao existe nota inferior a zero\n\n");
		goto E;
	}
	if (P1 > 10) {
		printf("\nAtencao! Nao existe nota superior a dez\n\n");
		goto E;
	}

F:
	printf("Digite aqui a segunda nota do terceiro bimestre  "), scanf("%f", &P2);
	if (P2 < 0) {
		printf("\nAtencao! Nao existe nota inferior a zero\n\n");
		goto F;
	}
	if (P2 > 10) {
		printf("\nAtencao! Nao existe nota superior a dez\n\n");
		goto F;
	}
		
	B3 = (P1 + P2)/2;

G:
	printf("Digite aqui a primeira nota do quarto bimestre "), scanf("%f", &P1);
	if (P1 < 0) {
		printf("\nAtencao! Nao existe nota inferior a zero\n\n");
		goto G;
	}
	if (P1 > 10) {
		printf("\nAtencao! Nao existe nota superior a dez\n\n");
		goto G;
	}

H:
	printf("Digite aqui a segunda nota do quarto bimestre  "), scanf("%f", &P2);
	if (P2 < 0) {
		printf("\nAtencao! Nao existe nota inferior a zero\n\n");
		goto H;
	}
	if (P2 > 10) {
		printf("\nAtencao! Nao existe nota superior a dez\n\n");
		goto H;
	}
		
	B4 = (P1 + P2)/2;

	MF = (B1 + B2 + B3 + B4)/4;

	printf("\n\nMedia do primeiro bimestre %.1f", B1);
	printf("\nMedia do segundo  bimestre %.1f", B2);
	printf("\nMedia do terceiro bimestre %.1f", B3);
	printf("\nMedia do quarto   bimestre %.1f", B4);
	printf("\n\nMedia final do ano letivo  %.1f\n\n", MF);

	if (MF >= 5){
		printf("Aluno Aprovado\n\n");}
	else{
		printf("Aluno Reprovado\n\n");}
}