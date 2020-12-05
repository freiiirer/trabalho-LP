# Trabalho-LP

trabalho de Linguagem de programacao desenvolvido por Leonardo Tozoni, Leonardo Freire, Ryan Marchi, Pedro Luna e Daniel Moura

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

##### Projeto cadastrar produto

Desenvolver um programa que simule um carrinho de supermercado. A equipe usarácomo base duas estruturas: a produto e a carrinho.Estrutura : ProdutoCampos membros: codigo, descricao, precounitEstrutura: CarrinhoCampos membros: numitem, codigoprod, qtd, precototal (vetor para ponteiros da estrutura produto).Considere um arquivo dado contendo as informações como base, a saber:12311COCA-COLA 2 LT5.9813111FANTA 2 LT5.2314422SKOL LATINHA2.9814221SKOL GARRAFA3.11OBS: complete com vários itens.Fazer um  programa principal  que  simule  a  abertura  de  um  carrinho  de  compras  e que  nele  pode-se adicionar até 100 itens diferentes de produtos, e ao final deve imprimir na tela um resumo da compra feita com o preço total por item e o total da compra. 
