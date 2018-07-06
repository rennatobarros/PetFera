/**
* @file anfibio.cpp
* @brief Implementação da subclasse anfibio
* @author Antonio Marcos Oliveira
* @author Renato Barros de Lima Freitas 
* @since 02/07/2018
* @date 06/07/2018
*/
#include "anfibio.h"

/**
 * @brief      Constructs the object.
 */
Anfibio::Anfibio(){}

/**
 * @brief      Destroys the object.
 */
Anfibio::~Anfibio(){}

/**
 * @brief      Gets the total mudas.
 *
 * @return     The total mudas.
 */
int
Anfibio::getTotalMudas()
{
	return totalMudas;
}

/**
 * @brief      Gets the ultima muda.
 *
 * @return     The ultima muda.
 */
string
Anfibio::getUltimaMuda()
{
	return ultimaMuda;
}

/**
 * @brief      Sets the total mudas.
 *
 * @param[in]  totalMudas_  The total mudas
 */
void
Anfibio::setTotalMudas(int totalMudas_)
{
	totalMudas = totalMudas_;
}

/**
 * @brief      Sets the ultima muda.
 *
 * @param[in]  ultimaMuda_  The ultima muda
 */
void
Anfibio::setUltimaMuda(string ultimaMuda_)
{
	ultimaMuda = ultimaMuda_;
}