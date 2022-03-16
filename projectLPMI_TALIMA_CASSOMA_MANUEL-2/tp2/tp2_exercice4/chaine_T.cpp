#include <iostream>
#include "chaine_T.h"
#include <string.h>
#include <stdlib.h>
using namespace std;

chaine_T::chaine_T()
{
    type=false;
    Val=0;
}
chaine_T::~chaine_T()
{
}

chaine_T::chaine_T(char *texte):chaine(texte)
{
    type=false;
    Val=0.0;
}
chaine_T::chaine_T(const chaine_T &v) :chaine(v)
{
        type=v.type;
    Val=v.Val;
    cout << "********* Constructeur par rocopie de la classe fille ***************" << endl;
}
chaine_T &chaine_T::operator=(const chaine_T &v)
{
    delete [] v.T;
    strcpy(T,v.T);
    type=v.type;
    Val=v.Val;
    cout << "Surcharge d operateur d affectation de la class fille" << endl;
    return *this;
}

void chaine_T::affiche() const
{
    chaine::affiche();
    cout << "La valeur est :  val=" << Val << endl;
    cout << "Le Type est :    Type=" <<type <<endl;
 }
void chaine_T::calcul()
{
    float x;
    x=atof(T);
    if(x!=0)
    {
        type=true;
        Val=x;
    }
}
