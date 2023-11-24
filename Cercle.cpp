#include "main.hpp"
#include"Cercle.hpp"

Cercle::Cercle(double r) : rayon(r){};
double Cercle::Surface() const
{
    return((double)3.14*rayon*rayon);
}
void Cercle::Afficher() const {
    cout<<"Cercle de rayon : "<<rayon<<endl;
}

