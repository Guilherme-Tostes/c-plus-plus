#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>

char **criaSenhas(int n, char **vStr) {

	char** novo_vet = (char**)malloc(sizeof(char*) * n);

	for (int i = 0; i < n; i++) {
		
		
		//ptr[i] = ptr[i]. toupper();
		
		int tam = strlen(vStr[i]);

		char* v = (char*)malloc(sizeof(char) * tam + 1);

		v[1] = vStr[i]

		/*
		for (int j = 0; j < tam; j++) {
			printf("%c", vStr[i][j]);
		}

		printf(", ");
	*/

		
		
	}
}

char* vStr[] = {"abc", "1233", NULL, "pato"};

char c[] = "afs";
char* s[] = { 'abc','c'};

//char **c[] = { "afs","bfsf","cfs" };
//c[0] = &afs --> a,f,s 


int main(void) {
	
	char* v[] = {'123', 'abc'};

	char p[] = { '1','2','\0' }; // = "12"

	int v[] = { 1,2,3 }; 
	char * c[] = {"afs","bfsf","cfs"};

	for (int i = 0; i < 3; i++) {

		char* ptrI = c;
		


	}
	
	
	return 0;
}