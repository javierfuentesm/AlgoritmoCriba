//
// Created by Javier Fuentes Mora on 19/02/20.
//

#ifndef ERATOSTENES_LISTACRIBA_H
#define ERATOSTENES_LISTACRIBA_H

#include "Numero.h"
#include <vector>


class ListaCriba {
private:

    std::vector<Numero> numeros;
public:
    ListaCriba(const std::vector<Numero> &numeros);
    ListaCriba();
    void printPrimos();
    void addNumero(int num);
    void algoritmo();

};


#endif //ERATOSTENES_LISTACRIBA_H
