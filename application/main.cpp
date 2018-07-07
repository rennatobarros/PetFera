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

#include <string>
#include <map>
#include <fstream>
#include <sstream>
#include <string>

#include "funcoes.h"
#include "excecoes.h"

int main(){
	/** Função que inicia todo o programa. */
	init();

	/** Arquivos .csv a serem lidos. */
	ifstream animais;
	ifstream funcionarios;

	map<int,Anfibio> map_anfibios;
	map<int,Reptil> map_repteis;
	map<int,Mamifero> map_mamiferos;
	map<int,Ave> map_aves;
	map<int,Tratador> map_tratador;
	map<int,Veterinario> map_veterinario;

	/** Tratando possiveis erros na abertura de arquivos. */
	try{
		animais.open("files/animais.csv");
	}catch(FalhaNoArquivo &f){
		cerr << f.what() << endl;
	}

	try{
		funcionarios.open("files/funcionarios.csv");
	}catch(FalhaNoArquivo &f){
		cerr << f.what() << endl;
	}

	/** String para armazenar cada linha do arquivo. */
	string ler_linha;

	while(getline(animais, ler_linha)){
		string id;
		string tamanho;
		string classe;
		string nome;
		string cientifico;
		string dieta;
		string batismo;
		string sexo;
		string vet;
		string tratador;

		stringstream ss(ler_linha);

		getline(ss, id, ';');
		getline(ss, classe, ';');
		getline(ss, nome, ';');
		getline(ss, cientifico, ';');
		getline(ss, sexo, ';');
		getline(ss, tamanho, ';');
		getline(ss, dieta, ';');
		getline(ss, vet, ';');
		getline(ss, tratador, ';');
		getline(ss, batismo, ';');
		

		if (classe == "Amphibia"){
			Anfibio animal;

			animal.setId(stoi(id));
			animal.setClasse(classe);
			animal.setNome(nome);
			animal.setCientifico(cientifico);
			animal.setSexo(sexo);
			animal.setTamanho(stof(tamanho));
			animal.setDieta(dieta);
			animal.setVeterinario(stoi(vet));
			animal.setTratador(stoi(tratador));
			animal.setBatismo(batismo);

			map_anfibios->emplace(stoi(id), animal);
			
		}else if(classe == "Reptilia"){
			Reptil animal;

			animal.setId(stoi(id));
			animal.setClasse(classe);
			animal.setNome(nome);
			animal.setCientifico(cientifico);
			animal.setSexo(sexo);
			animal.setTamanho(stof(tamanho));
			animal.setDieta(dieta);
			animal.setVeterinario(stoi(vet));
			animal.setTratador(stoi(tratador));
			animal.setBatismo(batismo);

			map_repteis->emplace(stoi(id), animal);

		}else if(classe == "Aves"){
			Ave animal;

			animal.setId(stoi(id));
			animal.setClasse(classe);
			animal.setNome(nome);
			animal.setCientifico(cientifico);
			animal.setSexo(sexo);
			animal.setTamanho(stof(tamanho));
			animal.setDieta(dieta);
			animal.setVeterinario(stoi(vet));
			animal.setTratador(stoi(tratador));
			animal.setBatismo(batismo);

			map_aves->emplace(stoi(id), animal);
		
		}else if(classe == "Mammalia"){
			Mamifero animal;

			animal.setId(stoi(id));
			animal.setClasse(classe);
			animal.setNome(nome);
			animal.setCientifico(cientifico);
			animal.setSexo(sexo);
			animal.setTamanho(stof(tamanho));
			animal.setDieta(dieta);
			animal.setVeterinario(stoi(vet));
			animal.setTratador(stoi(tratador));
			animal.setBatismo(batismo);

			map_mamiferos->emplace(stoi(id), animal);
		}

	}





	return 0;
}