/**
* @file animal.cpp
* @brief Implementação da classe animal
* @author Antonio Marcos Oliveira
* @author Renato Barros de Lima Freitas 
* @since 02/07/2018
* @date 06/07/2018
*/
#include "animal.h"

/**
 * @brief      Constructs the object.
 */
Animal::Animal(){}

/**
 * @brief      Destroys the object.
 */
Animal::~Animal(){}

	
/**
 * @brief      Gets the identifier.
 *
 * @return     The identifier.
 */
int 
Animal::getId()
{
	return id;
}

/**
 * @brief      Gets the tamanho.
 *
 * @return     The tamanho.
 */
float 
Animal::getTamanho()
{
	return tamanho;
}

/**
 * @brief      Gets the classe.
 *
 * @return     The classe.
 */
string 
Animal::getClasse()
{
	return classe;
}

/**
 * @brief      Gets the nome.
 *
 * @return     The nome.
 */
string 
Animal::getNome()
{
	return nome;
}

/**
 * @brief      Gets the cientifico.
 *
 * @return     The cientifico.
 */
string 
Animal::getCientifico()
{
	return cientifico;
}

/**
 * @brief      Gets the dieta.
 *
 * @return     The dieta.
 */
string 
Animal::getDieta()
{
	return dieta;
}

/**
 * @brief      Gets the batismo.
 *
 * @return     The batismo.
 */
string
Animal::getBatismo()
{
	return batismo;
}
	
/**
 * @brief      Gets the sexo.
 *
 * @return     The sexo.
 */
char 
Animal::getSexo()
{
	return sexo;
}

/**
 * @brief      Gets the veterinario.
 *
 * @return     The veterinario.
 */
short
Animal::getVeterinario()
{
	return veterinario;
}

/**
 * @brief      Gets the tratador.
 *
 * @return     The tratador.
 */
short
Animal::getTratador()
{ 
	return tratador;
}

/**
 * @brief      Sets the identifier.
 *
 * @param[in]  id_   The identifier
 */
void 
Animal::setId(int id_)
{
	id = id_;
}
	
/**
 * @brief      Sets the tamanho.
 *
 * @param[in]  tamanho_  The tamanho
 */
void 
Animal::setTamanho(float tamanho_)
{
	tamanho = tamanho_;
}

/**
 * @brief      Sets the classe.
 *
 * @param[in]  classe_  The classe
 */
void 
Animal::setClasse(string classe_)
{
	classe = classe_;
}

/**
 * @brief      Sets the nome.
 *
 * @param[in]  nome_  The nome
 */
void 
Animal::setNome(string nome_)
{
	nome = nome_;
}

/**
 * @brief      Sets the cientifico.
 *
 * @param[in]  <unnamed>  { parameter_description }
 */
void 
Animal::setCientifico(string cientifico_)
{
	cientifico = cientifico_;
}

/**
 * @brief      Sets the dieta.
 *
 * @param[in]  dieta_  The dieta
 */
void 
Animal::setDieta(string dieta_)
{
	dieta = dieta;
}

/**
 * @brief      Sets the bastismo.
 *
 * @param[in]  batismo_  The batismo
 */
void
Animal::setBatismo(string batismo_)
{
	batismo = batismo_;
}

/**
 * @brief      Sets the sexo.
 *
 * @param[in]  sexo_  The sexo
 */
void 
Animal::setSexo(char sexo_)
{
	sexo = sexo_;
}

/**
 * @brief      Sets the tratador
 *
 * @param[in]  sexo_  The sexo
 */
void 
Animal::setTratador(short tratador_)
{
	tratador = tratador_;
}

/**
 * @brief      Sets the veterinario.
 *
 * @param[in]  veterinario_  The veterinario
 */
void 
Animal::setVeterinario(short veterinario_)
{
	veterinario = veterinario_;
}