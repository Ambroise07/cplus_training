#include <iostream>
using namespace std;
    class Rectangle {
        int L,l, P,A;
       public : 
       void getvalue(){
            cout << "entrer la longueur" << endl;
            cin >> L ;
            cout << "entrer la largeur" << endl;
            cin >> l;
        }
        void show(){
            cout << "le perimetre est :" << (L + l)*2 << endl;
            cout << "l'aire est :" << (L* l) << endl;
        }
    };
int main(){

    Rectangle R;
    R.getvalue();
    R.show();
    return 0;
}
