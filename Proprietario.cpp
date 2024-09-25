#include "Proprietario.h"

Proprietario::Proprietario(string n, int i) : nome(n), id(i) {}

bool Proprietario::addVeiculo(Veiculo* v)
{
    return veiculos.insert(v);
}

/*bool Proprietario::addVeiculo_motociclo(const string& mar, const string& mod, const int& an, const int& mat, int num_rod) {
    // Cria um objeto Motociclo
    Veiculo* v = new Motociclo(mar, mod, an, mat, num_rod);

    // Adiciona o motociclo à coleção de veículos
    return veiculos.insert(v);
}*/

bool Proprietario::operator<(const Proprietario& a) const {
    return id < a.id;
}

string Proprietario::getNomeproprietario() const {
    return nome;
}
int Proprietario::getId() const {
    return id;
}
void Proprietario::printVeiculo() const {
    cout << "---- Lista de Veiculos ----- " << endl;
    cout << "Do proprietário " << nome << endl;
    ColecaoHibrida<Veiculo*>::iterator it;
    for (it = veiculos.begin(); it != veiculos.end(); ++it) {
        (**it).print();
    }
}