#ifndef CHAINE_H
#define CHAINE_H


class chaine
{
    public:
        chaine();
       virtual ~chaine();
        chaine(char*);
       chaine(const chaine &);
      virtual  void affiche()const;
        chaine & operator=(const chaine &);
        bool  operator==(const chaine &);
        chaine & operator+(const chaine &);
        char operator[](int);

    protected:
        char *T;
};

#endif // CHAINE_H
