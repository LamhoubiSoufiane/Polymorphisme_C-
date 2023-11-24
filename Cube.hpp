#ifndef SRC_CUBE_H_
#define SRC_CUBE_H_
#include"Forme3D.hpp"

class Cube : public Forme3D{
    private:
        double cote;
    public:
        Cube(double);
        double Surface() const override;
        double Volume();
        void Afficher() const override;
        ~Cube();
};

#endif