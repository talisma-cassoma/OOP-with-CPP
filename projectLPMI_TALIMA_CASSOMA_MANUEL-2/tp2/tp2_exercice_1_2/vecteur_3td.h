#include<stdio.h>
#include<conio.h>

//exercice1
class vecteur_3td {
      private: 
      float x,y,z;
      public:
        
		     vecteur_3td(float C1, float C2,float C3);  /* le prof a choisi les variables A et B pour 
             montrer que les variable prive non aucun rapport avec les variables public */ 
             
             vecteur_3td();///////////////// autre constuctreur point qu'on l'appelle construction par defaut  
             
            void affiche();
            
             
             int coincide(vecteur_3td);
             vecteur_3td normax(vecteur_3td);
             vecteur_3td Vect_Oppose();
             vecteur_3td Vect_Oppose_Adrss();
             };
			//exercice2 
   vecteur_3td::vecteur_3td(float C1=0, float C2=0, float C3=0){
                                 this->x=C1;
                                 this->y=C2;
                                 this->z=C3;}
            
	vecteur_3td::vecteur_3td(){
                                this->x=0;
                                 this->y=0;
								 this->z=0;} 
								 
								 vecteur_3td::coincide (vecteur_3td v){ 
								 if ( (v.x == x) && (v.y == y) && (v.z == z) ) 
								
								 return 1 ; 
								 else return 0 ;}  
							 
	   vecteur_3td vecteur_3td::normax (vecteur_3td v){ 
								 
								 float norm1 = x*x + y*y + z*z ; 
								 float norm2 = v.x*v.x + v.y*v.y + v.z*v.z ; 
								 if (norm1>norm2) return *this ; // 
								                  else return v;} 
		void vecteur_3td::affiche(){
		  	                    cout << "<" << x << "," << y << "," << z << ">" <<endl;}
		  	                    
								               vecteur_3td vecteur_3td::Vect_Oppose(){//////////par valeur 
								
											   x=-x;    
								               y=-y;
											   z=-z;
											   vecteur_3td p(x,y,z);
											    cout << "<" << x << "," << y <<"," << z <<  ">" << endl;
											   return p;
											    
								 }
								 
								 
