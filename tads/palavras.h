#pragma once

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct palavras* Palavras;

Palavras* Palavras_vetor_cria ();
Palavras Palavra_cria ();
Palavras Palavra_le (Palavras p, FILE* f);
void Palavras_imprime (Palavras* p, int qtd);



