#include <stdio.h>
#include <math.h>

/* Crie suas funções, structs ou qualquer elemento que desejar dentro da área de edição na main()
ou fora da main porém sem alterar nenhuma outra função dada */
struct pontos{
    int x;
    int y;
};

struct Triangle{
    struct pontos a;
    struct pontos b;
    struct pontos c;
};


//Nao altere essa função
double area(struct Triangle t){
	return 0.5*fabs(t.a.x*(t.b.y-t.c.y) + t.b.x*(t.c.y-t.a.y) + t.c.x*(t.a.y-t.b.y));
}
int main(){


	/*inicio da area editavel */
    struct Triangle my_tri;

    scanf("%d", &my_tri.a.x);
    scanf("%d", &my_tri.a.y);
    scanf("%d", &my_tri.b.x);
    scanf("%d", &my_tri.b.y);
    scanf("%d", &my_tri.c.x);
    scanf("%d", &my_tri.c.y);

	/*fim da area editavel */

	double resp  = area(my_tri);
	if(!resp)printf("Nao e um triangulo\n");
	else printf("A area do triangulo e %.2lf\n", resp);
 return 0;
}
