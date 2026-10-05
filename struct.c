#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

//char nome[31], nomeProf[31];
//float nota, salarioProf;
//int matr, matrProf;

struct dadosAluno {
	char nome[31];
	float nota;
	int matr;
};

struct dadosProf {
	char nomeProf[31];
	float salarioProf;
	int matrProf;
};

int main(void) {

	struct dadosAluno aluno1;
	strcpy(aluno1.nome, "Guilherme");
	aluno1.nota = 8.5354;
	aluno1.matr = 2210123;

	printf("Seu nome eh %s\nSua nota eh %.2f\nSua matricula eh %d", aluno1.nome, aluno1.nota, aluno1.matr);
	printf("\n\n");

	struct dadosProf prof1;
	printf("Escreva seu nome: ");
	scanf(" %[^\n]", prof1.nomeProf);

	printf("Escreva seu salario $$$: ");
	scanf("%f", &prof1.salarioProf);

	printf("Escreva sua matricula: ");
	scanf("%d", &prof1.matrProf);

	printf("Seu nome eh %s\nSeu salario eh %.2f\nSua matriculaProf eh %d", prof1.nomeProf, prof1.salarioProf, prof1.matrProf);

	return 0;
}