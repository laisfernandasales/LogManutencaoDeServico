#include <iostream>
#include <string>
#include "ColecaoHibrida.h"
#include "Colecao.h"
#include "Servico.h"
#include"Veiculo.h"
#include "Motociclo.h"
#include "Automovel.h"
#pragma once
class Proprietario {
	string nome;
	int id;
	ColecaoHibrida <Veiculo*> veiculos; // implementacao automoveis e motociclos 
public:
	Proprietario(string n, int id);
	bool addVeiculo(Veiculo* v);
	int getId() const;
	string getNomeproprietario() const;
	void printVeiculo() const;
	bool operator<(const Proprietario& a) const;
};