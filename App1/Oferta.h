#ifndef OFERTA_H
#define OFERTA_H
#include <stdlib.h>
#include "Joc.h"
using namespace std;
class Oferta
{
    int nrJ;
    int id;
    double pret;
    Joc **jocuri;
    //jocuri= new Joc*[nrJ];
    public:
        Oferta(int,double, int);
        virtual ~Oferta();
        void afisare();
        void adaugaJoc(Joc *j, int i);
        void memorie(int);
        int getId();
};

#endif // OFERTA_H
