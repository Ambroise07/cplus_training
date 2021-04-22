#include <iostream>

using namespace std;

class cercle
{
    private: double r,P,A,h;
    public:
        cercle(double ray,double haut);
        void afficher();
};

cercle::cercle(double ray,double haut)
{
    r=ray;
    h=haut;
    cout << "Entrer le rayon de votre cylindre" << endl;
    cin >> r;
    cout << "Entrer la hauteur de votre cylindre" << endl;
    cin >> h;
    P=2*3.14*r;
    A=2*3.14*h;
}

void cercle::afficher()
{
    cout << "Le perimetre de ce cylindre est: " << P << " et son air donne: " << A << endl;
}

int main()
{
    double ra,ha;
    cercle C(ra,ha);
    C.afficher();
    return 0;
}
