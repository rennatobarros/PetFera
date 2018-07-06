/**
* @file animal_silvestre.h
* @brief Cabeçalho da classe animal silvestre
* @author Antonio Marcos Oliveira
* @author Renato Barros de Lima Freitas
* @since 02/07/2018
* @date 06/07/2018
*/
#ifndef ANIMAL_SILVESTRE_H
#define ANIMAL_SILVESTRE_H

#include <iostream>

using namespace std;

/**
 * @brief      Classe para anival silvestre
 */
class AnimalSilvestre{
	public:
		AnimalSilvestre();
		
		/** Construtor parametrizado. */
		AnimalSilvestre(string _ibama);
		~AnimalSilvestre();

		string getIbama();
		void setIbama(string);

	protected:
		string ibama;
	
};

#endif