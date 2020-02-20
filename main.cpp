#include <iostream>
#include "ListaCriba.h"

int main() {

    ListaCriba lista;
    int n = 20;
    for (int i = 2; i < n+1; i++) {
        lista.addNumero(i);
    }
    lista.algoritmo();
    lista.printPrimos();
    return 0;
}
