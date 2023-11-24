#include "main.hpp"
#include "Carre.hpp"

Carre::Carre(double c) : cote(c)
{
}
double Carre::Surface() const{
    return((double)cote*cote);
}
void Carre::Afficher() const 
{
    cout<<"Carre de cote : "<<cote<<endl;
}
