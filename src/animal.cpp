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

Reptil::Reptil(int _id, float _tamanho, string _classe, string _nome, string _cientifico, string _dieta, string _batismo, char _sexo, short _veterinario, short _tratador, bool _venenoso, string _tipoVeneno):Animal(_id, _tamanho, _classe, _nome, _cientifico, _dieta, _batismo, _sexo, _veterinario, _tratador), venenoso(_venenoso), tipoVeneno(_tipoVeneno){}

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

/**
 * @brief      Constructs the object.
 */
AnimalSilvestre::AnimalSilvestre(){}
		
/**
 * @brief      Constructs the object.
 *
 * @param[in]  _ibama  The ibama
 */
AnimalSilvestre::AnimalSilvestre(string _ibama):ibama(_ibama){}

/**
 * @brief      Destroys the object.
 */
AnimalSilvestre::~AnimalSilvestre(){}

/**
 * @brief      Retorna a licença do IBAMA
 *
 * @return     String com a licença
 */
string AnimalSilvestre::getIbama(){ return ibama; }

/**
 * @brief      Sets the ibama.
 *
 * @param[in]  _ibama  The ibama
 */
void AnimalSilvestre::setIbama(string _ibama){ ibama = _ibama; }



/**
 * @brief      Constructs the object.
 */
Exotico::Exotico(){}

/**
 * @brief      Constructs the object.
 *
 * @param[in]  _ibama        The ibama
 * @param[in]  _pais_origem  The pais origem
 */
Exotico::Exotico(string _ibama, string _pais_origem):AnimalSilvestre(_ibama), pais_origem(_pais_origem){}

/**
 * @brief      Destroys the object.
 */
Exotico::~Exotico(){}

/**
 * @brief      Gets the pais origem.
 *
 * @return     The pais origem.
 */
string Exotico::getPaisOrigem(){ return pais_origem; }

/**
 * @brief      Sets the pais origem.
 *
 * @param[in]  _pais_origem  The pais origem
 */
void Exotico::setPaisOrigem(string _pais_origem){ pais_origem = _pais_origem; }


/**
 * @brief      Constructs the object.
 */
Nativo::Nativo(){}

/**
 * @brief      Constructs the object.
 *
 * @param[in]  _ibama        The ibama
 * @param[in]  _uf_origem    The uf origem
 * @param[in]  _autorizacao  The autorizacao
 */
Nativo::Nativo(string _ibama, string _uf_origem, string _autorizacao):AnimalSilvestre(_ibama), uf_origem(_uf_origem), autorizacao(_autorizacao){}

/**
 * @brief      Destroys the object.
 */
Nativo::~Nativo(){}

/**
 * @brief      Gets the uf origem.
 *
 * @return     The uf origem.
 */
string Nativo::getUfOrigem(){ return uf_origem; }

/**
 * @brief      Gets the autorizacao.
 *
 * @return     The autorizacao.
 */
string Nativo::getAutorizacao(){ return autorizacao; }

/**
 * @brief      Sets the uf origem.
 *
 * @param[in]  _uf_origem  The uf origem
 */
void Nativo::setUfOrigem(string _uf_origem){ uf_origem = _uf_origem; }

/**
 * @brief      Sets the autorizacao.
 *
 * @param[in]  _autorizacao  The autorizacao
 */
void Nativo::setAutorizacao(string _autorizacao){ autorizacao = _autorizacao; }


/**
 * @brief      Constructs the object.
 */
AveExotica::AveExotica(){}

/**
 * @brief      Constructs the object.
 *
 * @param[in]  _id           The identifier
 * @param[in]  _tamanho      The tamanho
 * @param[in]  _classe       The classe
 * @param[in]  _nome         The nome
 * @param[in]  _cientifico   The cientifico
 * @param[in]  _dieta        The dieta
 * @param[in]  _batismo      The batismo
 * @param[in]  _sexo         The sexo
 * @param[in]  _veterinario  The veterinario
 * @param[in]  _tratador     The tratador
 * @param[in]  _tamanhoBico  The tamanho bico
 * @param[in]  _envergadura  The envergadura
 * @param[in]  _ibama        The ibama
 * @param[in]  _pais_origem  The pais origem
 */
