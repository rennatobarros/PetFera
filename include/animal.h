/**
* @file animal.h
* @brief Cabeçalho da classe animal
* @author Antonio Marcos Oliveira
* @author Renato Barros de Lima Freitas
* @since 02/07/2018
* @date 06/07/2018
*/
#ifndef ANIMAL_H
#define ANIMAL_H

#include <iostream>
using namespace std;

#include <string>

/**
 * @brief      Class for animal.
 */
class Animal
{
protected:
	/** ID do animal. */
	int id;

	/** Tamanho do animal em metros */
	float tamanho;

	/** Classe que o animal pertence. */
	string classe;

	/** Nome do animal. */
	string nome;

	/** Nome cientifico do animal */
	string cientifico;

	/** Alimento preferido do animal */
	string dieta;

	/** Nome de batismo */
	string batismo;
	
	/** Sexo do animal0 */
	char sexo;
	
	/** Veterinario associado ao animal */
	short veterinario;

	/** Tratador associado ao animal */
	short tratador;


public:
	Animal();
	Animal(int _id, float _tamanho, string _classe, string _nome, string _cientifico, string _dieta, string _batismo, char _sexo, short _veterinario, short _tratador);
	virtual ~Animal() = 0;
	
	/** Getters */
	int getId();
	float getTamanho();
	string getClasse();
	string getNome();
	string getCientifico();
	string getDieta();
	string getBatismo();
	char getSexo();
	short getVeterinario();
	short getTratador();

	/** Setters */
	void setId(int id_);
	void setTamanho(float tamanho_);
	void setClasse(string classe_);
	void setNome(string nome_);
	void setCientifico(string cientifico_);
	void setDieta(string dieta_);
	void setBatismo(string batismo_);
	void setSexo(char sexo_);
	void setVeterinario(short veterinario_);
	void setTratador(short tratador_);

	/** Sobrecarga de operadores */
	friend istream& operator>> (istream &i, Animal &a);
	friend ostream& operator<< (ostream &o, Animal &a);

private:
	virtual ostream& print(ostream&) const = 0;
	virtual istream& read(istream&) = 0;
	

};

/**
 * @brief      Class for anfibio.
 */
class Anfibio : public Animal
{
protected:
	int totalMudas;
	string ultimaMuda;

private:
	istream& read(istream &i);
	ostream& print(ostream &o) const;

public:
	Anfibio();
	Anfibio(int _id, float _tamanho, string _classe, string _nome, string _cientifico, string _dieta, string _batismo, char _sexo, short _veterinario, short _tratador, int _totalMudas, string _ultimaMuda);
	~Anfibio();

	int getTotalMudas();
	string getUltimaMuda();

	void setTotalMudas(int totalMudas_);
	void setUltimaMuda(string ultimaMuda_);
	
};

/**
 * @brief      Class for ave.
 */
class Ave : public Animal
{
protected:
	int tamanhoBico;
	int envergadura;

private:
	istream& read(istream &i);
	ostream& print(ostream &o) const;

public:
	Ave();
	Ave(int _id, float _tamanho, string _classe, string _nome, string _cientifico, string _dieta, string _batismo, char _sexo, short _veterinario, short _tratador, int _tamanhoBico, int _envergadura);
	~Ave();

	int getTamanhoBico();
	int getEnvergadura();

	void setTamanhoBico(int tamanhoBico_);
	void setEnvergadura(int envergadura_);
	
};

/**
 * @brief      Class for mamifero.
 */
class Mamifero : public Animal
{
protected:
	string corPelo;

private:
	istream& read(istream &i);
	ostream& print(ostream &o) const;

public:
	Mamifero();
	Mamifero(int _id, float _tamanho, string _classe, string _nome, string _cientifico, string _dieta, string _batismo, char _sexo, short _veterinario, short _tratador, string _corPelo);
	~Mamifero();

	string getCorPelo();

	void setCorPelo(string corPelo_);
	
};

/**
 * @brief      Class for reptil.
 */
class Reptil : public Animal
{
protected:
	bool venenoso;
	string tipoVeneno;

private:
	istream& read(istream &i);
	ostream& print(ostream &o) const;

public:
	Reptil();
	Reptil(int _id, float _tamanho, string _classe, string _nome, string _cientifico, string _dieta, string _batismo, char _sexo, short _veterinario, short _tratador, bool _venenoso, string _tipoVeneno);
	~Reptil();

	bool getVenenoso();
	string getTipoVeneno();

	void setVenenoso(bool venenoso_);
	void setTipoVeneno(string tipoVeneno_);

	
};

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

	protected:
		string ibama;
	
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

	protected:
		string pais_origem;
	
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

	protected:
		string uf_origem;
		string autorizacao;
	
};

/**
 * @brief      Class for ave exotica.
 */
class AveExotica : public Ave, Exotico
{
public:
	AveExotica();
	AveExotica(int _id, float _tamanho, string _classe, string _nome, string _cientifico, string _dieta, string _batismo, char _sexo, short _veterinario, short _tratador, int _tamanhoBico, int _envergadura, string _ibama, string _pais_origem);
	~AveExotica();
private:
	istream& read(istream &i);
	ostream& print(ostream &o) const;
	
};

/**
 * @brief      Class for ave nativa.
 */
class AveNativa : public Ave, Nativo
{
public:
	AveNativa();
	AveNativa(int _id, float _tamanho, string _classe, string _nome, string _cientifico, string _dieta, string _batismo, char _sexo, short _veterinario, short _tratador, int _tamanhoBico, int _envergadura, string _ibama, string _uf_origem, string _autorizacao);
	~AveNativa();
private:
	istream& read(istream &i);
	ostream& print(ostream &o) const;
	
};


#endif