#ifndef FUNCOES_H
#define FUNCOES_H

/**
 * @file funcionario.h
 * @brief Arquivo .h com as definições dos métodos utilizados no sistema.
 */

#include <iostream>
#include <map>
#include <fstream>
#include <sstream>
#include <string>

#include "animal.h"
#include "anfibio.h"
#include "ave.h"
#include "mamifero.h"
#include "reptil.h"

#include "animal_silvestre.h"
#include "exotico.h"
#include "nativo.h"
#include "ave_exotica.h"
#include "ave_nativa.h"

#include "funcionario.h"

#include "excecoes.h"

void validaEntrada(string opcao);

void initAnimais(ifstream *arq, map<int, Anfibio> *anfibios, map<int, Repteis> *repteis, map<int, Mamifero> *mamiferos, map<int, Aves> *aves);

void initFuncionarios(ifstream *arq, map<int, Tratador> *tratadores, map<int, Veterinario> *veterinarios);

#endif