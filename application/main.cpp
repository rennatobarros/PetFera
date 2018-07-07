/** 
 * @mainpage PetFera
 * @author Renato Barros de Lima Freitas
 * @author Antonio Marcos de Oliveira
 * @date 07/07/2018
 * @version 1.0
 *
 * @file application/main.cpp
 * @brief Arquivo principal do programa
*/

#include <iostream>
using namespace std;

#include "funcoes.h"
#include "excecoes.h"

int main(){
	/** Arquivos .csv a serem lidos. */
	ifstream animais;
	ifstream funcionarios;

	map<int,Anfibio> map_anfibios;
	map<int,Reptil> map_repteis;
	map<int,Mamifero> map_mamiferos;
	map<int,Ave> map_aves;
	map<int,Tratador> map_tratador;
	map<int,Veterinario> map_veterinario;

	/** Função que salva os animais. */
	initAnimais(&animais, &map_anfibios, &map_repteis, &map_mamiferos, &map_aves);

	/** Função que salva os funcionários. */
	initFuncionarios(&funcionarios, &map_tratador, &map_veterinario);

	try{
		while(opcao != 0){
			cout << "1 - Cadastrar animal" << endl;
			cout << "2 - Cadastrar funcionario" << endl;
			cout << "3 - Consultar animal" << endl;
			cout << "4 - Consultar funcionario" << endl;
			cout << "5 - Excluir animal" << endl;
			cout << "6 - Excluir funcionario" << endl;
			cout << "0 - Sair" << endl;
			cin >> opcao;

		}
	}catch(ErroNaEntrada &e){
		cerr << e.what() << endl;
	}

	return 0;
}