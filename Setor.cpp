#include"stdafx.h"
#include"Setor.h"
#include"Funcionario.h"

Setor::Setor(){ Inicializa(-1, ""); }
Setor::Setor(int i, const char* n) { Inicializa( i, n); }
Setor::~Setor() 
{
	pf_atual = NULL;
	pf_first = NULL;
}
void Setor::Inicializa(int i, const char* n) 
{ 
	setId(i); 
	setNome(n); 
	pf_atual = NULL;
	pf_first = NULL;
}


void Setor::setId(int i) { id = i; }
int Setor::getId() { return id; }

void Setor::setNome( const char* n) { strcpy_s(nome, n); }
char* Setor::getNome() { return nome; }

void Setor::incluaFuncionario(Funcionario* pf) 
{
	if( pf_first == NULL ) 
	{
		pf_first = pf;
		pf_atual = pf;
	}
	else 
	{
		// PONTEIRO ATUAL ENCADEANDO O ARGUMENTO NO NEXT
		pf_atual->p_next = pf;
		pf_atual = pf;
	}
}
void Setor::listeFuncionarios() 
{
	Funcionario* pAux;

	pAux = pf_first;

	while (pAux != NULL)
	{
		cout << pAux->getId() << " - " << pAux->getNome() << endl;
		pAux = pAux->p_next;
	}
	cout << endl;
}

void Setor::printSetor()
{
	cout << getId() << " - " << "SETOR DE " << getNome() << endl;
}
