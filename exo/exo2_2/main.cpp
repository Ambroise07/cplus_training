#include <iostream>

using namespace std;

class personne
{
    private: string n;
                double a,s;
    public:
        personne(string nom,double age,double salaire);
        void afficher1();
         void afficher2();
};

personne::personne(string nom,double age,double salaire)
{
    n=nom;
    a=age;
    s=salaire;
    cout << "Entrer votre nom complet" <<endl;
    getline(cin,n);
    cout << "Entrer votre age" <<endl;
    cin >> a;
    cout << "Entrer votre salaire" <<endl;
    cin >> s;
}

void personne::afficher1()
{
    if(s<=50000)
    {
        cout << "Vous travaillez avec le BEPC" << endl;
    }

    if(s>50000 && s<=100000)
    {
        cout << "Vous travaillez avec le BAC" << endl;
    }

    if(s>100000 && s<=200000)
    {
        cout << "Vous travaillez avec la LICENSE" << endl;
    }
}

void personne::afficher2()
{
    cout << "NOM: " << n << endl;
    cout << "AGE: " << a << " ans" << endl;
    cout << "SALAIRE: " << s << " FCFA" << endl;
}

int main()
{
    string no;
    double ag,sal;
    personne P(no,ag,sal);
    P.afficher1();
    P.afficher2();
    return 0;
}
