#include <stdio.h>

//################### Passo 1
// Nesta regiao vc vai definir o tipo tPedido
typedef struct pedido{
    int num_voo;
    int direcao;
    long long int data_hora;
    int passageiros;

}tPedido;

//################### Passo 1

//################### Passo 2
// Nesta regiao vc vai definir a funcao mostra_data_hora

//################### Passo 2


//################### Passo 3
// Nesta regiao vc vai definir a funcao mostra_num_voos

//################### Passo 3

//################### Passo 4
// Nesta regiao vc vai definir a funcao que encontra o indice do voo com mais passageiros encontra_voo_mais_cheio

//################### Passo 4

int main() {
	tPedido pedidos[20];
	int i = 0, i_mais_lotado;

	scanf("%d", &pedidos[i].num_voo);
	while ((pedidos[i].num_voo  > 0) && i < 20) {
		scanf("%d %lld %d", &pedidos[i].direcao, &pedidos[i].data_hora, &pedidos[i].passageiros);
		i++;
		scanf("%d", &pedidos[i].num_voo);
	}
	i--;
	printf("%d %d %lld %d\n", pedidos[i].num_voo, pedidos[i].direcao, pedidos[i].data_hora, pedidos[i].passageiros);

//  REMOVER O COMENTARIO DA LINHA SEGUINTE PARA OS PASSOS 2,3 E 4
//	mostra_data_hora(&pedidos[i]);

//  REMOVER O COMENTARIO DA LINHA SEGUINTE PARA OS PASSOS 3 E 4
//	mostra_num_voos(pedidos, i);

//  REMOVER OS COMENTARIOS DAS LINHAS SEGUINTES PARA OS PASSO 4
//	i_mais_lotado = encontra_voo_mais_cheio(pedidos, i);
//	printf("\n%d\n",pedidos[i_mais_lotado].num_voo);

	return 0;
}
