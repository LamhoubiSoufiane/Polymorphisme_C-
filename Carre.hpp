#ifndef SRC_CARRE_H_
#define SRC_CARRE_H_
#include "Forme2D.hpp"

class Carre: public Forme2D{
    private:
        double cote;
    public:
        Carre(double);
        double Surface() const override;
        void Afficher() const override;
};
#endif