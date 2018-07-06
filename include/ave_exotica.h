/**
* @file ave_exotica.h
* @brief Cabeçalho da subclasse ave_exotica
* @author Antonio Marcos Oliveira
* @author Renato Barros de Lima Freitas
* @since 02/07/2018
* @date 06/07/2018
*/
#ifndef AVE_NATIVA_H
#define AVE_NATIVA_H 

#include "exotico.h"
#include "ave.h"


/**
 * @brief      Class for ave exotica.
 */
class AveExotica : public Ave, Exotico
{
public:
	AveExotica();
	~AveExotica();
	
};

#endif