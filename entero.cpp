//
// Created by utec on 21/11/19.
//

#include "entero.h"

tipodo operator+(entero &x, entero &y) {
    tipodo z;
    z=x.areatri() + y.areatri();
    return z;
}

ostream& operator<<(ostream &o, entero e){
    o<< e;
    return o;
}

tipodo operator-(entero &x, entero &y) {
    tipodo z;
    z=x.areatri() - y.areatri();
    return z;
}

tipodo operator*(entero &x, entero &y) {
    tipodo z;
    z=x.areatri() * y.areatri();
    return z;
}

tipodo operator/(entero &x, entero &y) {
    tipodo z;
    z=x.areatri() / y.areatri();
    return z;
}
