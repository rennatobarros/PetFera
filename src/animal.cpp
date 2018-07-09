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

Animal::Animal(int _id, float _tamanho, string _classe, string _nome, string _cientifico, string _dieta, string _batismo, char _sexo, short _veterinario, short _tratador):id(_id), tamanho(_tamanho), classe(_classe), nome(_nome), cientifico(_cientifico), dieta(_dieta), batismo(_batismo), sexo(_sexo), veterinario(_veterinario), tratador(_tratador){}

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

/**
 * @brief      Constructs the object.
 */
Anfibio::Anfibio(){}

Anfibio::Anfibio(int _id, float _tamanho, string _classe, string _nome, string _cientifico, string _dieta, string _batismo, char _sexo, short _veterinario, short _tratador, int _totalMudas, string _ultimaMuda):Animal(_id, _tamanho, _classe, _nome, _cientifico, _dieta, _batismo, _sexo, _veterinario, _tratador), totalMudas(_totalMudas), ultimaMuda(_ultimaMuda){}

/**
 * @brief      Destroys the object.
 */
Anfibio::~Anfibio(){}

/**
 * @brief      Gets the total mudas.
 *
 * @return     The total mudas.
 */
int
Anfibio::getTotalMudas()
{
	return totalMudas;
}

/**
 * @brief      Gets the ultima muda.
 *
 * @return     The ultima muda.
 */
string
Anfibio::getUltimaMuda()
{
	return ultimaMuda;
}

/**
 * @brief      Sets the total mudas.
 *
 * @param[in]  totalMudas_  The total mudas
 */
void
Anfibio::setTotalMudas(int totalMudas_)
{
	totalMudas = totalMudas_;
}

/**
 * @brief      Sets the ultima muda.
 *
 * @param[in]  ultimaMuda_  The ultima muda
 */
void
Anfibio::setUltimaMuda(string ultimaMuda_)
{
	ultimaMuda = ultimaMuda_;
}

/**
 * @brief      Constructs the object.
 */
Ave::Ave(){}

Ave::Ave(int _id, float _tamanho, string _classe, string _nome, string _cientifico, string _dieta, string _batismo, char _sexo, short _veterinario, short _tratador, int _tamanhoBico, int _envergadura):Animal(_id, _tamanho, _classe, _nome, _cientifico, _dieta, _batismo, _sexo, _veterinario, _tratador), tamanhoBico(_tamanhoBico), envergadura(_envergadura){}

/**
 * @brief      Destroys the object.
 */
Ave::~Ave(){}

/**
 * @brief      Gets the tamanho bico.
 *
 * @return     The tamanho bico.
 */
int 
Ave::getTamanhoBico()
{
	return tamanhoBico;
}

/**
 * @brief      Gets the envergadura.
 *
 * @return     The envergadura.
 */
int 
Ave::getEnvergadura()
{
	return envergadura;
}

/**
 * @brief      Sets the tamanho bico.
 *
 * @param[in]  tamanhoBico_  The tamanho bico
 */
void 
Ave::setTamanhoBico(int tamanhoBico_)
{
	tamanhoBico = tamanhoBico_;
}
	
/**
 * @brief      Sets the envergadura.
 *
 * @param[in]  envergadura_  The envergadura
 */
void 
Ave::setEnvergadura(int envergadura_)
{
	envergadura = envergadura_;
}

/**
 * @brief      Constructs the object.
 */
Mamifero::Mamifero(){}

Mamifero::Mamifero(int _id, float _tamanho, string _classe, string _nome, string _cientifico, string _dieta, string _batismo, char _sexo, short _veterinario, short _tratador, string _corPelo):Animal(_id, _tamanho, _classe, _nome, _cientifico, _dieta, _batismo, _sexo, _veterinario, _tratador), corPelo(_corPelo){}

/**
 * @brief      Destroys the object.
 */
Mamifero::~Mamifero(){}

