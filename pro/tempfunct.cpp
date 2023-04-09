#include<iostream>
using namespace std;

class temperature{
    float f, c;
    public:
     void getdata(){
        cout << "Enter temperature in ferenheit";
        cin >> f;
        c = (f - 32.0)*(5.0/9.0);
    }
    void showdata(){
        cout << "the temperature " << f << "in celcius is " << c;

    }
};

int main(){
    temperature t1;

    t1.getdata();
    t1.showdata();
}