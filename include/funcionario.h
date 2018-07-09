/**
 * @file funcionario.h
 * @brief Arquivo .h com as definições da Classe Funcionario e seus derivados
 */

#ifndef FUNCIONARIO_H
#define FUNCIONARIO_H

#include <iostream>
using namespace std;

#include <string>

class Funcionario{
	private:
		/** Armazena o id do funcionário. */
		int id;

		/** Armazena a função do funcionário. */
		string funcao;

		/** Armazena o nome do funcionário. */
		string nome;
		
		/** Armazena o CPF do funcionário. */
		string cpf;
		
		/** Armazena a idade do funcionário. */
		short idade;
		
		/** Armazena o tipo sanguineo do funcionário. */
		string tipo_sanguineo;
		
		/** Armazena o fator RH do funconário. */
		char fatorRH;
		
		/** Armazena a especialidade do funcionário. */
		string especialidade;

	public:
		/** Getters */
		int getId();
		string getFuncao();
		string getNome();
		string getCpf();
		short getIdade();
		string getTipoSanguineo();
		char getFatorRH();
		string getEspecialidade();

		/** Setters */
		void setId(int);
		void setFuncao(string);
		void setNome(string);
		void setCpf(string);
		void setIdade(short);
		void setTipoSanguineo(string);
		void setFatorRH(char);
		void setEspecialidade(string);

	public:
		Funcionario();
		/** Contrutor parametrizado */
		Funcionario(int _id, string _funcao, string _nome, string _cpf, short _idade, string _tipo, char _fator, string _especialidade);
		virtual ~Funcionario() = 0;

		/** Sobrecarga de operadores */
		friend istream& operator>> (istream &i, Funcionario &f);
		friend ostream& operator<< (ostream &o, Funcionario &f);
};


/**
 * @brief      Classe para o Veterinario
 */
class Veterinario : public Funcionario{
	public:
		Veterinario();
		~Veterinario();
	
};

/**
 * @brief      Classe para o Tratador
 */
class Tratador : public Funcionario{
	public:
		Tratador();
		~Tratador();
	
};

#endif