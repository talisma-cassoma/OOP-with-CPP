#include<iostream>
#include"chaine_de_caracteres.h"
using namespace std;



int chaine_de_caracteres::calculelength()        ////////////////////////////////////////////////////////////
   { int L;
   cout<<"-----la longuer de chaine est----"<<endl;
	 L=sizeof(this->chainedecaracteres);
	return L;
   }

int main()
{
	char test[7]={'t','a','l','i','s','m','a'};
    chaine_de_caracteres CHAINE(test,7);  //initialisation d'une chaine de caratecteres  	
	 
   
	CHAINE.afficher();
	cout<<endl;
	CHAINE.calculelength();
  // CHAINE.supprimercaractere('a');

   
  	int temp;
cin>>temp;// pour metrre pausse dans l'affichage

	system("pause");
}
