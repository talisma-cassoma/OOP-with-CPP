#include<stdio.h>
/*#include<conio.h>*/
#include <cstdio>
#include <cstdlib>
#include <iostream>
#include <math.h>


class point {
      private: 
      double x,y;
      public:
             point(double A, double B);  /* le prof a choisi les variables A et B pour 
             montrer que les variable prive non aucun rapport avec les variables public */ 
             
             point();///////////////// autre constuctreur point qu'on l'appelle construction par defaut  
             
             void affiche();
             double distance(point);
             point milieu(point);
             double getX() const;
             void setX(double x);
              double getY() const;
             void setY(double y);};
             
             
             point::point(double A, double B){
                                 this->x=A;
                                 this->y=B;}
                                 
             point::point(){
                                 this->x=0;
                                 this->y=0;}
                                 
            void point::affiche(){
                  cout << "<" << x << "," << y << ">" << endl;}
                  
                  double point::getX() const{ 
                         return x; }
                  
                 double point::getY() const{ 
                         return y; }
                void point::setX(double A){ 
                         this-> x=A; }
                void point::setY(double B){ 
                         this-> y=B; }    
                         
            double point::distance(point v){
			double d;
			d= sqrt((v.x-x)*(v.x-x)+(v.y-y)*(v.y-y));
			return d;}             
			
			 point point::milieu(point v){
			 point m;
			 m.x=(v.x-x)/2;
			 m.y=(v.y-y)/2;
			 return m;
			 }
