#pragma once
class Funcionario;

class Setor
{

private:
	int id;
	char nome[70];

	Funcionario* pf_first;
	Funcionario* pf_atual;


public:
	Setor();
	Setor(int i, const char* n);
	~Setor();
	void Inicializa(int i, const char* n ="");

	void setId(int i);
	int getId();

	void setNome(const char* n ="");
	char* getNome();

	void incluaFuncionario(Funcionario* pf);
	void listeFuncionarios();

	void printSetor();
};

