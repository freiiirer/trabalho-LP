#include "problema2.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>
#define ff fflush(stdin)

struct Produto
{
    int codigoProduto;
    char nomeProduto[51];
    float precoProduto;

};
void inicializar(){
    int i;
    for(i=0; i<T; i++){
        vProdutos[i] = NULL;
    }
}

void continuar()
{
    printf("digite ENTER para continuar");
    ff;
    getchar();

}

void ler(int x)
{
    if (x >= T)
    {
        printf("!!Limite de itens atingidos!!");
        system("pause");
        return;
    }
        vProdutos[x] = (p_produto) malloc(sizeof(struct Produto));
        ff;
        printf("Digite o codigo do produto: \n");
        scanf("%d", &vProdutos[x]->codigoProduto);
        ff;
        printf("Digite o nome do produto: \n");
        gets(vProdutos[x]->nomeProduto);
        ff;
        printf("Digite o preço: \n");
        scanf("%f",&vProdutos[x]->precoProduto);
        ff;
        limpaTela();
        printf("Produto cadastrado com sucesso! \n");
        system("pause");
        limpaTela();
}

void imprimirProduto(int inf)
{
    int i;
    for (i=0; i<T; i++)
    {
        if (vProdutos[i] != NULL){
           if (vProdutos[i]->codigoProduto == inf){
                limpaTela();
                printf("Produto\n\n");
                printf("Codigo: %d \nProduto: %s \nPreco: R$%.2f \n",vProdutos[i]->codigoProduto,vProdutos[i]->nomeProduto,vProdutos[i]->precoProduto);
                system("pause");
                limpaTela();
                return;
           }
        }
    }
        printf("Produto nao cadastrado\n\n");
        system("pause");
        limpaTela();
}

void imprimirTodos()
{
    int i;
    float soma;
    limpaTela();
    for (i=0;i<T;i++){
        if(vProdutos[i] != NULL){
            printf("Codigo: %d\n Produto: %s\n Preco: R$%.2f\n",vProdutos[i]->codigoProduto,vProdutos[i]->nomeProduto,vProdutos[i]->precoProduto);
            soma = soma + vProdutos[i]->precoProduto;
        }
    }
        printf("Total = %.2f\n",soma);
        system("pause");
        limpaTela();
}

void problema2(){
	limpaTela();
    setlocale(LC_ALL,"utf8");
    int opcao=0;
    int j=0;
    int itens=0;

    inicializar();

    while (opcao != 9)
    {
        printf("CADASTRO\n\n");
        printf("1..Cadastrar itens\n");
        printf("2..Procurar itens\n");
        printf("3..Todos itens\n");
        printf("4..Quantidade de itens cadastrados\n");
        printf("9..Sair\n\n");
        printf("Escolha uma opção: ");
        scanf("%d",&opcao);
        limpaTela();

        switch(opcao)
        {
        case 1:
            ler(j);
            j++;
            limpaTela();
            break;

        case 2:
            limpaTela();
            ff;
            printf("Digite o codigo do item: ");
            scanf("%d",&itens);
            imprimirProduto(itens);
            break;

        case 3:
            limpaTela();
            imprimirTodos();
            break;

        case 4:
            limpaTela();
            printf("Quantidade de produtos cadastrados: %d\n",j);
            continuar();
            limpaTela();
        }
    }
}




