#include <stdio.h>
#include <stdlib.h>
#include "tads/indices.h"

// ler as infos de um arquivo .txt e salva-las em um arquivo .bin


int main(int argc, char** argv) {

    Indices ind = Indices_cria();
    ind = Le_Arquivo_Principal(ind, argc, argv);
    Indices_Libera(ind);

    return 0;
}


