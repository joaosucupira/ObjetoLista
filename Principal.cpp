#include"Principal.h"

Principal::Principal()
{

	Executar();
}

Principal::~Principal()
{
}

void Principal::Ifuncionarios()
{
	Charles.Inicializa(1, "Charles Simao");
	Xirley.Inicializa(2, "Xirley Xana");
	Xana.Inicializa(3, "Xana Prefeita");
	Uelinto.Inicializa(4, "Uelinto Ualter");

	RH.incluaFuncionario(&Charles);
	RH.incluaFuncionario(&Xirley);

	DP.incluaFuncionario(&Xana);
	DP.incluaFuncionario(&Uelinto);
}

void Principal::Isetores()
{
	RH.Inicializa(10, "RECURSOS HUMANOS");
	DP.Inicializa(11, "DEPARTAMENTO PESSOAL");
}

void Principal::listaFuncionarios()
{
	Charles.printFuncionario();
	Xirley.printFuncionario();
	Xana.printFuncionario();
	Uelinto.printFuncionario();
}

void Principal::listaSetores()
{
	RH.printSetor();
	RH.listeFuncionarios();

	DP.printSetor();
	DP.listeFuncionarios();
}

// Lista de comandos
void Principal::Executar()
{
	
	Isetores();
	Ifuncionarios();
	//listaFuncionarios();
	listaSetores();
}

