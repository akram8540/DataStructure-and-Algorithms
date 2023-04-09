#include<iostream>
#include<typeinfo>
using namespace std;

void fun(auto a){
    cout << typeid(a).name();
    
}
int main(){
    auto p = 4.5;
    fun(p);
    
    return 0;
}