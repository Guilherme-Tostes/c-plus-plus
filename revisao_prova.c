#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

char conceito(void);

void analisa_digitos(int n, int* qtd, int* soma, int* maior);

int* filtra_faixa(int* v, int n, int min, int max, int* tam);

int main(void) 
{
	
	printf("------ Questao 1 ------\n");
	char conc;
	conc = conceito();
	printf("O conceito foi: %c\n", conc);

	printf("\n------ Questao 2 ------\n");
	int qtd, soma, maior;
	int n = 40721;
	analisa_digitos(n, &qtd, &soma, &maior);
	printf("Codigo %d: %d digitos - soma dos seus digitos: %d - maior digito: %d\n", n, qtd, soma, maior);

	printf("\n------ Questao 3 ------\n");
	int v[] = { 15,22,34,17,61,29,45 };
	int n3 = 7;
	int min = 18;
	int max = 40;
	int tamtam;
	int* novo;
	novo = filtra_faixa(v, n3, min, max, &tamtam);

	printf("Idades Inscritas: ");
	for (int i = 0; i < n3; i++)
		printf("%d ", v[i]);
	printf("\n");


	printf("Idades entre %d e %d (%d): ", min, max,tamtam);
	for (int i = 0; i < (tamtam); i++)
		printf("%d ", novo[i]);

	return 0;
}

char conceito(void)
{
	float p1, p2, trab, media;
	char conc;

	printf("Forneca as notas da p1, p2, e do trabalho: ");
	scanf("%f %f %f", &p1, &p2, &trab);

	media = (3 * p1 + 4 * p2 + 3 * trab) / 10;

	if (p1 > 10 || p1 < 0 || p2 > 10 || p2 < 0 || trab > 10 || trab < 0)
		conc = 'X';
	else if (media >= 9)
		conc = 'A';
	else if (media >= 7)
		conc = 'B';
	else if (media >= 5)
		conc = 'C';
	else
		conc = 'D';

	return conc;
}

void analisa_digitos(int n, int* qtd, int* soma, int* maior) {
	n = abs(n);
	*soma = 0;
	*maior = 0;
	*qtd = 1;
	int atual;

	if (n == 0) {
		return;
	}

	for (*qtd = 0; n > 0; (*qtd)++) {
		atual = n % 10;
		*soma += atual;
		if (atual > *maior)
			*maior = atual;
		n /= 10;
	}
	return;
}

int* filtra_faixa(int* v, int n, int min, int max, int* tam)
{
	*tam = 0;
	for (int i = 0; i < n; i++) {
		if (v[i] >= min && v[i] <= max) {
			(*tam)++;
		}
	}
	if (*tam == 0)
		return NULL;

	int* novo_v = (int*)malloc(sizeof(int) * (*tam));
	if (novo_v == NULL) {
		*tam = 0;
		return NULL;
	}

	int ordem = 0;
	for (int i = 0; i < (*tam); i++) {
		if (v[i] >= min && v[i] <= max) {
			novo_v[ordem] = v[i];
			ordem++;
		}
	}
	return novo_v;
}