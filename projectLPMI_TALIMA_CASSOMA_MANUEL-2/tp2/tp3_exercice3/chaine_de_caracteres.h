#include<iostream>
#include<stdio.h>
#include<iomanip>
#include <cstdio>
#include <cstdlib>
#include <math.h>
#include <string.h>

using namespace std;

class chaine_de_caracteres
{char* chainedecaracteres;
private:
	
public :
	chaine_de_caracteres();
	chaine_de_caracteres(char * str,int size );///
	~chaine_de_caracteres();
	void afficher();///
	int calculelength();///
	void ajoutercaractere(char c,int position);
	char*inverschaine();
	void supprimercaractere(char c);

};


    chaine_de_caracteres::chaine_de_caracteres( char* str,int size)
    {  this->chainedecaracteres =new char[size];
for(int i=0;i< size;i++){ 
chainedecaracteres[i]=str[i];
}
    } 

    chaine_de_caracteres::chaine_de_caracteres()
    { this->chainedecaracteres =new char[0];
    }

    
 
    void chaine_de_caracteres::afficher()
	{int i;
	for(i=0;i<=sizeof(this->chainedecaracteres);i++){
	cout<<chainedecaracteres[i];
}
    }
   
   
    void chaine_de_caracteres::ajoutercaractere(char c,int position )
   { this->chainedecaracteres[position]= c;

   } 
   char * chaine_de_caracteres::inverschaine()
  { int cpt=sizeof(this->chainedecaracteres);
char invers[sizeof(this->chainedecaracteres)];
for(int i=0;i< sizeof(this->chainedecaracteres);i++){
	invers[i] = this->chainedecaracteres[cpt];
} 
	return invers;
   } 
   
   void chaine_de_caracteres::supprimercaractere(char c)
  { int i, j;
  
	for(i=0;i<sizeof(this->chainedecaracteres);i++)
	{if(this->chainedecaracteres[i]== c){
		for(j=i; j<sizeof(this->chainedecaracteres); j++) {this->chainedecaracteres[j]=this->chainedecaracteres[j+1];
		}
	}
	}
cout<<"tts les caracteres sont supprimes"<<endl;
}

  chaine_de_caracteres::~chaine_de_caracteres()
   { delete chainedecaracteres;
cout<<"----cest la fin------"<<endl;   }



 
