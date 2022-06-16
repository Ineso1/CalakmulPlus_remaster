#ifndef PLUS_H
#define PLUS_H
#include <iostream>

/*
Clase Plus, clase base de Serie y Movie con el fin de poder guardarlos juntos en un mismo vector
Clase que encapsula los elementos generales del servivio
*/

class Plus{
    private:
        char cuenta;
    public:
        Plus();
        Plus(char);
        virtual ~Plus() {}
        char getCuenta();
        void setCuenta(char);
        virtual void getInfo();
        Plus* &operator[](int);
        friend std::ostream& operator<< (std::ostream &, Plus&);

};

#endif // PLUS_H
