#ifndef SRC_CERCLE_H_
#define SRC_CERCLE_H_
#include "Forme2D.hpp"

class Cercle : public Forme2D{
    private:
        double rayon;
    public:    
        Cercle(double);
        double Surface() const override;
        void Afficher() const override;
}; 
#endif