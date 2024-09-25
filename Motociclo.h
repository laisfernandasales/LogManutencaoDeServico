#include <iostream>
#include <string>
#include "Veiculo.h"
#pragma once
using namespace std;
class Motociclo : public Veiculo {
    int numero_de_rodas;
public:
    Motociclo(const string& mar, const  string& od, int an, int mat, int num_rodas);
    void print();
};