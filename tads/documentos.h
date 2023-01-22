#pragma once

typedef struct documentos* Documentos;

Documentos* Documentos_vetor_cria();
Documentos Documentos_cria (char* caminho, char* classe);
void Documentos_Libera(Documentos doc);
void Documentos_imprime(int qtd, Documentos* docs);