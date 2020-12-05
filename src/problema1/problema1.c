#include "problema1.h"
#include <stdio.h>
#include <stdlib.h>
#define ff fflush(stdin)
struct Candidato *candidatos[100] = { };

void preencheGabarito(char *gabarito) {
	printf("Digite o gabarito oficial:");
	ff;
	gets(gabarito);
}

Candidato* preencherCandidato() {
	Candidato *candidato = malloc(sizeof(Candidato));

	candidato->pontuacao = 0;
	puts("Digite a matricula do candidato: ");
	ff;
	scanf("%d", &candidato->matricula);

	puts("digite a resposta do candidato: ");
	ff;
	gets(candidato->resposta);
	return candidato;
}

void colocaCandidato() {
	static int posicao = 0;
	if (posicao == 100) {
		puts("O numero maximo de candidatos foi atingido");
		return;
	}
	candidatos[posicao++] = preencherCandidato();
}

int gerarPontuacao(char *gabarito, char *resposta) {
	int pontos = 0;
	for (int i = 0; i < 50; i++) {
		char gab = gabarito[i];
		char res = resposta[i];
		if (gab == '\0' || res == '\0') {
			break;
		} else if (gab == res) {
			pontos++;
		}
	}
	return pontos;
}

void calculaResposta(char *gabarito) {
	for (int i = 0; i < 100; i++) {
		Candidato *candidato = candidatos[i];
		if (candidato == 0) {
			return;
		}
		candidato->pontuacao = gerarPontuacao(gabarito, candidato->resposta);
	}
}

int compara(const void *c1, const void *c2) {
	Candidato *candidato1 = (*(Candidato**) c1);
	Candidato *candidato2 = (*(Candidato**) c2);

	if (candidato1 == 0) {
		return -1;
	}
	if(candidato2 == 0){
		return 1;
	}

	if (candidato1->pontuacao < candidato2->pontuacao) {
		return 1;
	} else if (candidato1->pontuacao > candidato2->pontuacao) {
		return -1;
	} else {
		return 0;
	}
}

void listar() {
	puts("-----------------------------------------------");
	for (int i = 0; i < 100; i++) {
		Candidato *candidato = candidatos[i];
		if (candidato == 0) {
			continue;
		}
		printf("%d #%d\n", candidato->matricula, candidato->pontuacao);
	}
	puts("-----------------------------------------------");
}

void ordena(char *gabarito) {
	calculaResposta(gabarito);
	qsort(candidatos, 100, sizeof(Candidato*), &compara);
	listar();
}
void problema1() {
	char gabarito[51] = { "\0" };

	do {
		int opc = 0;
		puts("1-> Digitar gabarito oficial");
		puts("2-> Cadastrar Candidato");
		puts("3-> Listar Candidatos");
		ff;
		scanf("%d", &opc);

		switch (opc) {
		case 1:
			preencheGabarito(gabarito);
			continue;
		case 2:
			colocaCandidato();
			continue;
		case 3:
			ordena(gabarito);
		}
	} while (1);
}

