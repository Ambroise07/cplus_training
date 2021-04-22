#include <iostream>

using namespace std;

class cercle
{
    private: double r,P,A;
    public:
        cercle();
        void afficher();
};

cercle::cercle()
{
    cout << "Entrer le rayon de votre cercle" << endl;
    cin >> r;
    P=2*3.14*r;
    A=3.14*r*r;
}

void cercle::afficher()
{
    cout << "Le perimetre de ce cercle est: " << P << " et son air donne: " << A << endl;
}

int main()
{
    cercle C;
    C.afficher();
    return 0;
}
