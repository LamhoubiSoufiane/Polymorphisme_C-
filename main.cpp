#include "main.hpp"
#include "prob1.cpp"
#include "Forme.cpp"
#include "Forme3D.cpp"
#include "Forme2D.cpp"
#include "Carre.cpp"
#include "Cercle.cpp"
#include "Cube.cpp"

#include<list>

int main()
{
    list<Forme*> LesFormes;
    Cube moncube(3.0);
    Carre moncarre(3.0);
    Cercle moncercle(3.0);
    LesFormes.push_back(new Cube(5.0));
    LesFormes.push_back(new Carre(6.0));
    LesFormes.push_back(new Cercle(7.0));
    cout<<"surface cube : "<<moncube.Surface()<<endl;
    cout<<"volume cube : "<<moncube.Volume()<<endl;
    cout<<"surface carre: "<<moncarre.Surface()<<endl;
    cout<<"surface cercle: "<<moncercle.Surface()<<endl;
    cout<<"/*********************************/"<<endl;
    for(const auto &f:LesFormes) f->Afficher();
    // cout<<"volume : "<<moncarre.Volume()<<endl;
}