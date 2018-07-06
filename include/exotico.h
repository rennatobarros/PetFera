/**
* @file exotico.h
* @brief Cabeçalho da classe exotico
* @author Antonio Marcos Oliveira
* @author Renato Barros de Lima Freitas
* @since 02/07/2018
* @date 06/07/2018
*/
#ifndef EXOTICO_H
#define EXOTICO_H 

#include "animal_silvestre.h"

/**
 * @brief      Classe para animal exótico
 */
class Exotico : public AnimalSilvestre{
	public:
		Exotico();
		Exotico(string _ibama, string _pais_origem);
		~Exotico();

		string getPaisOrigem();

		void setPaisOrigem(string);

	protected:
		string pais_origem;
	
};


#endif