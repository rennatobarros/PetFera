/**
* @file reptil.cpp
* @brief Implementação da subclasse reptil
* @author Antonio Marcos Oliveira
* @author Renato Barros de Lima Freitas 
* @since 02/07/2018
* @date 06/07/2018
*/
#include "reptil.h"

/**
 * @brief      Constructs the object.
 */
Reptil::Reptil(){}

/**
 * @brief      Destroys the object.
 */
Reptil::~Reptil(){}

/**
 * @brief      Gets the venenoso.
 *
 * @return     The venenoso.
 */
bool 
Reptil::getVenenoso()
{
	return venenoso;
}

/**
 * @brief      Gets the tipo veneno.
 *
 * @return     The tipo veneno.
 */
string 
Reptil::getTipoVeneno()
{
	return tipoVeneno;
}

/**
 * @brief      Sets the venenoso.
 *
 * @param[in]  venenoso_  The venenoso
 */
void 
Reptil::setVenenoso(bool venenoso_)
{
	venenoso = venenoso_;
}

/**
 * @brief      Sets the tipo veneno.
 *
 * @param[in]  tipoVeneno_  The tipo veneno
 */
void 
Reptil::setTipoVeneno(string tipoVeneno_)
{
	tipoVeneno = tipoVeneno;
}
