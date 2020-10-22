#include <stdio.h>
#include <math.h>

//suas structs
struct ponto{
    int x;
    int y;
};


//cálculo da distância (pode ser modificado para suas structs)
double distance(struct ponto a,struct ponto b){
	return hypot(a.x-b.x,a.y-b.y);
}

int main(){
    int y, encontrado = 0;
    struct ponto a, b;
    double raio[3], distancia[3];


    scanf("%d %d", &a.x, &a.y);

    for(y = 0; y < 3; y++){
        scanf("%.2lf", &raio[y]);
        scanf("%d", &b.x);
        scanf("%d", &b.y);

       distancia[y] = distance(a,b);
    }

    //printf("Distancia A: %lf\nDistancia B: %lf\nDistancia C: %lf\n", distancia[0],distancia[1], distancia[2]);
    if(distancia[0] == distancia[1] || distancia[0] == distancia[2] || distancia[1] == distancia[2])
        encontrado = 1;

    if (encontrado == 1)
        printf("Celular encontrado\n");
    else
        printf("Nao foi possivel encontrar\n");

 return 0;
}
