#include <iostream>
using namespace std;
class Rectangle{
    private: double L,l,t;
public:
    Rectangle();
    void afficher();


    
};
Rectangle::Rectangle(){
        cout << "Entrer la longueur " << endl;
        cin >> L;
        cout << "Entrer la largeur " << endl;
        cin >> l;

    };
void Rectangle::afficher(){
        cout << "L'aire est : " << L*l << endl;
        cout << "Le perimetre est : " << (L+l)*2 << endl;
    };


int main(){
    Rectangle R;
    R.afficher();
}