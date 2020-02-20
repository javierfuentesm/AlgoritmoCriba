//
// Created by Javier Fuentes Mora on 19/02/20.
//

#include <iostream>
#include "ListaCriba.h"

using namespace std;

ListaCriba::ListaCriba(const std::vector<Numero> &numeros) : numeros(numeros) {}

void ListaCriba::printPrimos() {

    std::vector<Numero>::iterator numero;
    for (numero = numeros.begin(); numero != numeros.end(); numero++) {
        if (numero->getPrimo())
            cout << "El Número = " << numero->getNumero() << " Es primo " << endl;
    }

}

void ListaCriba::addNumero(int num) {
    numeros.emplace_back(num);
}

ListaCriba::ListaCriba() {

}

void ListaCriba::algoritmo() {
    for (int n = numeros[0].getNumero(); n <= numeros.size()+1; ++n) {
        if (numeros[n-2].getPrimo()) {
            for (int i = (n) * (n); i <= numeros.size()+1; i += (n)) {
                numeros[i - 2].setFalse();
            }
        }

    }
}

