#ifndef JOC_H
#define JOC_H
#include <string>
using namespace std;
class Joc
{
    int id;
    string denumire;
    double pret;
    int nrCumparari;
    double memorie;
    public:
        int getId();
        Joc();
        Joc(int, string,double,int, double);
        Joc(Joc&);
        virtual ~Joc();
        friend ostream& operator<<(ostream&,const Joc&);
        void setPret(double);
        void setId(int);
        void afisareJ();
        //Joc& operator=(Joc&);

};

#endif // JOC_H
