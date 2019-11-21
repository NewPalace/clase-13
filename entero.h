//
// Created by utec on 21/11/19.
//

#ifndef CLASE_13_ENTERO_H
#define CLASE_13_ENTERO_H

#include "includes.h"

class entero {
private:
    tipodo m_altura, m_base;
public:
    entero() { };
    entero(tipodo altura, tipodo base){ m_altura=altura; m_base= base; }

    tipodo getMAltura() const {
        return m_altura;
    }

    void setMAltura(tipodo mAltura) {
        m_altura = mAltura;
    }

    tipodo getMBase() const {
        return m_base;
    }

    void setMBase(tipodo mBase) {
        m_base = mBase;
    }
    tipodo areatri(){
        return (m_base*m_altura)/2;
    }

    friend tipodo operator+(entero& x, entero& y);
    friend ostream& operator<<(ostream &o, entero e);
    friend tipodo operator-(entero& x, entero& y);
    friend tipodo operator*(entero& x, entero& y);
    friend tipodo operator/(entero& x, entero& y);
};


#endif //CLASE_13_ENTERO_H
