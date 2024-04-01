#pragma once
#include"stdafx.h"
#include"Funcionario.h"
#include"Setor.h"

class Principal
{

private:

	// Setores
	Setor RH;
	Setor DP;

	// Funcionarios
	Funcionario Charles;
	Funcionario Xirley;
	Funcionario Xana;
	Funcionario Uelinto;

public:
	Principal();
	~Principal();
	void Executar();

	// Inicializadores
	void Ifuncionarios();
	void Isetores();

	// Listadores
	void listaFuncionarios();
	void listaSetores();

};

