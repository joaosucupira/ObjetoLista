#pragma once
#include"stdafx.h"
#include"Setor.h"

class Funcionario
{
public:
	Funcionario();
	Funcionario(int i, const char* n);
	~Funcionario();

	Funcionario* p_next;

	void Inicializa(int i, const char* n);

	// id
	void setId(int i);
	int getId();

	// nome
	void setNome(const char* n);
	char* getNome();

	// setor
	void setSetor(Setor* ps);
	Setor* getSetor();

	// cout
	void printFuncionario();

private:
	int id;
	char nome[50];
	Setor* pSetor;

};