AveExotica::AveExotica(int _id, float _tamanho, string _classe, string _nome, string _cientifico, string _dieta, string _batismo, char _sexo, short _veterinario, short _tratador, int _tamanhoBico, int _envergadura, string _ibama, string _pais_origem):Ave(_id, _tamanho, _classe, _nome, _cientifico, _dieta, _batismo, _sexo, _veterinario, _tratador, _tamanhoBico, _envergadura), Exotico(_ibama, _pais_origem){}

/**
 * @brief      Destroys the object.
 */
AveExotica::~AveExotica(){}


/**
 * @brief      Constructs the object.
 *
 * @param[in]  _id           The identifier
 * @param[in]  _tamanho      The tamanho
 * @param[in]  _classe       The classe
 * @param[in]  _nome         The nome
 * @param[in]  _cientifico   The cientifico
 * @param[in]  _dieta        The dieta
 * @param[in]  _batismo      The batismo
 * @param[in]  _sexo         The sexo
 * @param[in]  _veterinario  The veterinario
 * @param[in]  _tratador     The tratador
 * @param[in]  _tamanhoBico  The tamanho bico
 * @param[in]  _envergadura  The envergadura
 * @param[in]  _ibama        The ibama
 * @param[in]  _uf_origem    The uf origem
 * @param[in]  _autorizacao  The autorizacao
 */
AveNativa::AveNativa(int _id, float _tamanho, string _classe, string _nome, string _cientifico, string _dieta, string _batismo, char _sexo, short _veterinario, short _tratador, int _tamanhoBico, int _envergadura, string _ibama, string _uf_origem, string _autorizacao):Ave(_id, _tamanho, _classe, _nome, _cientifico, _dieta, _batismo, _sexo, _veterinario, _tratador, _tamanhoBico, _envergadura), Nativo(_ibama, _uf_origem, _autorizacao){}

/**
 * @brief      Constructs the object.
 */
AveNativa::AveNativa(){}

/**
 * @brief      Destroys the object.
 */
AveNativa::~AveNativa(){}

/**
 * @brief      { operator_description }
 *
 * @param      o     { parameter_description }
 * @param      a     { parameter_description }
 *
 * @return     { description_of_the_return_value }
 */
ostream& operator<<(ostream &o, Animal &a){
	o 	<< "ID: " << a.getId() << endl
		<< "Classe: " << a.getClasse() << endl
		<< "Nome: " << a.getNome() << endl
		<< "Nome cientifico: " << a.getCientifico() << endl
		<< "Sexo: " << a.getSexo() << endl
		<< "Tamanho: " << a.getTamanho() << "m" << endl
		<< "Dieta: " << a.getDieta() << endl
		<< "Cod. veterinario: " << a.getVeterinario() << endl
		<< "Cod. tratador: " << a.getTratador() << endl
		<< "Nome de Batismo: " << a.getBatismo() << endl;
		return a.print(o);
}

/**
 * @brief      { function_description }
 *
 * @param      o     { parameter_description }
 *
 * @return     { description_of_the_return_value }
 */
ostream& Anfibio::print(ostream &o)const {	
	o << "Total de Mudas: " << totalMudas << endl;
	o << "Ultima Muda: " << ultimaMuda << endl;
	return o; 
}

/**
 * @brief      { function_description }
 *
 * @param      o     { parameter_description }
 *
 * @return     { description_of_the_return_value }
 */
ostream& Ave::print(ostream &o)const {	
	o << "Tamanho do bico: " << tamanhoBico << endl;
	o << "Envergadura: " << envergadura << endl;
	return o; 
}

/**
 * @brief      { function_description }
 *
 * @param      o     { parameter_description }
 *
 * @return     { description_of_the_return_value }
 */
ostream& Mamifero::print(ostream &o)const {	
	o << "Cor do pêlo: " << corPelo << endl;
	return o; 
}

/**
 * @brief      { function_description }
 *
 * @param      o     { parameter_description }
 *
 * @return     { description_of_the_return_value }
 */
ostream& Reptil::print(ostream &o)const {	
	if (venenoso == true){
		o << "Venenoso: Sim" << endl;
	}else{
		o << "Venenoso: Não" << endl;
	}

	o << "Tipo do Veneno: " << tipoVeneno << endl;
	return o; 
}

/**
 * @brief      { function_description }
 *
 * @param      o     { parameter_description }
 *
 * @return     { description_of_the_return_value }
 */
