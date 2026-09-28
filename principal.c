#include <stdio.h>
#include <stdlib.h>
#define MAX 50
int lenomes( char ** valunos);
void imprimenomes(int n, char **alunos);

int main(void)
{
	char* alunos[MAX];
	int n = lenomes(alunos);
	imprimenomes(n, alunos);
	//liberanomes(n, alunos);
	return 0;
}
int lenomes(char** valunos) {
	int qtd, i;
	char nome[81], *al;
	printf("Quantos alunos: ");
	scanf("%d", &qtd);
	for (i = 0; i < qtd; i++) {
		printf("Digite o nome: ");
		scanf(" %[^\n]", nome);
		al = (char*)malloc((strlen(nome) + 1) * sizeof(char));
		if (al == NULL) return NULL;
		strcpy(al, nome);
		valunos[i] = al;
	}
	return qtd;
}
void imprimenomes(int n, char** alunos) {
	int i;
	printf("Nome dos alunos: \n");
	for (i = 0; i < n; i++) {
		printf("%s\n", alunos[i]);
	}
	return;
}