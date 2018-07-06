/**
* @file ave.h
* @brief Cabeçalho da subclasse ave
* @author Antonio Marcos Oliveira
* @author Renato Barros de Lima Freitas
* @since 02/07/2018
* @date 06/07/2018
*/
#ifndef AVE_H
#define AVE_H

#include <iostream>

using namespace std;

/**
 * @brief      Class for ave.
 */
class Ave : public Animal
{
protected:
	int tamanhoBico;
	int envergadura;

public:
	Ave();
	~Ave();

	int getTamanhoBico();
	int getEnvergadura();

	void setTamanhoBico(int tamanhoBico_);
	void setEnvergadura(int envergadura_);
	
};

#endif