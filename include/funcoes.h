/**
 * @file funcionario.h
 * @brief Arquivo .h com as definições dos métodos utilizados no sistema.
 */
#ifndef FUNCOES_H
#define FUNCOES_H

#include <iostream>
using namespace std;

#include <map>
#include <fstream>
#include <sstream>
#include <string>

#include "animal.h"

#include "funcionario.h"

#include "excecoes.h"

void validaEntrada(string opcao);

void initAnimais(map<int, Anfibio> anfibios, map<int, Reptil> repteis, map<int, Mamifero> mamiferos, map<int, Ave> aves);

void initFuncionarios(map<int, Tratador> tratadores, map<int, Veterinario> veterinarios);

/**template <typename T>
void cadastrar(map<int,T> * map){
	T new_cadastro;
	std::cin >> new_cadastro;
	map->emplace(new_cadastro.getId(), new_cadastro);
}*/

#endif