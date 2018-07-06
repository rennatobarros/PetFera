/**
* @file reptil.h
* @brief Cabeçalho da subclasse reptil
* @author Antonio Marcos Oliveira
* @author Renato Barros de Lima Freitas
* @since 02/07/2018
* @date 06/07/2018
*/
#ifndef REPTIL_H
#define REPTIL_H

#include <iostream>

using namespace std;

/**
 * @brief      Class for reptil.
 */
class Reptil : public Animal
{
protected:
	bool venenoso;
	string tipoVeneno;

public:
	Reptil();
	~Reptil();

	bool getVenenoso();
	string getTipoVeneno();

	void setVenenoso(bool venenoso_);
	void setTipoVeneno(string tipoVeneno_);

	
};

#endif