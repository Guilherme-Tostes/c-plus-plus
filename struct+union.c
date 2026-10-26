#include <stdio.h>
#include <string.h>
#include <stdlib.h>

// vet de struct

//file

// union

enum tipoVeiculo {
	MOTO, // moto = 0 //// valor de MOTO
	CARRO, //carro = 1
	CAMINHAO // caminhao = 2
};
typedef enum tipoVeiculo TipoVeiculo; // apelido so para pular o "enum" ou "char" tipo isso

union dado { // sizef(union dado) = 8 bytes
	float preco; // sizeof(float) = 8 bytes
	int ano; // sizeof(int) = 4 bytes
};
typedef union dado Dado;

struct veiculo { // sizeof(struct veiculo) = 51 + 51 + 4 = 108 bytes
	char marca[51]; // size_t marca[51] = 51 bytes
	char modelo[51]; // size_t modelo[51] = 51 bytes
	TipoVeiculo tipo; // size_t tipo = 4 bytes
	Dado dadoExtra;
};
typedef struct veiculo Veiculo;

void exibeTipo(Veiculo* aut)
{
	if (aut->tipo == MOTO)
		printf("Tipo = Moto\n");
	else if (aut->tipo == 1)
		printf("Tipo = Carro\n");
	else if (aut->tipo == 2)
		printf("Tipo = Caminhao\n");
}

int main(void)
{
	Veiculo aut = { "Honda", "Civic", CARRO };
	Veiculo vAut[2] = { { "Honda", "Civic", CARRO } ,
		{ "Honda", "mt", MOTO } };

	Veiculo* vAut2[2]; //vAut2[0] = &struct veiculo    ent armazena a cord do struct, ja q n se sabe oque tem dentro ainda

	for (int i = 0; i < 2; i++) {
		vAut2[i] = (Veiculo*)malloc(sizeof(Veiculo));
		if (vAut2[i] == NULL)
			exit(1);
		printf("Digite a marca: ");
		scanf(" %50[^\n]", vAut2[i]->marca);
		printf("Digite o modelo: ");
		scanf(" %50[^\n]", vAut2[i]->modelo);
		printf("Digite o tipo em inteiro: ");
		scanf("%d", &vAut2[i]->tipo);
	}

	for (int i = 0; i < 2; i++) {
		printf("Marca: %s\nModelo: %s\n", vAut2[i]->marca, vAut2[i]->modelo);
		exibeTipo(vAut2[i]);
	}

	return 0;
}