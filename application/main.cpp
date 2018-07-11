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

#include "funcoes.h"
#include "excecoes.h"

#include <iostream>
using namespace std;

int main(){
	

	map<int,Anfibio > map_anfibios;
	map<int,Reptil > map_repteis;
	map<int,Mamifero > map_mamiferos;
	map<int,Ave > map_aves;
	map<int,Tratador > map_tratador;
	map<int,Veterinario > map_veterinario;

	/** Função que salva os animais. */
	initAnimais(map_anfibios, map_repteis, map_mamiferos, map_aves);

	/** Função que salva os funcionários. */
	initFuncionarios(map_tratador, map_veterinario);

	try{

		//string escolha = "";
		//validaEntrada(escolha);

		int opcao;
		int op_aux;
		do{
			cout << "1 - Cadastrar animal" << endl;
			cout << "2 - Cadastrar funcionario" << endl;
			cout << "3 - Consultar animal" << endl;
			cout << "4 - Consultar funcionario" << endl;
			cout << "5 - Excluir animal" << endl;
			cout << "6 - Excluir funcionario" << endl;
			cout << "0 - Sair" << endl;
			cin >> opcao;

			switch (opcao){
				case 1:
					cout << "Qual a classe do animal? ";
					cout << "1 - Mamifero" << endl;
					cout << "2 - Anfibio" << endl;
					cout << "3 - Reptil" << endl;
					cout << "4 - Ave" << endl;
					cin >> op_aux;
					switch(op_aux){
						case 1:
							cadastrar(map_mamiferos);
							break;
						case 2:
							cadastrar(map_anfibios);
							break;
						case 3:
							cadastrar(map_repteis);
							break;
						case 4:
							cadastrar(map_aves);
							break;
						default:
							cout << "Opcao invalida" << endl;
					}
					break;

				case 2:
					cout << "Qual o cargo?" << endl;
					cout << "1 - Veterinario" << endl;
					cout << "2 - Tratador" << endl;
					cin >> op_aux;
					switch(op_aux){
						case 1:
							cadastrar(map_veterinario);
							break;
						case 2:
							cadastrar(map_tratador);
							break;
						default:
							cout << "Opcao invalida" << endl;

					}
					break;

				case 3:
					cout << "Qual a classe do animal? ";
					cout << "1 - Mamifero" << endl;
					cout << "2 - Anfibio" << endl;
					cout << "3 - Reptil" << endl;
					cout << "4 - Ave Nativa" << endl;
					cout << "5 - Ave Exotica" << endl;
					cin >> op_aux;
					switch(op_aux){
						case 1:
							consultar(map_mamiferos);
							break;
						case 2:
							//consultar(&map_anfibios);
							break;
						case 3:
							//consultar(&map_repteis);
							break;
						case 4:
							//consultar(&map_avesNativas);
							break;
						case 5:
							//consultar(&map_avesExoticas);
							break;
						default:
							cout << "Opcao invalida" << endl;
					}
					break;

				case 4:
					cout << "Qual o cargo?" << endl;
					cout << "1 - Veterinario" << endl;
					cout << "2 - Tratador" << endl;
					cin >> op_aux;
					switch(op_aux){
						case 1:
							consultar(map_veterinario);
							break;
						case 2:
							//consultar(&map_tratador);
							break;
						default:
							cout << "Opcao invalida" << endl;

					}
					break;

				case 5:
					cout << "Qual a classe do animal? ";
					cout << "1 - Mamifero" << endl;
					cout << "2 - Anfibio" << endl;
					cout << "3 - Reptil" << endl;
					cout << "4 - Ave Nativa" << endl;
					cout << "5 - Ave Exotica" << endl;
					cin >> op_aux;
					switch(op_aux){
						case 1:
							//excluir(&map_mamiferos);
							break;
						case 2:
							//excluir(&map_anfibios);
							break;
						case 3:
							//excluir(&map_repteis);
							break;
						case 4:
							//excluir(&map_avesNativas);
							break;
						case 5:
							//excluir(&map_avesExoticas);
							break;
						default:
							cout << "Opcao invalida" << endl;
					}
					break;

				case 6:
					cout << "Qual o cargo?" << endl;
					cout << "1 - Veterinario" << endl;
					cout << "2 - Tratador" << endl;
					cin >> op_aux;
					switch(op_aux){
						case 1:
							//excluir(&map_veterinario);
							break;
						case 2:
							//excluir(&map_tratador);
							break;
						default:
							cout << "Opcao invalida" << endl;

					}
					break;

				case 0:
					opcao = 0;
					break;

				default:
					cout << "Opcao invalida" << endl;
			}


		}while(opcao != 0);
		
	}catch(ErroNaEntrada &e){
		cerr << e.what() << endl;
	}

	return 0;
}