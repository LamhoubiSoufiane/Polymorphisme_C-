#ifndef SRC_FORME2D_H_
#define SRC_FORME2D_H_
#include "Forme.hpp"

class Forme2D : public Forme{
    public:
        virtual double Surface() const=0;
        virtual void Afficher() const=0; 
        virtual ~Forme2D();
};

#endif