/**
* @file anfibio.h
* @brief Cabeçalho da classe anfibio
* @author Antonio Marcos Oliveira
* @author Renato Barros de Lima Freitas
* @since 02/07/2018
* @date 06/07/2018
*/
#ifndef ANFIBIO_H
#define ANFIBIO_H

#include <iostream>

using namespace std;

/**
 * @brief      Class for anfibio.
 */
class Anfibio
{
protected:
	int totalMudas;
	string ultimaMuda;

public:
	Anfibio();
	~Anfibio();

	int getTotalMudas();
	string getUltimaMuda();

	void setTotalMudas(int totalMudas_);
	void setUltimaMuda(string ultimaMuda_);
	
};

#endif