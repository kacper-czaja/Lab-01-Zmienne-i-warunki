#include <iostream>
#include <math.h>
#include <valarray>
using namespace std;
float a, b, c, delta, x1, x2;

int main() {
     cout<<"Podaj a, b i c, aby rozwiazac rownanie ax^2 * bx + c = 0"<<endl;
     cin>>a>>b>>c;
     delta = b*b - 4*a*c;
     if (delta < 0) {
          cout<<"Delta: "<<endl;
          cout<<"Rownanie nie ma rozwiazan";
     }
     else if (delta == 0) {
          x1 = -b/(2*a);
          cout<<"Rownanie ma jedno rozwiazanie: "<<x1<<endl;
     }
     else {
          x1 = (-b + sqrt(delta))/(2*a);
          x2 = (-b - sqrt(delta))/(2*a);
          cout<<"Rownanie ma dwa rozwiazania: "<<endl;
          cout<<"x1: "<<x1<<endl;
          cout<<"x2: "<<x2<<endl;
     }
     return 0;
}
