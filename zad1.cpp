#include <iostream>
using namespace std;
int a, b = 0, i = 0;

int main() {
    do {
        i++;
        b = a;
        cout<<"Podaj "<<i<<" liczbe: ";
        cin>>a;
    } while(a>=b && i<=4);
    if(i>=4) {
        cout<<"Podano 5 liczb";
    }
    else {
        cout<<"Podano liczbe mniejsza niz poprzednia";
    }
    return 0;
}