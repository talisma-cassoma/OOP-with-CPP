#include<stdio.h>
#include<iostream>
#include<iomanip>
using namespace std ;
#include "point.h"
#include <cstdio>
#include <cstdlib>
#include <iostream>
#include <math.h>



int main(){//testPoint.cpp 
point p0(2.568,2); 
point p1(4,0);
//point p5(7,8); 
  
cout.precision(3); cout<<"p0=";// pour le nombre de nombre afficher 
p0.affiche(); cout<<"p1=";
p1.affiche(); 
p0.setX(5);

cout<<"l'abicisse de p0 est" <<p0.getX()<<endl;  
cout<<"l'abicisse de p1 est" <<p1.getX()<<endl;
cout<<endl;


// question 1
cout<<"l'ordonnee de p0 est" <<p0.getY()<<endl; 
cout<<"l'ordonnee de p1 est" <<p1.getY()<<endl;
cout<<endl;

// question 2
point p2; 
p2.affiche(); cout<<endl;
//cout<<"l'abicisse de p2 est" <<p2.getX()<<endl;  ATTETION CETTE INSTRUCTION ELLE MARCHE PUISQUE LA FONCTION get e set sont definies pour toute la class point 


// question 3
   point *p3;  // je suis pointeuer sur un obejet de type point

p3=new point(2,2);// j'alloue dynaquement un obejet de tupe point 
cout<<"p3="; 
p3->affiche();// comme poin cest un adresse, je dois utiliser l'operateur -> pour acceder aux membres de cet objet
p3->setY(0);
cout<<"p3=";
(*p3).affiche();// cette ecriture est possible: je pointe l'obejet puis j'appele sa methode d'affiche() 

delete p3;// ne pas oublier de liberer la memoire allou� pour cet objet
cout<<endl;



//question 5         
//const point p5(7,8);
 point p5(7,8); 
cout << "p5 = "; 
p5.affiche(); 
cout << "L*abscisse de p5 est " << p5.getX() <<endl; 
cout << "L*ordonnee de p5 est " << p5.getY() << endl; 


//question 6

 cout <<"p1=";
    p1.affiche();
cout << "p5 = "; 
p5.affiche();   
double  distance = p5.distance(p1);
cout << "p5 = "; 
p5.affiche();
cout << "p1 = ";
p1.affiche();

cout << "La distance entre p5 et p1 est de " << distance << endl;
point pointMilieu = p5.milieu(p1);
cout << "Le point milieu entre p5 et p1 est "; 
pointMilieu.affiche(); 

//question 4
point tb[10];

double a;
cin>> a ;
tb[0].setY(a);
 
int i;
cout<< "un trableau de 10 points:"<<endl;
for(i=0; i<10; i++){cout<<"p"<<i<<"=";
tb[i].affiche();}
cout<<endl;
int temp;
cin >>temp; ///// pause au pg pour voir le resultat


return 0;
}  
