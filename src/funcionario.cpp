#include "funcionario.h"

/**
 * @file funcionario.cpp
 * @brief Arquivo com a implementação dos metódos
 */

/** Construtor padrão */
Funcionario::Funcionario(){}

Funcionario::~Funcionario(){}

/**
 * @brief      Construtor parametrizado
 *
 * @param  _id             Id do funcionário
 * @param  _funcao         Função na empresa
 * @param  _nome           Nome do funcionário
 * @param  _cpf            CPF do funcionario
 * @param  _idade          Idade do funcionario
 * @param  _tipo           Tipo Sanguineo
 * @param  _fator          Fator RH
 * @param  _especialidade  especialidade do funcionario
 */
Funcionario::Funcionario(int _id, string _funcao, string _nome, string _cpf, short _idade, string _tipo, char _fator, string _especialidade): 
		id(_id), funcao(_funcao), nome(_nome), cpf(_cpf), idade(_idade), tipo_sanguineo(_tipo), fatorRH(_fator), especialidade(_especialidade) {}


/**
 * @brief      Método que retorna o ID.
 *
 * @return     Inteiro que representa o ID.
 */
int Funcionario::getId() { return id; }

/**
 * @brief      Método que retorna a função do funcionario.
 *
 * @return     String que representa a função do funcionario.
 */
string Funcionario::getFuncao() { return funcao; }

/**
 * @brief      Método que retorna o nome do funcionário
 *
 * @return     String que representa o nome.
 */
string Funcionario::getNome() { return nome; }

/**
 * @brief      Método que retorna o CPF do funcionario
 *
 * @return     String que representa o CPF.
 */
string Funcionario::getCpf() { return cpf; }

/**
 * @brief      Método que retorna a idade do funcionario.
 *
 * @return     Inteiro que representa a idade
 */
short Funcionario::getIdade() { return idade; }

/**
 * @brief      Método que retorna o tipo sanguineo do funcionário.
 *
 * @return     String que representa o tipo sanguineo
 */
string Funcionario::getTipoSanguineo() { return tipo_sanguineo; }

/**
 * @brief      Método que retorna o Fator RH.
 *
 * @return     Char com o fator RH.
 */
char Funcionario::getFatorRH() { return fatorRH; }

/**
 * @brief      Método que retorna a especialidade do funcionario
 *
 * @return     String que representa a especialidade.
 */
string Funcionario::getEspecialidade() { return especialidade; }

/**
 * @brief      Método que modifica o Id.
 *
 * @param  _id   Recebe o novo id.
 */
void Funcionario::setId(int _id) { id = _id; }

/**
 * @brief      Método que modifica a função do funcionário
 *
 * @param  _funcao  String com a nova função.
 */
void Funcionario::setFuncao(string _funcao) { funcao = _funcao; }

/**
 * @brief      Método que modifica o nome do Funcionário
 *
 * @param  _nome  String que armazena o novo nome
 */
void Funcionario::setNome(string _nome) { nome = _nome; }

/**
 * @brief      Método que modifica o CPF do funcionário
 *
 * @param  _cpf  String que armazena o novo CPF.
 */
void Funcionario::setCpf(string _cpf) { cpf = _cpf; }

/**
 * @brief      Método que modifica a idade do Funcionário
 *
 * @param  _idade  Inteiro que armazena a nova idade.
 */
void Funcionario::setIdade(short _idade) { idade = _idade; }

/**
 * @brief      Método que modifica o tipo sanguineo do Funcionario
 *
 * @param  _tipo  String que armazena o novo tipo sanguineo
 */
void Funcionario::setTipoSanguineo(string _tipo) { tipo_sanguineo = _tipo; }

/**
 * @brief      Método que modifica o fator RH do funcionario
 *
 * @param  _fator  Char que armazena o novo fator RH
 */
void Funcionario::setFatorRH(char _fator) { fatorRH = _fator; }

/**
 * @brief      Método que modifica a especialidade do funcionario
 *
 * @param  _especialidade  String que armazena a especialidade do funcionário
 */
void Funcionario::setEspecialidade(string _especialidade) { especialidade = _especialidade; }

/**
 * @brief      Construtor do objeto Tratador.
 */
Tratador::Tratador(){}

/**
 * @brief      Desttrutor do objeto Tratador.
 */
Tratador::~Tratador(){}


/**
 * @brief      Construtor do objeto Veterinario.
 */
Veterinario::Veterinario(){}

/**
 * @brief      Destrutor do objeto Veterinario.
 */
Veterinario::~Veterinario(){}

/**
 * @brief      Sobrecarga do operador de inserção
 *
 * @param      o     Variável do tipo ostream que corresponde ao stream de saída
 * @param      f     Variável do tipo Funcionario que corresponde ao funcionario que será impresso
 *
 * @return     Stream de saída com os dados do funcionário formatados
 */
ostream& operator<<(ostream &o, Funcionario &f){
	o << "Identificador do funcionário: " << f.getId() << endl;
	o << "Função: " << f.getFuncao() << endl;
	o << "Nome do funcionário: " << f.getNome() << endl;
	o << "CPF do funcionário: " << f.getCpf() << endl;
	o << "Idade do funcionário: " << f.getIdade() << endl;
	o << "Tipo Sanguíneo: " << f.getTipoSanguineo() << endl;
	o << "Fator RH: " << f.getFatorRH() << endl;
	o << "Especialidade: " << f.getEspecialidade() << endl;
	cout << endl;

	return f.print(o);
}

ostream& Veterinario::print(ostream &o)const {	return o; }

ostream& Tratador::print(ostream &o)const{	return o; }


/**
 * @brief      Sobrecarga do operador de extraçao
 *
 * @param      i     Objeto do tipo istream, que corresponde a entrada padrão
 * @param      f     Funcionario que será lido
 *
 * @return     Objeto istream a ser lido
 */
istream& operator>>(istream &i, Funcionario &f){
	string temp;

	cout << "Digite o ID do Funcionario: ";
	i >> temp;
	f.setId(stoi(temp));

	cout << "Digite o nome do Funcionario: ";
	i >> temp;
	f.setNome(temp);

	cout << "Digite o CPF do Funcionario: ";
	i >> temp;
	f.setCpf(temp);

	cout << "Digite a idade do Funcionario: ";
	i >> temp;
	f.setIdade(stoi(temp));

	cout << "Digite o tipo sanguineo do Funcionario: ";
	i >> temp;
	f.setTipoSanguineo(temp);

	cout << "Digite o Fator RH do Funcionario: ";
	i >> temp;
	f.setFatorRH(temp[0]);

	cout << "Digite a Especialidade do Funcionario: ";
	i >> temp;
	f.setEspecialidade(temp);

	return f.read(i);

}

istream& Veterinario::read(istream &i){	return i; }

istream& Tratador::read(istream &i){	return i; }