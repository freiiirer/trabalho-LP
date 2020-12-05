#ifndef PROBLEMA1_PROBLEMA1_H_
#define PROBLEMA1_PROBLEMA1_H_
typedef struct Candidato Candidato;
struct Candidato
{
	int matricula;
	char resposta[51];
	int pontuacao;
};

void problema1();
void limpaTela();

#endif /* PROBLEMA1_PROBLEMA1_H_ */
