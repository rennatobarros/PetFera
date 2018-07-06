/**
* @file mamifero.cpp
* @brief Implementação da subclasse mamifero
* @author Antonio Marcos Oliveira
* @author Renato Barros de Lima Freitas 
* @since 02/07/2018
* @date 06/07/2018
*/
#include "mamifero.h"

/**
 * @brief      Constructs the object.
 */
Mamifero::Mamifero(){}

/**
 * @brief      Destroys the object.
 */
Mamifero::~Mamifero(){}

/**
 * @brief      Gets the cor pelo.
 *
 * @return     The cor pelo.
 */
string 
Mamifero::getCorPelo()
{
	return corPelo;
}

/**
 * @brief      Sets the cor pelo.
 *
 * @param[in]  corPelo_  The cor pelo
 */
void 
Mamifero::setCorPelo(string corPelo_)
{
	corPelo = corPelo_;
}