#include "funcoes.h"

void validaEntrada(string opcao){
	if (!isdigit(opcao[0])){
			throw ErroNaEntrada();
	}
} 

void initAnimais(map<int, Anfibio> anfibios, map<int, Reptil> repteis, map<int, Mamifero> mamiferos, map<int, Ave> aves){
	ifstream arq;

	/** Tratando possiveis erros na abertura de arquivos. */
	try{
		arq.open("files/animais.csv");
		if(!arq.good()) throw FalhaNoArquivo();
		else{
			/** String para armazenar cada linha do arquivo. */
			string ler_linha;

			while(getline(arq, ler_linha)){
				string id;
				string tamanho;
				string classe;
				string nome;
				string cientifico;
				string dieta;
				string batismo;
				string sexo;
				string vet;
				string tratador;

				stringstream ss(ler_linha);

				getline(ss, id, ';');
				getline(ss, classe, ';');
				getline(ss, nome, ';');
				getline(ss, cientifico, ';');
				getline(ss, sexo, ';');
				getline(ss, tamanho, ';');
				getline(ss, dieta, ';');
				getline(ss, vet, ';');
				getline(ss, tratador, ';');
				getline(ss, batismo, ';');
				

				if (classe == "Amphibia"){
					Anfibio animal;

					animal.setId(stoi(id));
					animal.setClasse(classe);
					animal.setNome(nome);
					animal.setCientifico(cientifico);
					animal.setSexo(sexo[0]);
					animal.setTamanho(stof(tamanho));
					animal.setDieta(dieta);
					animal.setVeterinario(stoi(vet));
					animal.setTratador(stoi(tratador));
					animal.setBatismo(batismo);

					anfibios.emplace(stoi(id), animal);
				
				}else if(classe == "Reptilia"){
					Reptil animal;

					animal.setId(stoi(id));
					animal.setClasse(classe);
					animal.setNome(nome);
					animal.setCientifico(cientifico);
					animal.setSexo(sexo[0]);
					animal.setTamanho(stof(tamanho));
					animal.setDieta(dieta);
					animal.setVeterinario(stoi(vet));
					animal.setTratador(stoi(tratador));
					animal.setBatismo(batismo);

					repteis.emplace(stoi(id), animal);

				}else if(classe == "Aves"){
					Ave animal;

					animal.setId(stoi(id));
					animal.setClasse(classe);
					animal.setNome(nome);
					animal.setCientifico(cientifico);
					animal.setSexo(sexo[0]);
					animal.setTamanho(stof(tamanho));
					animal.setDieta(dieta);
					animal.setVeterinario(stoi(vet));
					animal.setTratador(stoi(tratador));
					animal.setBatismo(batismo);

					aves.emplace(stoi(id), animal);
				
				}else if(classe == "Mammalia"){
					Mamifero animal;

					animal.setId(stoi(id));
					animal.setClasse(classe);
					animal.setNome(nome);
					animal.setCientifico(cientifico);
					animal.setSexo(sexo[0]);
					animal.setTamanho(stof(tamanho));
					animal.setDieta(dieta);
					animal.setVeterinario(stoi(vet));
					animal.setTratador(stoi(tratador));
					animal.setBatismo(batismo);

					mamiferos.emplace(stoi(id), animal);
				}
				if (classe == "Amphibia"){
					Anfibio animal;

					animal.setId(stoi(id));
					animal.setClasse(classe);
					animal.setNome(nome);
					animal.setCientifico(cientifico);
					animal.setSexo(sexo[0]);
					animal.setTamanho(stof(tamanho));
					animal.setDieta(dieta);
					animal.setVeterinario(stoi(vet));
					animal.setTratador(stoi(tratador));
					animal.setBatismo(batismo);

					anfibios.emplace(stoi(id), animal);
				}
				else if(classe == "Reptilia"){
					Reptil animal;

					animal.setId(stoi(id));
					animal.setClasse(classe);
					animal.setNome(nome);
					animal.setCientifico(cientifico);
					animal.setSexo(sexo[0]);
					animal.setTamanho(stof(tamanho));
					animal.setDieta(dieta);
					animal.setVeterinario(stoi(vet));
					animal.setTratador(stoi(tratador));
					animal.setBatismo(batismo);

					repteis.emplace(stoi(id), animal);
				}else if(classe == "Aves"){
					Ave animal;

					animal.setId(stoi(id));
					animal.setClasse(classe);
					animal.setNome(nome);
					animal.setCientifico(cientifico);
					animal.setSexo(sexo[0]);
					animal.setTamanho(stof(tamanho));
					animal.setDieta(dieta);
					animal.setVeterinario(stoi(vet));
					animal.setTratador(stoi(tratador));
					animal.setBatismo(batismo);

					aves.emplace(stoi(id), animal);
				}else if(classe == "Mammalia"){
					Mamifero animal;

					animal.setId(stoi(id));
					animal.setClasse(classe);
					animal.setNome(nome);
					animal.setCientifico(cientifico);
					animal.setSexo(sexo[0]);
					animal.setTamanho(stof(tamanho));
					animal.setDieta(dieta);
					animal.setVeterinario(stoi(vet));
					animal.setTratador(stoi(tratador));
					animal.setBatismo(batismo);

					mamiferos.emplace(stoi(id), animal);
				}
			}
			arq.close();
		}
	}catch(FalhaNoArquivo &f){
		cerr << f.what() << endl;
	}catch(...){
		cerr << "Erro desconhecido." << endl;
	}
}

void initFuncionarios(map<int, Tratador> tratadores, map<int, Veterinario> veterinarios){
	ifstream arq;

	/** Tratando possiveis erros na abertura de arquivos. */

	try{
		arq.open("files/funcionarios.csv");
		if(!arq.good()) FalhaNoArquivo();
		else{
			/** String para armazenar cada linha do arquivo. */
			string ler_linha;

			while(getline(arq, ler_linha)){
				string id;
				string funcao;
				string nome;
				string cpf;
				string idade;
				string tipo;
				string fator;
				string especialidade;
				
				stringstream ss(ler_linha);

				getline(ss, id, ';');
				getline(ss, funcao, ';');
				getline(ss, nome, ';');
				getline(ss, cpf, ';');
				getline(ss, idade, ';');
				getline(ss, tipo, ';');
				getline(ss, fator, ';');
				getline(ss, especialidade, ';');		

				if (funcao == "Tratador"){
					Tratador funcionario;

					funcionario.setId(stoi(id));
					funcionario.setFuncao(funcao);
					funcionario.setNome(nome);
					funcionario.setCpf(cpf);
					funcionario.setIdade(stoi(idade));
					funcionario.setTipoSanguineo(tipo);
					funcionario.setFatorRH(fator[0]);
					funcionario.setEspecialidade(especialidade);

					tratadores.emplace(stoi(id), funcionario);
			
				}else if(funcao == "Veterinario"){
					Veterinario funcionario;

					funcionario.setId(stoi(id));
					funcionario.setFuncao(funcao);
					funcionario.setNome(nome);
					funcionario.setCpf(cpf);
					funcionario.setIdade(stoi(idade));
					funcionario.setTipoSanguineo(tipo);
					funcionario.setFatorRH(fator[0]);
					funcionario.setEspecialidade(especialidade);

					veterinarios.emplace(stoi(id), funcionario);
				}
			}
			arq.close();
		}
	}catch(FalhaNoArquivo &f){
		cerr << f.what() << endl;
	}catch(...){
		cerr << "Erro desconhecido." << endl;	
	}
}