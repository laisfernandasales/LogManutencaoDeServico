#include <iostream>
#include <string>
#include "Veiculo.h"
#pragma once
using namespace std;
class Automovel : public Veiculo {
    int numero_de_portas;
public:
    Automovel(const string& mar, const  string& od, int an, int mat, int num_portas);
    void print();
};