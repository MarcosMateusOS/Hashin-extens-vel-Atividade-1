#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <time.h>
#include <iostream>
#include <vector>
#include "Balde.h"
using namespace std;

//g++ -o hashing -O3 *.cpp    -> compila
//./hashing  -> executa oq ta compilado

//Fase 1:
// 2)Implementar um "Tad" de balde
// 	-Armazenar pseudo-chaves("String")
	
// 3)Implementar um "Tad" para diretorio:
// 	-Inserir
// 	-Buscar
// 	-Dividir baldes
// 	-Duplica diretorio
	


int main() {

    cout<<"Teste MAIN "<<endl;

    Balde *BaldeTeste=new Balde(0);
    BaldeTeste->setTamanho(5);

    string vetStringTeste[] = {"1100","1111","1110","1010","1100","0101","1111","0000"};

    string vetStringTeste1[] = {"1100","1111","0001"};

    for(int i=0;i<7;i++){

        cout<<" "<<vetStringTeste[i]<<endl;
        BaldeTeste->insere_chave_balde(vetStringTeste[i]);

    }
    cout<<"--------------------------------------"<<endl;
    for(int i=0;i<3;i++){

        if(BaldeTeste->busca_pseudoch(vetStringTeste1[i])){
            cout<<"Chave encontrada: "<< vetStringTeste1[i]<<endl;

        }else
        cout<<"Chave N encontrada: "<< vetStringTeste1[i]<<endl;
    }


    

    return 0;
}