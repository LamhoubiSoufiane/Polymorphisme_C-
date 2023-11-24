#ifndef SRC_FORME3D_H_
#define SRC_FORME3D_H_
#include "Forme.hpp"

class Forme3D : public Forme{
    public : 
        virtual double Surface() const=0;
        virtual void Afficher() const=0; 
        virtual ~Forme3D();
};

#endif