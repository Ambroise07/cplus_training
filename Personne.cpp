#include <iostream>
using namespace std;
class Personne{
    public :
     string name;

    public :

        void presenttoi(){
            cout << "qui es tu ?? : " << endl;
            getline(cin, name);
        }

};
class Footbaleur : public Personne{
    string prof;
    int age;
    public :
        void demander(){
            cout << "entrer votre profession" << endl;
            getline(cin, prof);
            cout << "quel est votre age ? : " << endl;
            cin >> age;
        }
        void mesinfos(){
            cout << "Mon travail est : " << prof << endl;
            cout << "Mon age est : " << age << endl;
            cout << "Je suis : " << "un " << name << endl;
        }

};
int main(){
    Footbaleur F;
    F.presenttoi();
    F.demander();
    F.mesinfos();

}