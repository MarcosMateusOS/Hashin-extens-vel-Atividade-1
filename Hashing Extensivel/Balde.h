#include <iostream>
#include <fstream>
#include <string>
#include <cstdlib>
#include <chrono>
#include <sstream>
#include <vector>


using namespace std;

class Balde
{
private:
    
    //Tamanho Balde
    int M;
    //Pseudo Chave
    string psCh;
    //Balde
    vector<string> balde;
    
public:
    Balde(int M);
    Balde();
    ~Balde();
    void setTamanho(int M);
    bool verifica_balde_cheio();
    bool verifica_espaco_balde();
    void insere_chave_balde(string psch);
    bool busca_pseudoch(string psch);
    string remove_chave_balde();
    

};




