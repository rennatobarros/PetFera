/**
* @file animal.h
* @brief Cabeçalho da classe animal
* @author Antonio Marcos Oliveira
* @author Renato Barros de Lima Freitas
* @since 02/07/2018
* @date 06/07/2018
*/
#ifndef ANIMAL_H
#define ANIMAL_H

#include <iostream>
using namespace std;

#include <string>

/**
 * @brief      Class for animal.
 */
class Animal
{
protected:
	int id;
	float tamanho;
	string classe;
	string nome;
	string cientifico;
	string dieta;
	string batismo;
	char sexo;
	short veterinario;
	short tratador;


public:
	Animal();
	virtual ~Animal() = 0;
	
	int getId();
	float getTamanho();
	string getClasse();
	string getNome();
	string getCientifico();
	string getDieta();
	string getBatismo();
	char getSexo();
	short getVeterinario();
	short getTratador();

	void setId(int id_);
	void setTamanho(float tamanho_);
	void setClasse(string classe_);
	void setNome(string nome_);
	void setCientifico(string cientifico_);
	void setDieta(string dieta_);
	void setBatismo(string batismo_);
	void setSexo(char sexo_);
	void setVeterinario(short veterinario_);
	void setTratador(short tratador_);
	

};

#endif