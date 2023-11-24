#ifndef SRC_FORME_H_
#define SRC_FORME_H_
class Forme
{
    public:
        virtual double Surface() const=0;
        virtual void Afficher() const=0; 
        virtual ~Forme();
};

#endif