ostream& AveExotica::print(ostream &o)const {	
	o << "Ibama: " << ibama << endl;
	o << "País de origem: " << pais_origem << endl;
	return o; 
}

/**
 * @brief      { function_description }
 *
 * @param      o     { parameter_description }
 *
 * @return     { description_of_the_return_value }
 */
ostream& AveNativa::print(ostream &o)const {	
	o << "Ibama: " << ibama << endl;
	o << "Estado de origem: " << uf_origem << endl;
	o << "Autorização: " << autorizacao << endl;
	return o; 
}


/**
 * @brief      { operator_description }
 *
 * @param      i     { parameter_description }
 * @param      a     { parameter_description }
 *
 * @return     { description_of_the_return_value }
 */
istream& operator>>(istream &i, Animal &a){
	string temp;

	cout << "Digite o ID do Animal: ";
	i >> temp;
	a.setId(stoi(temp));

	cout << "Digite a classe do Animal: ";
	i >> temp;
	a.setClasse(temp);

	i.ignore();

	cout << "Digite o nome cientifico do Animal: ";
	getline(i, temp);
	a.setNome(temp);

	cout << "Digite o sexo do Animal: ";
	i >> temp;
	a.setSexo(temp[0]);

	cout << "Digite o tamanho do do Animal em metros: ";
	i >> temp;
	a.setTamanho(stof(temp));

	cout << "Digite a dieta do Animal: ";
	i >> temp;
	a.setDieta(temp);

	cout << "Digite 0 caso o Animal não possua um Veterinario; 1 caso contrário: ";
	i >> temp;
	a.setVeterinario(stoi(temp));

	cout << "Digite 0 caso o Animal não possua um Tratador; 1 caso contrário: ";
	i >> temp;
	a.setTratador(stoi(temp));

	cout << "Digite o nome de batismo do  Animal: ";
	i >> temp;
	a.setBatismo(temp);


	return a.read(i);


}


/**
 * @brief      { function_description }
 *
 * @param      i     { parameter_description }
 *
 * @return     { description_of_the_return_value }
 */
istream& Anfibio::read(istream &i){
	cout << "Digite o total de mudas: ";
	i >> totalMudas;

	cout << "Data da ultima muda (dd/mm/aa): ";
	i >> ultimaMuda;
	cout << endl;
	return i;
}

/**
 * @brief      { function_description }
 *
 * @param      i     { parameter_description }
 *
 * @return     { description_of_the_return_value }
 */
istream& Ave::read(istream &i){
	cout << "Digite o tamanho do bico em m: ";
	i >> tamanhoBico;

	cout << "Digite a envergadura em m: ";
	i >> envergadura;
	cout << endl;
	return i;
}

/**
 * @brief      { function_description }
 *
 * @param      i     { parameter_description }
 *
 * @return     { description_of_the_return_value }
 */
istream& Mamifero::read(istream &i){
	cout << "Informe a cor do pêlo: ";
	i >> corPelo;
	cout << endl;
	return i;
}

/**
 * @brief      { function_description }
 *
 * @param      i     { parameter_description }
 *
 * @return     { description_of_the_return_value }
 */
istream& Reptil::read(istream &i){
	string temp;

	cout << "Informe se o animal é venenoso (sim ou nao): ";
	i >> temp;

	if (temp == "sim"){
		venenoso = true;

		cout << "Informe o tipo do veneno: ";
		i >> tipoVeneno;
	}else{
		venenoso = false;
		tipoVeneno = "Nenhum";
	}

	cout << endl;
	return i;
}

/**
 * @brief      { function_description }
 *
 * @param      i     { parameter_description }
 *
 * @return     { description_of_the_return_value }
 */
istream& AveExotica::read(istream &i){
	cout << "Ibama: ";
	i >> ibama;

	cout << "Pais de origem: ";
	i >> pais_origem;
	cout << endl;
	return i;
}

/**
 * @brief      { function_description }
 *
 * @param      i     { parameter_description }
 *
 * @return     { description_of_the_return_value }
 */
istream& AveNativa::read(istream &i){
	cout << "Ibama: ";
	i >> ibama;

	cout << "Estado de origem: ";
	i >> uf_origem;

	cout << "Autorização: ";
	i >> autorizacao;
	cout << endl;
	return i;
}
