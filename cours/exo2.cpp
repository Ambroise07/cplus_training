#include <iostream>
using namespace std;

void repete(string s, char c)
{
    int k=0;
    cout << "Entrer une chaine de caractere de votre choix" << endl;
    getline(cin,s);
    cout << "Entrer le carctere dont vous cherchez le nombre d'occurence" << endl;
    cin >> c;
    for(int i =0; i<=s.length() - 1; i++)
    {
        if(s[i]==c)
        {
            k = k + 1;
        }
    }
    cout << "Le nombre d'occurence de "<< c << " dans la chaine "<< s <<" est: "<< k << endl;
}
int main()
{

    string chaine;
    char caractere;
    repete(chaine,caractere);

    return 0;
}
