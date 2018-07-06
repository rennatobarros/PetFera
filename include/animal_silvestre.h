/**
* @file animal.h
* @brief Cabeçalho da classe animal
* @author Antonio Marcos Oliveira
* @author Renato Barros de Lima Freitas
* @since 02/07/2018
* @date 06/07/2018
*/
#ifndef ANIMAL_SILVESTRE_H
#define ANIMAL_SILVESTRE_H

/**
 * @brief      Classe para anival silvestre
 */
class AnimalSilvestre{
	public:
		AnimalSilvestre();
		
		/** Construtor parametrizado. */
		AnimalSilvestre(string _ibama);
		~AnimalSilvestre();

		string getIbama();
		void setIbama(string);

	private:
		string ibama;
	
};

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

	private:
		string uf_origem;
		string autorizacao;
	
};

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

	private:
		string pais_origem;
	
};



#endif