#include<stdio.h>
#include<iostream>
#include<iomanip>
using namespace std ;
#include "vecteur_3td.h"


int main(){    //testvecteur_3td.cpp

vecteur_3td v1(10,2,3);
vecteur_3td v2(10,2,3);

int comp_=v1.coincide(v2);

vecteur_3td Normax=v1.normax(v2);
cout<<"v1 est plus grand que v2"  <<endl;

if (comp_==1) {cout<<"vrai"<<endl;
}
else cout<<"faux"<<endl;

cout<<"le vecteur avec la plus grand norme est"<<endl;
Normax.affiche();

cout <<"------le vecteur oppose sera-------"<<endl;  
v1.Vect_Oppose();



int temp;
cin>>temp;// pour metrre pausse dans l'affichage
}

