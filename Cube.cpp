#include "main.hpp"
#include"Cube.hpp"

Cube::Cube(double c)
{
    this->cote=c;
}
double Cube::Surface() const{
    return ((double)6*cote*cote);
}
double Cube::Volume()
{
    return((double)cote*cote*cote);
}
void Cube::Afficher() const
{
    cout<<"Cube de cote : "<<cote<<endl;
}
Cube::~Cube(){

}

