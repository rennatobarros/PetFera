#ifndef EXCECOES_H
#define EXCECOES_H

#include <stdexcept>

using namespace std;

class ErroNaEntrada : public invalid_argument{
	public:
		ErroNaEntrada() : invalid_argument("Entrada Inválida!!"){}
};

class IdInvalido : public invalid_argument{
	public:
		IdInvalido() : invalid_argument("ID não corresponde!") {}
};

#endif