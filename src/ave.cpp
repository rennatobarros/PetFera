/**
* @file ave.cpp
* @brief Implementação da subclasse ave
* @author Antonio Marcos Oliveira
* @author Renato Barros de Lima Freitas 
* @since 02/07/2018
* @date 06/07/2018
*/
#include "ave.h"

/**
 * @brief      Constructs the object.
 */
Ave::Ave(){}

/**
 * @brief      Destroys the object.
 */
Ave::~Ave(){}

/**
 * @brief      Gets the tamanho bico.
 *
 * @return     The tamanho bico.
 */
int 
Ave::getTamanhoBico()
{
	return tamanhoBico;
}

/**
 * @brief      Gets the envergadura.
 *
 * @return     The envergadura.
 */
int 
Ave::getEnvergadura()
{
	return envergadura;
}

/**
 * @brief      Sets the tamanho bico.
 *
 * @param[in]  tamanhoBico_  The tamanho bico
 */
void 
Ave::setTamanhoBico(int tamanhoBico_)
{
	tamanhoBico = tamanhoBico_;
}
	
/**
 * @brief      Sets the envergadura.
 *
 * @param[in]  envergadura_  The envergadura
 */
void 
Ave::setEnvergadura(int envergadura_)
{
	envergadura = envergadura_;
}

