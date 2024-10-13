#include <iostream>
using namespace std;
float a, b, c, x, ax;

int main() {
    cout<<"Podaj a i b, aby rozwiazac rownanie a*x + b = 0"<<endl;
    cout<<"a: ";
    cin>>a;
    cout<<"b: ";
    cin>>b;
    ax = b * -1;
    ax = ax / a;
    cout<<ax;
}