# Trabalho-LP

trabalho de Linguagem de programacao desenvolvido por Leonardo Tozoni, Leonardo Freire, Ryan Marchi, Pedro Luno e Daniel Moura

### Problema 1


Problema 1A Fatec Arthur de Azevedo, por determinação do Centro Paula Souza, e principalmente motivado pela pandemia do Covid-19, precisará realizar o vestibular de inverno online. Por essa razão, sua equipe foi contratada  para  criar  um  programa  que  capture  as  respostas  de  todos  os  candidatos,  e  dado  um gabarito oficial classifique cada candidato com sua pontuação de acerto e em ordem de pontuação do maiorpara o menor.Sabe-se  que  você deverá  criar  um  programa  que recebauma  matriz  que  contenha  a  matrícula  do candidatoe as respostas assinaladas no teste para a classificação. Você deve alimentar umamatrizcom a seguinte informação:
DOIS  VETORES:
CCCCC XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX
12131cbabcadeacbaeabdeaeaabcdaeeaabdaabdeaeaabceaaaaaa
12233abdeaeaabcdaeeaabdaabdeaeadeaeaabcdaeeaabdaabbbba
13311cbabcadeacbaeabdeaeaabcdaeeaabdaabdeaeaabcebbabcaa
14411eabdeaeaabcdaeeaabdaaeaabcdaeeaaeaeaabcdaeeabcabca
Onde CCCCC representa o número do candidato; e xxxxxxxxxxxxxxxxxxxxxxxxx... cinquenta caracterescom letras de "a"a  "e" que representam as respostas dadas para cada questão da prova (1 a 50).

Você terá OUTRO vetor de 51 caracteres (último caractere reservado para o ‘\0’), que representa o gabarito oficial.
abcdeedcbaabcdeedcbaabcdeedcbaabcdeedcbaabcdeedcba’\0’

A impressão final deverá ser a classificação do candidato, a resposta deverá ser no seguinte formato:
CCCCC XX

onde CCCCC representa o número do candidato e XX representa o número de questões certas.

Ex de saída:13111 4214112 40

### Problema 2

##### Projeto conta bancária

Dadas as duas structs abaixo:

struct Cliente{
  char nome[256];
  intcpf;
};

struct Conta {
  intnumero_da_conta;
  struct Clientecliente;
  floatsaldo;
};
    
Crie um programa que permita gravar as informaçõesde um cliente e de uma conta(memória). Uma vez aberta a conta, faça noprograma uma simulação deoperações de depósito, saque, e exibição de saldo.Nota: você deve considerar como regra para sacar que só é feito o saque seo cliente possuir saldo, e para depositar a regra é que o valor seja positivo.