#include "LogServico.h"

bool LogServico::ResgistrarServicos(int da, string tp_servic, float cus, string d) {
	Servico s(da, tp_servic, cus, d);
	return servicos.insert(s);
}

bool LogServico::RegistrarProprietario(string n, int id) {
	Proprietario p(n, id);
	return proprietarios.insert(p);
}

bool LogServico::RegistrarMotociclo(const string& mar, const string& mod, int an, int mat, int nrodas, int idProprietario)
{
	Veiculo* v = new Motociclo(mar, mod, an, mat, nrodas);
	Proprietario* p = findProprietario(idProprietario);
	if (p != NULL)
		p->addVeiculo(v);
	return veiculos.insert(v);
}
bool LogServico::RegistrarAutomovel(const string& mar, const string& mod, int an, int mat, int nportas, int idProprietario)
{
	Veiculo* v = new Automovel(mar, mod, an, mat, nportas);
	Proprietario* p = findProprietario(idProprietario);
	if (p != NULL)
		p->addVeiculo(v);
	return veiculos.insert(v);
}
/*void LogServico::printServicos() {
	Colecao<Servico>::iterator it;
	for (it = servicos.begin();it != servicos.end();it++) {
		cout << "Data : " << it->getData() << endl;
		cout << "Tipo de Servico " << it->getTipo_De_Servico() << endl;
		cout << "Observacoes / Procedimentos " << it->getObs() << endl;
		cout << "Custo : " << it->getCusto() << endl;
	}
}*/
void LogServico::printServicos() {
	for (const Servico& servico : servicos) {
		cout << "Data: " << servico.getData() << endl;
		cout << "Tipo de Servico: " << servico.getTipo_De_Servico() << endl;
		cout << "Observacoes / Procedimentos: " << servico.getObs() << endl;
		cout << "Custo: " << servico.getCusto() << endl;
		cout << endl;
	}
}

Veiculo* LogServico::findVeiculo(int mat)
{
	Veiculo* v = new Veiculo("", "", 0, mat);
	return veiculos.find(v);
}

Proprietario* LogServico::findProprietario(int idProprietario)
{
	Proprietario p("", idProprietario);
	return proprietarios.find(p);
}

void LogServico::PrintVeiculos(int id)
{
	Proprietario* p = findProprietario(id);
	cout << "Lista de veiculos " << endl;
	if (p != NULL) {
		p->printVeiculo();
	}
}
