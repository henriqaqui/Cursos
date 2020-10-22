#include <stdio.h>
#define qtde_modelos 5

/*
ETAPA 1 - NESTE LOCAL VC VAI DEFINIR OS NOVOS TIPOS NECESSÁRIOS
*/
typedef struct perfil{
    int VAM;
}Tperfil;

typedef struct treino{
    int percent_VAM;
    int distancia;
    int duracao;
    int distancia_fixa;
}Ttreino;


typedef struct modelo{
    int id;
    Tperfil avatar;
    Ttreino treino;

}tModelo;




// Double to Integer
// O objetivo desta funcao e reduzir chance de erro por ponto fluante
// Ela despreza o primeiro digito do numero int retornado
int dToI(double value){
	int aux = (int)value;
	aux = 10 * (aux / 10);
	return aux;
}

int calculaDuracao(int percentVAM, int VAM, int distancia) {
        double vel = percentVAM * VAM / 100.0;
        return dToI(3.6 * distancia / vel);

}

int calculaDistancia(int percentVAM, int VAM, int time) {
        double vel = percentVAM * VAM / 100.0;
        return dToI(vel * time / 3.6);
}

void mostraModelos(tModelo * modelos, int qtde) {
	int i, aux;

	if (qtde>0)
		printf("id\tVAM\t%%VAM\tdistancia\tduracao\tparametro fixo\n");
	else {
		printf("nao ha modelo");
		return;
	}
	for (i=0; i<qtde;i++){
		printf("%d\t%d\t%d\t", modelos[i].id, modelos[i].avatar.VAM, modelos[i].treino.percent_VAM);
		if (modelos[i].treino.distancia_fixa) {
			aux = calculaDuracao(modelos[i].avatar.VAM, modelos[i].treino.percent_VAM, modelos[i].treino.distancia);
			printf("%d\t\t%d\tdistancia\n", modelos[i].treino.distancia, aux);
		}
		else {
			aux = calculaDistancia(modelos[i].avatar.VAM, modelos[i].treino.percent_VAM, modelos[i].treino.duracao);
			printf("%d\t\t%d\tduracao\n", aux, modelos[i].treino.duracao);
		}
	}
}

void mostraEstimulo(int VAM, tModelo *modelo) {
        int distancia, duracao;
		printf("\nVAM\t%%VAM\tdistancia\tduracao\n");
		/* A LINHA ANTERIOR NAO DEVE SER ALTERADA
		ETAPA 2 - DEFINA A FUNCAO QUE REALIZE OS CALCULOS E IMPRIMA VAM %VAM DISTANCIA E DURACAO, DE ACORDO COM O EXEMPLO DO ENUNCIADO
		PARA REALIZAR OS CALCULOS VC DEVE USAR AS FUNCOES CALCULA DISTANCIA E CALCULA DURACAO */

        if(modelo->treino.distancia_fixa == 1){
            distancia = modelo->treino.distancia;
            duracao = calculaDuracao(modelo->treino.percent_VAM, VAM, modelo->treino.distancia);
        }
        else{
            duracao = modelo->treino.duracao;
            distancia = calculaDistancia(modelo->treino.percent_VAM, VAM, modelo->treino.duracao);
        }

        printf("%d\t%d\t%d\t%d\t\n", VAM, modelo->treino.percent_VAM, distancia, duracao);

}

int main() {

	int qtde_atletas, VAM, id_modelo;

	tModelo modelos[qtde_modelos];

	modelos[0] = (tModelo) {0,15,65,5000,0,1};
	modelos[1] = (tModelo) {1,16,100,0,1800,0};
	modelos[2] = (tModelo) {2,16,95,15000,0,1};
	modelos[3] = (tModelo) {3,18,85,7500,0,1};
	modelos[4] = (tModelo) {4,19,105,0,3500,0};

	mostraModelos(modelos, qtde_modelos);

	printf("\n");
	scanf("%d", &qtde_atletas);

	if (!qtde_atletas) return 0;

	do {
		scanf("%d", &VAM);
		do {
			scanf("%d", &id_modelo);
		} while (id_modelo <0 || id_modelo >4);
		/* ETAPA 2 - A unica mucanca autorizada na main e a remocao do comentario da linha seguinte. */
		mostraEstimulo(VAM, &modelos[id_modelo]);
		qtde_atletas--;
	} while (qtde_atletas);

	return 0;
}
