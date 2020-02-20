//
// Created by Javier Fuentes Mora on 19/02/20.
//

#ifndef ERATOSTENES_NUMERO_H
#define ERATOSTENES_NUMERO_H


class Numero {
private:
    int num;
    bool primo;
public:
    Numero(int num, bool primo = true);

    void setFalse();

    bool getPrimo();

    int getNumero();

};


#endif //ERATOSTENES_NUMERO_H
