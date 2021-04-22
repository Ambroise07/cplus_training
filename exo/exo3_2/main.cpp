#include <iostream>

using namespace std;

class cercle
{
    private: double r,P,A,h;
    public:
        cercle();
        void afficher();
};

cercle::cercle()
{

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

    cercle C;
    C.afficher();
    return 0;
}
