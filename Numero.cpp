//
// Created by Javier Fuentes Mora on 19/02/20.
//

#include "Numero.h"

Numero::Numero(int num, bool primo) : num(num), primo(primo) {}

bool Numero::getPrimo() {
    return primo;
}

void Numero::setPrimo() {
    primo = false;
}

int Numero::getNumero() {
    return num;
}

