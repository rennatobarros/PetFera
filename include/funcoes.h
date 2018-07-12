/**
 * @file funcoes.h
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

void initAnimais(map<int, Anfibio> anfibios, map<int, Reptil> repteis, map<int, Mamifero> mamiferos, map<int, AveNativa> aveNativa, map<int, AveExotica> aveExotica);

void initFuncionarios(map<int, Tratador> tratadores, map<int, Veterinario> veterinarios);

template <typename T>
void cadastrar(map<int,T> map){
	T new_cadastro;
	cin >> new_cadastro;
	map.insert(pair<int, T> (new_cadastro.getId(), new_cadastro));
	cout << "Cadastrado com sucesso!!!" << endl;
}

template<typename T >
bool consultar(map<int, T> map){
	int id;
	cout << "Digite o ID a ser procurado: ";
	cin >> id;
	auto it = map.find(id);
	if(it == map.end()){
		cout << "Não encontrado." << endl;
		return false;
	}
	cout << it->second;
	return true;

}	

#endif