#include <iostream>
#include "chaine.h"
#include "chaine_T.h"
#include <string.h>
using namespace std;

int main()
{
    /**************** Class Mere ************************/
    chaine T,L("talisma");
    T.affiche();
    L.affiche();
    chaine K(L);
    K.affiche();
    chaine Mot;
    Mot="johnn";
    Mot.affiche();
    if(Mot==L)
        cout << "Les deux chaines sont egaux" << endl;
    else
        cout << "Les deux chaines ne sont pas egaux" << endl;
     Mot=Mot+L;
    Mot.affiche();
    cout << L [0] << endl;
    /*********************** Class Fille ***********************/
   chaine_T  mo("badu"),c("jonhnn");
   chaine_T n;
   c.affiche();
   n.affiche();
   chaine_T lili(c);
   cout << "afficher yola" << endl;
   lili.affiche();
   chaine_T HOHO;
   cout << "afficher HOHO " << endl;
   HOHO=mo;
   HOHO.affiche();


    return 0;
}
