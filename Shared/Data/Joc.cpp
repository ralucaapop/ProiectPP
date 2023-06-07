#include "C:\Users\Raluca\OneDrive\Desktop\fac\ProJoc\Data\Joc.h"
#include <iostream>

Joc::Joc()
{
    denumire=nullptr;
    pret=0;
    nrCumparari=0;
    memorie=0;
    id=0;
}
Joc::Joc(int id, string denumire,double pret, int nrCumparari, double memorie)
{
    this->id=id;
    this->denumire=denumire;
    this->pret=pret;
    this->nrCumparari=nrCumparari;
    this->memorie=memorie;
}
Joc::Joc(Joc&j)
{
    this->id=j.id;
    this->denumire=j.denumire;
    this->pret=j.pret;
    this->nrCumparari=j.nrCumparari;
    this->memorie=j.memorie;
}
/*
std::ostream& operator<<(std::ostream& o,const Joc& j)
{
    o<<"ID: "<<j.id<<"\nDenumire: "<<j.denumire<<"\nMmeorie: "<<j.memorie<<"\nNumar de cumparari: "<<j.nrCumparari<<"\nPret: "<<j.pret;
    return o;
}*/
std::ostream& operator<<(std::ostream& o,const Joc& j)
{
    o<<j.id<<"\n"<<j.denumire<<"\n"<<j.memorie<<"\n"<<j.nrCumparari<<"\n"<<j.pret;
    return o;
}
void Joc::afisareJ()
{
    cout<<"ID: "<<id<<"\nNume: "<<denumire<<"\nMemorie: "<<memorie<<"\nNrCumparari: "<<nrCumparari<<"\nPret: "<<pret;
}
int Joc::getId()
{
    return id;
}
void Joc::setPret(double x)
{
    this->pret=x;
}
void Joc::setId(int x)
{
    this->id=x;
}
Joc::~Joc()
{
    //dtor
}
/*
Joc& Joc::operator=(Joc&j)
{
    if(this==&j)
        return *this;
    else {
    this->id=j.id;
    this->denumire=j.denumire;
    this->pret=j.pret;
    this->nrCumparari=j.nrCumparari;
    this->memorie=j.memorie;
    }
    return*this;
}*/
