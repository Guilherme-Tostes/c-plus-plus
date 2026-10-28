#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <math.h>

union aluno {
	float nota;
	int turma;
};
typedef union aluno Aluno;

enum tipoveiculo {
	MOTO = 1, //MOTO = 1 ao inves de 0
	CARRO = 2, // = 2
	ONIBUS = 3 // = 3
};
typedef enum tipoveiculo Veiculo;

struct dadosAl {
	char nome[51];
	int matricula;
	Aluno dado;
	Veiculo transporte;
};
typedef struct dadosAl DadosAl;

int main(void) {

	DadosAl aluno1;
	DadosAl vAl[5]; //vetor de 5 DadosAl
	
	printf("Qual seu nome aluno1: ");
	scanf(" %[^\n]", aluno1.nome);

	printf("Qual sua matricula aluno1: ");
	scanf("%d", &aluno1.matricula);

	int esc;
	do {
		printf("Escolha 1 para mandar sua nota ou 2 para mandar sua turma: ");
		scanf("%d", &esc);
		if (esc == 1) {
			printf("Mande sua nota: ");
			scanf("%f", &aluno1.dado.nota);
		}
		else if (esc == 2) {
			printf("Mande sua turma: ");
			scanf("%d", &aluno1.dado.turma);
		}
		else {
			printf("Numero errado, reinicie. \n");
		}
	} while (esc != 1 && esc != 2);

	printf("Digite seu tranporte de locomocao em int (1 = Moto, 2 = Carro, 3 = Onibus)");
	scanf("%d", &aluno1.transporte);

	if (esc == 1) {
		if(aluno1.transporte == 1)
			printf("O aluno %s da matricula %d, tem nota %.1f e vai de Moto", aluno1.nome, aluno1.matricula, aluno1.dado.nota);
		else if (aluno1.transporte == 2)
			printf("O aluno %s da matricula %d, tem nota %.1f e vai de Carro", aluno1.nome, aluno1.matricula, aluno1.dado.nota);
		else if (aluno1.transporte == 3)
			printf("O aluno %s da matricula %d, tem nota %.1f e vai de Onibus", aluno1.nome, aluno1.matricula, aluno1.dado.nota);
	}

	else {
		if (aluno1.transporte == 1)
			printf("O aluno %s da matricula %d, da turma %d e vai de Moto", aluno1.nome, aluno1.matricula, aluno1.dado.turma);
		else if (aluno1.transporte == 2)
			printf("O aluno %s da matricula %d, da turma %d e vai de Carro", aluno1.nome, aluno1.matricula, aluno1.dado.turma);
		else if (aluno1.transporte == 3)
			printf("O aluno %s da matricula %d, da turma %d e vai de Onibus", aluno1.nome, aluno1.matricula, aluno1.dado.turma);
	}
	//(float)esc; mudar esc para float SO NESSA ESC UNICO, depois volta ao normal
	
	// media = (float)(soma / n)
	// media = soma / (float)n
	
	char nome_temp[51];
	printf("Digite nome: ");
	scanf(" %[^\n]", nome_temp);
	int tam = strlen(nome_temp);
	
	char* nome_final = (char*)malloc(sizeof(char) * tam + 1);
	//nome_final = (char*)malloc(sizeof(char) * tam + 1);
	if (nome_final == NULL)
		exit(1);

	DadosAl* ptAl = (DadosAl*)malloc(sizeof(DadosAl));
	if (ptAl == NULL)
		exit(1);
	strcpy(nome_final, nome_temp);
	strcpy(ptAl->nome, nome_final); // (*ptAl).nome

	printf("O aluno %s\n", ptAl->nome); // 'A'
	printf("%d", ptAl->matricula);

	free(nome_final);
	free(ptAl);
	return 0;
}