#ifndef EXCECOES_H
#define EXCECOES_H

#include <exception>

using namespace std;

class ErroNaEntrada : public exception{
	public:
		const char* what(){
			return "Entrada Inválida!!";
		}
};

class IdInvalido : public invalid_argument{
	public:
		IdInvalido() : invalid_argument("ID não corresponde!") {}
};

#endif