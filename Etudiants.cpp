#include <iostream>
using namespace std;
class Etudiant{
    string Name,Fili;

    int Age, Annee;
    public :
        void getinfo(){
            cout << "entrer votre nom : " << endl;
            getline(cin, Name);
            cout << "entrer votre filière : " << endl;
            getline(cin, Fili);
            cout << "entrer votre age :" << endl;
            cin >> Age;
            cout << "entere votre anné de naissances : " << endl;
            cin >> Annee;
        }
        void show(){
            cout << "votre nom est : " << Name << endl;
            cout << "votre filière est : " << Fili << endl;
            cout << "votre age est : " << 2019 - Age << endl;
        }

};

int main(){
    Etudiant E;
    E.getinfo();
    E.show();
}