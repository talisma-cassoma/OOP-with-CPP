#include <iostream>
#include <string.h>
using namespace std;
#include "chaine.h"

chaine::chaine()
{
    T=new char[50];
    strcpy(T,"");
}

chaine::chaine(char *texte)
{
    T=new char[strlen(texte)+1];
    strcpy(T,texte);
}

void chaine::affiche() const
{
    cout << "La chaine est :" << endl;
    cout << T << endl;
}
chaine::~chaine()
{
    delete [] T;
}
chaine::chaine(const chaine &B)
{
    T= new char[strlen(B.T)+1];
    strcpy(T,B.T);
    cout << "constructeur de recopie de la class mere" << endl;
}
chaine & chaine::operator=(const chaine &B)
{
    delete [] B.T;
     T= new char[strlen(B.T)+1];
    strcpy(T,B.T);
    cout << "Surcharge operator d affectation " << endl;
    return *this;
}
bool  chaine::operator==(const chaine &B)
{
    if(strcmp(T,B.T)==0)
    return true;
    else
        return false;
}
chaine & chaine::operator+(const chaine &B)
{
    static chaine k;
   strcpy(k.T,T);
   strncat(k.T,B.T,strlen(T)+1);
   return k;
}
char chaine::operator[](int n)
{
   for(int i=0;i<n;i++)
    T[n]=T[i];
   return T[n];
}
