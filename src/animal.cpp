#include "animal.h"

Animal::Animal(){}
Animal::~Animal(){}
	
int 
Animal::getId()
{
	return id;
}

float 
Animal::getTamanho()
{
	return tamanho;
}

string 
Animal::getClasse()
{
	return classe;
}

string 
Animal::getNome()
{
	return nome;
}

string 
Animal::getCientifico()
{
	return cientifico;
}

string 
Animal::getDieta()
{
	return dieta;
}

string
Animal::getBatismo()
{
	return batismo;
}
	
char 
Animal::getSexo()
{
	return sexo;
}

void 
Animal::setId(int id_)
{
	id = id_;
}
	
void 
Animal::setTamanho(float tamanho_)
{
	tamanho = tamanho_;
}

void 
Animal::setClasse(string classe_)
{
	classe = classe_;
}

void 
Animal::setNome(string nome_)
{
	nome = nome_;
}

void 
Animal::setCientifico(cientifico_)
{
	cientifico = cientifico_;
}

void 
Animal::setDieta(string dieta_)
{
	dieta = dieta;
}

void Animal::setBastismo(string batismo_)
{
	bastismo = batismo_;
}

void 
Animal::setSexo(char sexo_)
{
	sexo = sexo_;
}
