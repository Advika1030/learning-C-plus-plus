#include <iostream>
using namespace std;

class Complex{
    public:
    double re,im;
};

int main(){
    Complex c = {4.2,5.3};
    cout << c.re << " " << c.im << endl;
}