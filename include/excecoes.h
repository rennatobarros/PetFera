/**
* @file excecoes.h
* @brief Arquivo de definição dos tratamentos de exceções
* @author Antonio Marcos Oliveira
* @author Renato Barros de Lima Freitas
* @since 02/07/2018
* @date 06/07/2018
*/
#ifndef EXCECOES_H
#define EXCECOES_H

#include <stdexcept>
#include <exception>

using std::invalid_argument;
using std::exception;

/**
 * @brief      Class for erro na entrada.
 */
class ErroNaEntrada : public invalid_argument{
	public:
		ErroNaEntrada() : invalid_argument("Entrada Inválida!!"){}
};

/**
 * @brief      Class for identifier invalido.
 */
class IdInvalido : public invalid_argument{
	public:
		IdInvalido() : invalid_argument("ID não corresponde!") {}
};

/**
 * @brief      Class for falha no arquivo.
 */
class FalhaNoArquivo
{
public:
	const char* what(){
		return "Não foi possível ler o arquivo! Verifique a integridade dele e tente novamente.";
	}
};

#endif