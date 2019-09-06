#ifndef GERENCIAR_H
#define GERENCIAR_H


#include <iostream>
#include <vector>
#include <string>
#include <iterator>
#include <algorithm>


#include "automovel.h"

enum statusConc
{
	inexistente = 0,
	existe = 1,
	carro_cadastrado = 2
};

class gerenciar
{
private: 
	vector <concessionaria*> listaLoja;

public:
	gerenciar();
	~gerenciar();

	concessionaria criarconcessionaria();

	void cadastrarCarro();
	bool estoques ();

};

#endif