/**
 * @brief      Gets the cor pelo.
 *
 * @return     The cor pelo.
 */
string 
Mamifero::getCorPelo()
{
	return corPelo;
}

/**
 * @brief      Sets the cor pelo.
 *
 * @param[in]  corPelo_  The cor pelo
 */
void 
Mamifero::setCorPelo(string corPelo_)
{
	corPelo = corPelo_;
}

/**
 * @brief      Constructs the object.
 */
Reptil::Reptil(){}

/**
 * @brief      Destroys the object.
 */
Reptil::~Reptil(){}

/**
 * @brief      Gets the venenoso.
 *
 * @return     The venenoso.
 */
bool 
Reptil::getVenenoso()
{
	return venenoso;
}

/**
 * @brief      Gets the tipo veneno.
 *
 * @return     The tipo veneno.
 */
string 
Reptil::getTipoVeneno()
{
	return tipoVeneno;
}

/**
 * @brief      Sets the venenoso.
 *
 * @param[in]  venenoso_  The venenoso
 */
void 
Reptil::setVenenoso(bool venenoso_)
{
	venenoso = venenoso_;
}

/**
 * @brief      Sets the tipo veneno.
 *
 * @param[in]  tipoVeneno_  The tipo veneno
 */
void 
Reptil::setTipoVeneno(string tipoVeneno_)
{
	tipoVeneno = tipoVeneno;
}

AnimalSilvestre::AnimalSilvestre(){}
		
AnimalSilvestre::AnimalSilvestre(string _ibama):ibama(_ibama){}

AnimalSilvestre::~AnimalSilvestre(){}

/**
 * @brief      Retorna a licença do IBAMA
 *
 * @return     String com a licença
 */
string AnimalSilvestre::getIbama(){ return ibama; }

void AnimalSilvestre::setIbama(string _ibama){ ibama = _ibama; }



Exotico::Exotico(){}

Exotico::Exotico(string _ibama, string _pais_origem):AnimalSilvestre(_ibama), pais_origem(_pais_origem){}

Exotico::~Exotico(){}

string Exotico::getPaisOrigem(){ return pais_origem; }

void Exotico::setPaisOrigem(string _pais_origem){ pais_origem = _pais_origem; }


Nativo::Nativo(){}

Nativo::Nativo(string _ibama, string _uf_origem, string _autorizacao):AnimalSilvestre(_ibama), uf_origem(_uf_origem), autorizacao(_autorizacao){}

Nativo::~Nativo(){}

string Nativo::getUfOrigem(){ return uf_origem; }

string Nativo::getAutorizacao(){ return autorizacao; }

void Nativo::setUfOrigem(string _uf_origem){ uf_origem = _uf_origem; }

void Nativo::setAutorizacao(string _autorizacao){ autorizacao = _autorizacao; }


AveExotica::AveExotica(){}

AveExotica::AveExotica(int _id, float _tamanho, string _classe, string _nome, string _cientifico, string _dieta, string _batismo, char _sexo, short _veterinario, short _tratador, int _tamanhoBico, int _envergadura, string _ibama, string _pais_origem):Ave(_id, _tamanho, _classe, _nome, _cientifico, _dieta, _batismo, _sexo, _veterinario, _tratador, _tamanhoBico, _envergadura), Exotico(_ibama, _pais_origem){}

AveExotica::~AveExotica(){}


AveNativa::AveNativa(int _id, float _tamanho, string _classe, string _nome, string _cientifico, string _dieta, string _batismo, char _sexo, short _veterinario, short _tratador, int _tamanhoBico, int _envergadura, string _ibama, string _uf_origem, string _autorizacao):Ave(_id, _tamanho, _classe, _nome, _cientifico, _dieta, _batismo, _sexo, _veterinario, _tratador, _tamanhoBico, _envergadura), Nativo(_ibama, _uf_origem, _autorizacao){}

AveNativa::AveNativa(){}

AveNativa::~AveNativa(){}
