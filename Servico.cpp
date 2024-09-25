#include "Servico.h"

Servico::Servico(int dat, string tp_servico, float c, string obs_proc) {
    data = dat;
    tipo_de_servico = tp_servico;
    custo = c;
    observacoes_procedimentos = obs_proc;
}
bool Servico::operator<(const Servico& a) const {
    return data < a.data;
}
int Servico::getData() const {
    return data;
}
string Servico::getTipo_De_Servico() const {
    return tipo_de_servico;
}
float Servico::getCusto() const {
    return custo;
}

string Servico::getObs() const {
    return observacoes_procedimentos;
}
void Servico::setVeiculo(Veiculo* v) {
    veiculo = v;
}

