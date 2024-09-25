#include <iostream>
#include <string>
#include "Colecao.h"
// #include "Veiculo.h"
#pragma once
class Veiculo;
using namespace std;
class Servico
{
	int data;
	string tipo_de_servico;
	float custo;
	string observacoes_procedimentos;
	Veiculo* veiculo;
public:
	Servico(int dat, string tp_servico, float c, string obs_proc);
	bool operator<(const Servico& a) const;
	int getData() const;
	string getTipo_De_Servico() const;
	float getCusto() const;
	string getObs() const;
	void setVeiculo(Veiculo* v);
};