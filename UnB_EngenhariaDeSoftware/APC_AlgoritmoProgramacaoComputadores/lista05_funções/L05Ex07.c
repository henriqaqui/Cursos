#include <stdio.h>

//é permitido criar funções auxiliares, desde que não se altere nenhuma linha do método main

int conferir_contagem(int *my_hand){
	//escreva seu código aqui
	int x, correcao = 1;

	for(x = 0; x < 4; x++){
        if(my_hand[x+1] < my_hand[x]){
            correcao = 0;//1 3 5 8 9
            break;
        }
	}
    return correcao;
}

void corrigir_contagem(int *my_hand){
	//escreva seu código aqui
	int x, y, troca;

    for(x = 0; x < 4; x++){
        for(y = x+1; y < 5; y++){
            if(my_hand[x] > my_hand[y]){
                troca = my_hand[x];
                my_hand[x] = my_hand[y];
                my_hand[y] = troca;
            }
        }
    }
}

int main(){
	int i, mao[5];
	for(i=0; i<5; ++i)
		scanf("%d", &mao[i]);

	if(conferir_contagem(mao))printf("Contagem Correta\n");
	else{
		printf("Contagem Incorreta\n");
		printf("Sequencia certa: ");
		corrigir_contagem(mao);
		for(i=0; i<5; ++i)
			printf("%d%c", mao[i], ((i==4)? '\n' : ' '));
	}

 return 0;
}
