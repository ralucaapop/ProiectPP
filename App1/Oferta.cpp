#include "Oferta.h"
#include <iostream>
#include "Joc.h"

Oferta::Oferta(int id, double pret, int nrj)
{
    this->id=id;
    this->pret=pret;
    this->nrJ=nrj;
}
void Oferta::afisare()
{

    cout<<"\nId: "<<id<<"\nPret: "<<pret<<"\nNr de Jocuri: "<<nrJ;
    cout<<"\nJOCURILE:\n";
    for(int i=0;i<nrJ;i++)
        {   cout<<"\nJocul "<<i+1<<":\n";
            jocuri[i]->afisareJ();
            cout<<endl;
        }
}
void Oferta::memorie(int nrj)
{
    this->jocuri=new Joc*[nrj];

}
void Oferta::adaugaJoc(Joc *j, int i)
{
    //int x=j->getId();
    jocuri[i]= new Joc(*j);
    //jocuri[i]->afisare();
    //j->afisare();
}
int Oferta::getId()
{
    return id;
}
Oferta::~Oferta()
{
    //dtor
}
