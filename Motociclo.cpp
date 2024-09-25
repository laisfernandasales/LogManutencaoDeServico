#include "Motociclo.h"

Motociclo::Motociclo(const string& mar, const string& mod, int an, int mat, int num_rodas) : Veiculo(mar, mod, an, mat) {
    numero_de_rodas = num_rodas;
}

void Motociclo::print() {
    Veiculo::print();
    cout << "O numero de rodas eh :" << numero_de_rodas << endl;
    cout << "-------------------------------" << endl;

}