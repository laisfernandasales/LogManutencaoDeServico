#include "Automovel.h"

Automovel::Automovel(const string& mar, const string& mod, int an, int mat, int num_rodas) : Veiculo(mar, mod, an, mat) {
    numero_de_portas = num_rodas;
}

void Automovel::print() {
    Veiculo::print();
    cout << "O numero de portas eh : " << numero_de_portas << endl;
    cout << "-------------------------------" << endl;
}
