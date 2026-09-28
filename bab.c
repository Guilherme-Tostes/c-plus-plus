#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char* cont_carac(char* p)
{
	int qtd = 0;
	for (qtd; p[qtd] != '\0'; qtd++);

	char* u = (char*)malloc((sizeof(char) * qtd) + 1);

	return u;
}

char* cont_vogais(char* p)
{
	int qtd = 0;
	for (int i = 0; p[i] != '\0'; i++) {
		if (p[i] == 'a' || p[i] == 'e' || p[i] == 'i' || p[i] == 'o' || p[i] == 'u') {
			qtd++;
		}
	}

	char* u = (char*)malloc((sizeof(char) * qtd) + 1);
	if (u == NULL)
		return 0;

	return u;
}

//*p = {'a', 'n', 'a', '\0'}
// p = 1010111
//1010111 = p[0] -> 1010112 = p[1]
// *(p + i) == p[i]

int main(void) {
 /*
 char u[] = { 'a', 'n', 'a', '\0' };
 //char i[] = 'ola boa tarde' ----- nao pode mais de uma caractere no ''

 char a[] = "oi boa tarde";
 char b[] = "ai mamae";
 char w[51];

 char c, d;
 
 printf("%s\n", a);
 printf("Digite c: ");
 scanf(" %c", &c);
 printf("Digite d: ");
 scanf(" %c", &d);
 printf("c = %c, d = %c\n", c, d);

 printf("Digite seu nome completo: ");
 scanf(" %[^'\n']", v);
 printf("%s\n", v);

 printf("Digite seu nome completo: ");
 scanf("%s", w);
 printf("%s\n", w);

 */

	/*
	char** vNomes
	char *al;
	for
	printf (nome)
	scanf(nome)
	al = (char*)malloc((strlen(nome)+1) * sizeof(char)) ------ sizeof(int) = 4, sizeof(char) = 1, sizeof(float) = 8
	strcpy(vNomes[i], al)
	free(al);
	*/


	char Nome[3];
	char* Nomes[] = { "Ana", "Maria", "Carlos" };
	// char** vnome = (char**)malloc(sizeof(char*) * 3)

	int qtd;
	char temp_nome[51];
	printf("Digite seu nome completo: ");
	scanf(" %[^'\n']", temp_nome);

	char* nome1 = cont_carac(temp_nome);
	char* nome2 = cont_carac(temp_nome);

	int tam = strlen(temp_nome);

	for (int i = 0; i < tam; i++) {
		nome1[i] = temp_nome[i];
	}
	nome1[tam] = '\0';
	// ou
	strcpy(nome2, temp_nome);
	
	printf("%s\n", nome1);
	printf("%s\n", nome2);

	char c = 'a';
	char d = 97;

	printf("%d\n", c);
	printf("%c\n", d);


	free(nome1);
	free(nome2);

 return 0;
}