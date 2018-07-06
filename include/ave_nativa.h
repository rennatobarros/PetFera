/**
* @file ave_nativa.h
* @brief Cabeçalho da subclasse ave_nativo
* @author Antonio Marcos Oliveira
* @author Renato Barros de Lima Freitas
* @since 02/07/2018
* @date 06/07/2018
*/
#ifndef AVE_NATIVA_H
#define AVE_NATIVA_H 

#include "nativo.h"
#include "ave.h"


/**
 * @brief      Class for ave nativa.
 */
class AveNativa : public Ave, Nativo
{
public:
	AveNativa();
	~AveNativa();
	
};

#endif