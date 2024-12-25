#include <iostream>

using namespace std;

class date{
protected:
    int jour;
    int mois;
    int annee;
public:
    date(int jour=12 ,int mois=12 ,int annee=2000){
    this->jour=jour;
    this->mois=mois;
    this->annee=annee;
    }
    virtual void afficher(){
    cout<<jour<<endl;
    cout<<mois<<endl;
    cout<<annee<<endl;
    }
};

class employer{
int code;
string nom;
int nbr_hr;
float taux_hr;
date d;
public:
    employer(int code=1 , string nom="" , int nbr_hr=1 , int taux_hr=1 ,date d=date()){
    this->nom = nom;
    this->code=code;
    this->nbr_hr=nbr_hr;
    this->taux_hr=taux_hr;
    }

    void afficher(){
    cout<<code<<endl;
    cout<<nom<<endl;
    cout<<nbr_hr<<endl;
    cout<<taux_hr<<endl;
    d.afficher();
    }

};


int main()
{
    employer e(1,"ddd",1,1,date(10 , 2 , 2024));
    e.afficher();
    return 0;
}
