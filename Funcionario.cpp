#include"Funcionario.h"

Funcionario::Funcionario() { Inicializa(-1, ""); }
Funcionario::Funcionario(int i, const char* n) { Inicializa(i, n); }
Funcionario::~Funcionario() 
{
	pSetor = NULL;
	p_next = NULL;
}
void Funcionario::Inicializa(int i, const char* n) 
{ 
	setId(i); 
	setNome(n); 
	pSetor = NULL;
	p_next = NULL;
}


void Funcionario::setId(int i) { id = i; }
int Funcionario::getId() { return id; }

void Funcionario::setNome(const char* n) { strcpy_s(nome, n); }
char* Funcionario::getNome() { return nome; }

void Funcionario::setSetor(Setor* ps) { pSetor = ps; }
Setor* Funcionario::getSetor() { return pSetor; }

void Funcionario::printFuncionario()
{
	cout << "ID: " << getId() << "; NOME: " << getNome() << "." << endl;
}