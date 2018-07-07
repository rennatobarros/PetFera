/**
* @file mamifero.h
* @brief Cabeçalho da subclasse mamifero
* @author Antonio Marcos Oliveira
* @author Renato Barros de Lima Freitas
* @since 02/07/2018
* @date 06/07/2018
*/
#ifndef MAMIFERO_H
#define MAMIFERO_H

#include <iostream>
#include "animal.h"


using namespace std;

/**
 * @brief      Class for mamifero.
 */
class Mamifero : public Animal
{
protected:
	string corPelo;
public:
	Mamifero();
	~Mamifero();

	string getCorPelo();

	void setCorPelo(string corPelo_);
	
};

#endif