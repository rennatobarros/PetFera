/**
* @file nativo.h
* @brief Cabeçalho da subclasse nativo
* @author Antonio Marcos Oliveira
* @author Renato Barros de Lima Freitas
* @since 02/07/2018
* @date 06/07/2018
*/
#ifndef NATIVO_H
#define NATIVO_H

#include "animal_silvestre.h"

/**
 * @brief      Classe para animal nativo
 */
class Nativo : public AnimalSilvestre{
	public:
		Nativo();
		Nativo(string _ibama, string _uf_origem, string _autorizacao);
		~Nativo();

		string getUfOrigem();
		string getAutorizacao();

		void setUfOrigem(string);
		void setAutorizacao(string);

	protected:
		string uf_origem;
		string autorizacao;
	
};


#endif