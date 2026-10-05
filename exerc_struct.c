#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

//char nome[31], nomeProf[31];
//float nota, salarioProf;
//int matr, matrProf;

struct avaliacao
{
	float valorVendidoNoMes;
	int numeroDeFaltas;
};

typedef struct avaliacao Avaliacao;

//-----------------------------

struct vendedor
{
	int inscricao;
	char nome[51];
	float salario_base;
	Avaliacao aval;
};
typedef struct vendedor Vendedor;

//

float calculaExtra(Avaliacao aval);

int main(void) {

	

	return 0;
}

float calculaExtra(Avaliacao aval) {

}