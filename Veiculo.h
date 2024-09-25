#pragma once
#include <iostream>
#include <string>
#include "Colecao.h"
#include "Servico.h"
using namespace std;
class Veiculo {
protected:
	string marca;
	string modelo;
	int ano_fabrico;
	int matricula;
	Colecao <Servico> servicos;
public:
	Veiculo(const string& mar, const string& mod, const int& an, const int& mat);
	virtual bool operator<(const Veiculo& a) const;
	// bool addServico(int data, string tipo_de_servico, float custo, string observacoes_procedimentos);
	virtual void print();
};