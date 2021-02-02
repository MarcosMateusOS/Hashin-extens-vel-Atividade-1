 #include <iostream>
 #include <fstream>
 #include <string>
 #include <map>
 #include "Balde.h"

using namespace std;

 Balde::Balde(int M){
     
     this->M=M;

 }

 Balde::~Balde(){}


void Balde::setTamanho(int M){

    this->M=M;
}

void Balde::insere_chave_balde(string ch){

    if(verifica_balde_cheio()){
        cout<<"Balde cheio"<<endl;
    }else{

        balde.push_back(ch);
        cout<<"Inserindo chave: "<< ch<<endl;

    }

 }

 bool Balde::verifica_balde_cheio(){

     if(balde.size()==M){
         return true;
     }else
     {
         return false;
     }
     
 }

bool Balde::busca_pseudoch(string ch){

    for(int i=0;i<balde.size();i++){

            if(balde[i]==ch){
                return 1;
            }
    }
    return 0;
}

 //inserir chave no balde
 //verficar se esta cheio
 //verifica profundidade do balde d --- numeros de d bits inicias
 
 //Iserir no balde utilizando o "map"

