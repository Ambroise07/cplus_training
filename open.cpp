#include <iostream>
using namespace std;
int premier(int x){
    int k = 0;
    for(int i = 1 ; i <= x; i++){
        if (x % i == 0){
            k+=1;
        }
    }
    if(k == 2){
        return 1;
        };
    return 0;
}
int main(){
    int nombre;
    cout << "Enter le nombre " ;
    cin >> nombre;
    int tabpre[] = {2,3,5,7,11,13,17,19,23,29,31};
    if(premier(nombre) == 1){
        cout << "Le nombre est premier " << endl;
    }else{
        cout << "Le nombre n'est pas premier " << endl;
    }


}