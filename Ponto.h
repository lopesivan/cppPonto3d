//
// Created by ivan on 27/10/17.
//

#ifndef CPPPONTO3D_PONTO_H
#define CPPPONTO3D_PONTO_H

#include <cassert>
#include <ostream>
#include <iostream>

template < class T, int dim >
class Ponto
{
private:
    T _coords[dim];

public:
    Ponto () = default;

    explicit Ponto (T coords[dim] )
    {
        for (int index = 0; index < dim; index++)
            _coords[index] = coords[index];
    }

    T& operator[] (int index)
    {
        assert (0 <= index && index < dim);
        return _coords[index];
    }

};

template < class T, int dim >
inline
std::ostream& operator<< (std::ostream &os,  Ponto<T, dim> &ponto)
{
    os << "(";
    for (int index = 0; index < dim-1; index++)
        os << ponto[index] << ", ";

    os << ponto[dim-1];
    os << ")";

    return os;
};

#endif //CPPPONTO3D_PONTO_H