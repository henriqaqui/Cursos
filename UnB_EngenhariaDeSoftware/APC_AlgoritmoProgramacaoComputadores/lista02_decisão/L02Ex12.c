#include <stdio.h>

int main(){

    int cod, nom, sig, cap, reg;

    printf("Este software imprime dados de um Estado baseado em seu codigo.\n\nDigite o codigo:\n");
    scanf("%d", &cod);

        switch (cod){
            case 1:
                nom = "ACRE";
                sig = "AC";
                cap = "RIO BRANCO";
                reg = "NORTE";
                break;
            case 2:
                nom = "ALAGOAS";
                sig = "AL";
                cap = "MACEIO";
                reg = "NORDESTE";
                break;
            case 3:
                nom = "AMAPA";
                sig = "AP";
                cap = "MACAPA";
                reg = "NORTE";
                break;
            case 4:
                nom = "AMAZONAS";
                sig = "AM";
                cap = "MANAUS";
                reg = "NORTE";
                break;
            case 5:
                nom = "BAHIA";
                sig = "BA";
                cap = "SALVADOR";
                reg = "NORDESTE";
                break;
            case 6:
                nom = "CEARA";
                sig = "CE";
                cap = "FORTALEZA";
                reg = "NORDESTE";
                break;
            case 7:
                nom = "ESPIRITO SANTO";
                sig = "ES";
                cap = "VITORIA";
                reg = "SUDESTE";
                break;
            case 8:
                nom = "GOIAS";
                sig = "GO";
                cap = "GOIANIA";
                reg = "CENTRO-OESTE";
                break;
            case 9:
                nom = "MARANHAO";
                sig = "MA";
                cap = "SAO LUIS";
                reg = "NORDESTE";
                break;
            case 10:
                nom = "MATO GROSSO";
                sig = "MT";
                cap = "CUIABA";
                reg = "CENTRO-OESTE";
                break;
            case 11:
                nom = "MATO GROSSO DO SUL";
                sig = "MS";
                cap = "CAMPO GRANDE";
                reg = "CENTRO-OESTE";
                break;
            case 12:
                nom = "MINAS GERAIS";
                sig = "MG";
                cap = "BELO HORIZONTE";
                reg = "SUDESTE";
                break;
            case 13:
                nom = "PARA";
                sig = "PA";
                cap = "BELEM";
                reg = "NORTE";
                break;
            case 14:
                nom = "PARAIBA";
                sig = "PB";
                cap = "JOAO PESSOA";
                reg = "NORDESTE";
                break;
            case 15:
                nom = "PARANA";
                sig = "PR";
                cap = "CURITIBA";
                reg = "SUL";
                break;
            case 16:
                nom = "PERNAMBUCO";
                sig = "PE";
                cap = "RECIFE";
                reg = "NORDESTE";
                break;
            case 17:
                nom = "PIAUI";
                sig = "PI";
                cap = "TERESINA";
                reg = "NORDESTE";
                break;
            case 18:
                nom = "RIO DE JANEIRO";
                sig = "RJ";
                cap = "RIO DE JANEIRA";
                reg = "SUDESTE";
                break;
            case 19:
                nom = "RIO GRANDE DO NORTE";
                sig = "RN";
                cap = "NATAL";
                reg = "NORDESTE";
                break;
            case 20:
                nom = "RIO GRANDE DO SUL";
                sig = "RS";
                cap = "PORTO ALEGRE";
                reg = "SUL";
                break;
            case 21:
                nom = "RONDONIA";
                sig = "RO";
                cap = "PORTO VELHO";
                reg = "NORTE";
                break;
            case 22:
                nom = "RORAIMA";
                sig = "SC";
                cap = "FLORIANOPOLIS";
                reg = "SUL";
                break;
            case 23:
                nom = "SANTA CATARINA";
                sig = "SC";
                cap = "FLORIANOPOLIS";
                reg = "SUL";
                break;
            case 24:
                nom = "SAO PAULO";
                sig = "SP";
                cap = "SAO PAULO";
                reg = "SUDESTE";
                break;
            case 25:
                nom = "SERGIPE";
                sig = "SE";
                cap = "ARACAJU";
                reg = "NORDESTE";
                break;
            case 26:
                nom = "TOCANTINS";
                sig = "TO";
                cap = "PALMAS";
                reg = "NORTE";
                break;
            case 27:
                nom = "DISTRITO FEDERAL";
                sig = "DF";
                cap = "BRASILIA";
                reg = "ENTRO-OESTE";
                break;
            }

        if (cod <=0 || cod > 27)
            printf("INEXISTENTE");
        else
            printf("Nome: %s\nSigla: %s\nCapital: %s\nRegiao: %s\n", nom, sig, cap, reg);
        return 0;
}
