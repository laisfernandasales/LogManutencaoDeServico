#include "Veiculo.h"

using namespace std;


Veiculo::Veiculo(const string& mar, const string& mod, const int& an, const int& mat)
    : marca(mar), modelo(mod), ano_fabrico(an), matricula(mat) {}

bool Veiculo::operator<(const Veiculo& a) const {
    return matricula < a.matricula;
}
//bool Veiculo::addServico(int data, string tipo_de_servico, float custo, string observacoes_procedimentos) {
  //  Servico s(data, tipo_de_servico, custo, observacoes_procedimentos);
    //servicos.insert(s);
//}

void Veiculo::print() {
    cout << "Marca: " << marca << endl;
    cout << "Modelo: " << modelo << endl;
    cout << "Ano de Fabrico: " << ano_fabrico << endl;
    cout << "Matricula: " << matricula << endl;
}