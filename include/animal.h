#ifndef ANIMAL_H
#define ANIMAL_H

class Animal
{
protected:
	int id;
	float tamanho;
	string classe;
	string nome;
	string cientifico;
	string dieta;
	string batismo;
	char sexo;
	Veterinario veterinario;
	Tratador tratador;


public:
	Animal();
	~Animal();
	
	int getId();
	float getTamanho();
	string getClasse();
	string getNome();
	string getCientifico();
	string getDieta();
	string getBatismo();
	char getSexo();
	Veterinario getVeterinario();
	Tratador getTratador();

	void setId(int id_);
	void setTamanho(float tamanho_);
	void setClasse(string classe_);
	void setNome(string nome_);
	void setCientifico(cientifico_);
	void setDieta(string dieta_);
	void setBastismo(string batismo_);
	void setSexo(char sexo_);
	void setVeterinario(Veterinario veterinario_);
	void setTratador(Tratador tratador_);


};

#endif