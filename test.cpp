#include <iostream>
using namespace std;
int test(int x){
    cout << "je suis un nombre entier " << x << endl;
    return x;
};
float test(float y){
     cout << "je suis un nombre float " << y << endl;
     return y;
}
void test(int x , float y){

    cout << "je suis un nombre entier " << x << endl;
    cout << "je suis un nombre float " << y << endl;

}
int main(){
    int x = 10;
    float y = 55.55;
    test(x);
    test(y);
    test(x,y);
    return 0;
}