#ifndef CHAINE_T_H
#define CHAINE_T_H

#include "chaine.h"


class chaine_T : public chaine
{
    public:
        chaine_T();
        chaine_T(char *);
        virtual ~chaine_T();
        chaine_T(const chaine_T &);
        chaine_T & operator=(const chaine_T &);
        virtual  void affiche()const;
        void calcul();

    private:
        bool type;
        float Val;
};

#endif // CHAINE_T_H
