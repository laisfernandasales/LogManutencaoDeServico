#include <iostream>
#include "LogServico.h"
using namespace std;
int main() {
    LogServico l;
    l.RegistrarProprietario("joao", 1);
    l.ResgistrarServicos(2023, "Troca de oleo", 50.0, "Observacoes");
    // l.RegistrarMotociclo("Marca", "Modelo", 2021, 1234, 4, 1);
    l.RegistrarAutomovel("MITSUBISHI", "M12", 2011, 1233, 2, 1);
    l.RegistrarAutomovel("JAC", "T6", 2021, 1234, 4, 1);
    l.PrintVeiculos(1);
    l.printServicos();

    LogServico l2;
    l2.RegistrarProprietario("matheus ", 2);
    l2.RegistrarMotociclo("Honda", "CG160TITAN", 2021, 1234, 2, 2);
    l2.RegistrarMotociclo("BMW", "F650CS", 2021, 1234, 2, 2);
    l2.PrintVeiculos(2);
    return 0;
}