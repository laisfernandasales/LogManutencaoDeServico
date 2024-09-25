#include <iostream>
#include <string>
#include "ColecaoHibrida.h"
#include "Colecao.h"
#include "Veiculo.h"
#include "Servico.h"
#include "Proprietario.h"
#pragma once
using namespace std;
class LogServico {
	ColecaoHibrida<Veiculo*> veiculos;
	Colecao <Servico> servicos;
	Colecao <Proprietario> proprietarios;
public:
	bool ResgistrarServicos(int, string, float, string);
	bool RegistrarProprietario(string, int);
	bool RegistrarAutomovel(const string& mar, const string& mod, int an, int mat, int nportas, int idProprietario);
	bool RegistrarMotociclo(const string& mar, const string& mod, int an, int mat, int nrodas, int idProprietario);
	void printServicos();
	void PrintVeiculos(int id);
	Veiculo* findVeiculo(int mat);
	Proprietario* findProprietario(int idProprietario);
};